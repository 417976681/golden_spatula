#ifndef ASHE_H
#define ASHE_H

#include <QWidget>
#include "basic_attribute.h"

class ashe:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    ashe(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // ASHE_H
