#ifndef BARCHARTWIDGET_H
#define BARCHARTWIDGET_H

#include <QWidget>
#include <QVector>
#include <QColor>
#include <QString>
#include <QVariantAnimation>

class BarChartWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BarChartWidget(QWidget *parent = nullptr);

    struct Bar {
        QString label;
        int value;      // 0..maxValue
        QColor color;
        QString text;
    };

    void setBars(const QVector<Bar>& bars);
    void setMaxValue(int maxv);
    void startAnimation(int durationMs = 800); // animate bars from 0->value
    void setDepth(int d); // 3D depth in pixels

protected:
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void leaveEvent(QEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;

private:
    QVector<Bar> m_bars;
    int m_maxValue = 100;
    int m_depth = 18;
    double m_animProgress = 1.0; // 0..1
    QVariantAnimation *m_anim = nullptr;

    // geometry cache per-bar
    struct BarGeom { QRect frontRect; QPolygon topPoly; QPolygon sidePoly; QPoint labelPos; };
    QVector<BarGeom> m_geom;

    int m_hoverIndex = -1;
    int m_pressedIndex = -1;

    void recomputeGeom();
    int barAtPos(const QPoint &p) const;

signals:
    void barClicked(int index);
    void barHovered(int index);
};

#endif // BARCHARTWIDGET_H
