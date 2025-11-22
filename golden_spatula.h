#ifndef GOLDEN_SPATULA_H
#define GOLDEN_SPATULA_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui {
class golden_spatula;
}
QT_END_NAMESPACE

class golden_spatula : public QWidget
{
    Q_OBJECT

public:
    golden_spatula(QWidget *parent = nullptr);
    ~golden_spatula();

    void initial();
};
#endif // GOLDEN_SPATULA_H
