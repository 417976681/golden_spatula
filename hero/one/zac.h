#ifndef ZAC_H
#define ZAC_H

#include <QWidget>
#include "basic_attribute.h"

class zac:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    zac(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // ZAC_H
