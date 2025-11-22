#ifndef EZREAL_H
#define EZREAL_H

#include <QWidget>
#include "basic_attribute.h"

class ezreal:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    ezreal(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // EZREAL_H
