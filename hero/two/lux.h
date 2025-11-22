#ifndef LUX_H
#define LUX_H

#include <QWidget>
#include "basic_attribute.h"

class lux:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    lux(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // LUX_H
