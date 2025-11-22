#include "golden_spatula.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    golden_spatula w;
    w.resize(800,600);
    w.show();
    return a.exec();
}
// #include <QHBoxLayout>
// #include <QRandomGenerator>
// #include "BarChartWidget.h"

// int main(int argc, char *argv[])
// {
//     QApplication a(argc, argv);
//     QWidget win;
//     win.resize(800, 400);

//     BarChartWidget *chart = new BarChartWidget;
//     QVector<BarChartWidget::Bar> bars;
//     for (int i=0; i < 54; ++i){
//         BarChartWidget::Bar b;
//         b.label = QString("%1").arg(i);
//         b.value = QRandomGenerator::global()->bounded(10, 101);
//         b.color = QColor::fromHsl((i*(360 / 53))%360, 200, 150);
//         bars.append(b);
//     }
//     chart->setBars(bars);
//     chart->setMaxValue(120);
//     chart->startAnimation(1200);

//     QHBoxLayout *lay = new QHBoxLayout(&win);
//     lay->addWidget(chart);
//     win.show();
//     return a.exec();
// }
