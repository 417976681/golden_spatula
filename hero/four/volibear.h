#ifndef VOLIBEAR_H
#define VOLIBEAR_H

#include <QWidget>
#include "basic_attribute.h"

class volibear:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    volibear(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // VOLIBEAR_H
