#include "golden_spatula.h"
#include <QHBoxLayout>
#include <QRandomGenerator>
#include "element/BarChartWidget.h"
#include <QDir>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDirIterator>
#include "hero/hero.h""

golden_spatula::golden_spatula(QWidget *parent)
    : QWidget(parent)
{
    initial();
}

golden_spatula::~golden_spatula()
{

}

void golden_spatula::initial()
{
    QDirIterator it("./hero",
                    QStringList() << "*.json",
                    QDir::Files,
                    QDirIterator::Subdirectories);


    BarChartWidget *chart = new BarChartWidget;
    QVector<BarChartWidget::Bar> bars;


    int i = 0;
    int max = 0;
    while (it.hasNext())
    {
        // qDebug() << fileInfo.absoluteFilePath();
        QString filePath = it.next();
        QFile file(filePath);
        if(file.open(QIODevice::ReadOnly|QIODevice::Text)) {
            QString byteArray = file.readAll();
            file.close();
            QJsonDocument jd = QJsonDocument::fromJson(byteArray.toUtf8());
            QJsonObject root = jd.object();
            BarChartWidget::Bar b;
            b.label = QString("%1").arg(i);
            int armor = 0;
            if (root.contains("attribute")) {
                QJsonObject attr = root["attribute"].toObject();
                if (attr.contains("攻速")) {
                    QJsonArray arr = attr["攻速"].toArray();
                    if (!arr.isEmpty()) {
                        armor = arr[1].toString().toDouble() * 100;
                    }
                }
            }
            if(armor > max) max = armor;
            b.value = armor;
            b.color = QColor::fromHsl((i*(360 / 68))%360, 200, 150);
            b.text = root["name"].toString();
            bars.append(b);
            ++i;
        }
    }

    chart->setBars(bars);
    chart->setMaxValue(max + 25);
    chart->startAnimation(1200);

    QHBoxLayout *lay = new QHBoxLayout();
    lay->addWidget(chart);

    this->setLayout(lay);
}

