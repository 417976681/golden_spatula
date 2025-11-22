#include "BarChartWidget.h"
#include <QPainter>
#include <QLinearGradient>
#include <QToolTip>
#include <QMouseEvent>
#include <QFontMetrics>
#include <QDebug>

BarChartWidget::BarChartWidget(QWidget *parent)
    : QWidget(parent)
{
    setMouseTracking(true);
    m_anim = new QVariantAnimation(this);
    m_anim->setStartValue(0.0);
    m_anim->setEndValue(1.0);
    m_anim->setDuration(1920);
    connect(m_anim, &QVariantAnimation::valueChanged, this, [this](const QVariant &v){
        m_animProgress = v.toDouble();
        update();
    });
}

void BarChartWidget::setBars(const QVector<Bar> &bars)
{
    m_bars = bars;
    recomputeGeom();
    update();
}

void BarChartWidget::setMaxValue(int maxv)
{
    m_maxValue = qMax(1, maxv);
    recomputeGeom();
    update();
}

void BarChartWidget::setDepth(int d) { m_depth = d; recomputeGeom(); update(); }

void BarChartWidget::startAnimation(int durationMs)
{
    m_anim->stop();
    m_anim->setDuration(durationMs);
    m_anim->setStartValue(0.0);
    m_anim->setEndValue(1.0);
    m_anim->start();
}

void BarChartWidget::recomputeGeom()
{
    m_geom.clear();
    if (m_bars.isEmpty()) return;

    int w = width();
    int h = height();

    int marginTop = 10;
    int marginBottom = 30 + 20; // label space
    int availableH = h - marginTop - marginBottom;
    int count = m_bars.size();
    int gap = qMax(8, w / 80);
    int totalGap = gap * (count + 1);
    int barAreaW = w - totalGap;
    int barW = qMax(10, barAreaW / count);

    int x = gap;
    for (int i = 0; i < count; ++i) {
        int value = qBound(0, m_bars[i].value, m_maxValue);
        int barHeight = (int)((double)value / m_maxValue * availableH);
        int frontLeft = x;
        int frontTop = marginTop + (availableH - barHeight);
        QRect frontRect(frontLeft, frontTop, barW, barHeight);

        QPoint top1(frontLeft, frontTop);
        QPoint top2(frontLeft + barW, frontTop);
        QPoint top3(frontLeft + barW + m_depth, frontTop - m_depth);
        QPoint top4(frontLeft + m_depth, frontTop - m_depth);
        QPolygon topPoly({top1, top2, top3, top4});

        QPoint side1(frontLeft + barW, frontTop);
        QPoint side2(frontLeft + barW + m_depth, frontTop - m_depth);
        QPoint side3(frontLeft + barW + m_depth, frontTop - m_depth + barHeight);
        QPoint side4(frontLeft + barW, frontTop + barHeight);
        QPolygon sidePoly({side1, side2, side3, side4});

        QFontMetrics fm(font());
        QPoint labelPos(frontLeft + barW/2 - 20, h - 20);

        BarGeom geom{frontRect, topPoly, sidePoly, labelPos};
        m_geom.append(geom);

        x += barW + gap;
    }
}

void BarChartWidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);

    p.fillRect(rect(), palette().window());

    if (m_bars.isEmpty()) return;

    // recompute if size changed
    if (m_geom.size() != m_bars.size()) recomputeGeom();

    // draw axis baseline
    int baselineY = height() - 40;
    p.setPen(QPen(QColor(180,180,180), 1));
    p.drawLine(0, baselineY, width(), baselineY);

    // draw each bar using m_animProgress
    for (int i = 0; i < m_bars.size(); ++i) {
        const Bar &b = m_bars[i];
        BarGeom g = m_geom[i];

        // Interpolate front rect height by progress
        int fullH = g.frontRect.height();
        int currentH = int(fullH * m_animProgress);
        QRect curFront(g.frontRect.left(), g.frontRect.bottom() - currentH, g.frontRect.width(), currentH);

        // recompute top & side polygons relative to current height
        QPoint top1(curFront.left(), curFront.top());
        QPoint top2(curFront.left() + curFront.width(), curFront.top());
        QPoint top3(curFront.left() + curFront.width() + m_depth, curFront.top() - m_depth);
        QPoint top4(curFront.left() + m_depth, curFront.top() - m_depth);
        QPolygon curTop({top1, top2, top3, top4});

        QPoint side1(curFront.left() + curFront.width(), curFront.top());
        QPoint side2(curFront.left() + curFront.width() + m_depth, curFront.top() - m_depth);
        QPoint side3(curFront.left() + curFront.width() + m_depth, curFront.top() - m_depth + curFront.height());
        QPoint side4(curFront.left() + curFront.width(), curFront.top() + curFront.height());
        QPolygon curSide({side1, side2, side3, side4});

        // front gradient
        QLinearGradient gradFront(curFront.topLeft(), curFront.bottomLeft());
        QColor base = b.color.isValid() ? b.color : QColor(100,150,255);
        QColor light = base.lighter(120);
        gradFront.setColorAt(0.0, light);
        gradFront.setColorAt(1.0, base.darker(110));
        p.setBrush(gradFront);

        // highlight if hovered
        if (i == m_hoverIndex) {
            QPen pen(Qt::yellow, 2);
            p.setPen(pen);
        } else {
            p.setPen(Qt::NoPen);
        }
        p.drawRoundedRect(curFront, 6, 6);

        // top
        QLinearGradient gradTop(curTop.boundingRect().topLeft(), curTop.boundingRect().bottomLeft());
        gradTop.setColorAt(0.0, light.lighter(110));
        gradTop.setColorAt(1.0, light);
        p.setBrush(gradTop);
        p.setPen(Qt::NoPen);
        p.drawPolygon(curTop);

        // side
        QLinearGradient gradSide(curSide.boundingRect().topLeft(), curSide.boundingRect().bottomLeft());
        gradSide.setColorAt(0.0, base.darker(120));
        gradSide.setColorAt(1.0, base.darker(160));
        p.setBrush(gradSide);
        p.drawPolygon(curSide);

        // draw value text on top (above the top polygon)
        QString valueText = QString::number(b.value);
        QFont boldf = font();
        boldf.setBold(true);
        p.setFont(boldf);
        p.setPen(Qt::black);

        // calculate text position above top (use curTop centroid)
        QRect topBounds = curTop.boundingRect();
        int tx = topBounds.center().x();
        int ty = topBounds.top() - 6;
        p.drawText(tx - 25, ty - 12, 50, 18, Qt::AlignCenter, valueText);

        for (int i = 0; i < b.text.length(); ++i)
        {
            int ty2 = ty < height() / 2 ? ty + 30 + i * 20 : ty - 40 - i * 20;
            int step = ty < height() / 2 ? i : b.text.length() - i - 1;
            p.drawText(tx - 25, ty2 , 50, 18, Qt::AlignCenter, QString(b.text[step]));
        }

        // draw label under baseline
        p.setFont(font());
        p.setPen(QColor(80,80,80));
        QRect labelRect(g.frontRect.left(), height() - 26, g.frontRect.width(), 20);
        p.drawText(labelRect, Qt::AlignCenter, b.label);
    }
}

void BarChartWidget::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    recomputeGeom();
}

int BarChartWidget::barAtPos(const QPoint &p) const
{
    for (int i = 0; i < m_geom.size(); ++i) {
        // use horizontal check: if x inside frontRect.left..right
        if (p.x() >= m_geom[i].frontRect.left() && p.x() <= m_geom[i].frontRect.right())
            return i;
    }
    return -1;
}

void BarChartWidget::mouseMoveEvent(QMouseEvent *event)
{
    int idx = barAtPos(event->pos());
    if (idx != m_hoverIndex) {
        m_hoverIndex = idx;
        emit barHovered(idx);
        update();
    }
    // show tooltip near mouse
    if (idx >= 0 && idx < m_bars.size()) {
        QString tip = QString("%1: %2").arg(m_bars[idx].label).arg(m_bars[idx].value);
        QToolTip::showText(event->globalPos(), tip, this, m_geom[idx].frontRect);
    } else {
        QToolTip::hideText();
    }
    QWidget::mouseMoveEvent(event);
}

void BarChartWidget::leaveEvent(QEvent *event)
{
    QToolTip::hideText();
    m_hoverIndex = -1;
    update();
    QWidget::leaveEvent(event);
}

void BarChartWidget::mousePressEvent(QMouseEvent *event)
{
    int idx = barAtPos(event->pos());
    if (idx >= 0) {
        m_pressedIndex = idx;
        emit barClicked(idx);
    }
    QWidget::mousePressEvent(event);
}
