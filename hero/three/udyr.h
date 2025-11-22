#ifndef UDYR_H
#define UDYR_H

#include <QWidget>
#include "basic_attribute.h"

class udyr:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    udyr(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // UDYR_H
