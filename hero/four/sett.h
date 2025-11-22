#ifndef SETT_H
#define SETT_H

#include <QWidget>
#include "basic_attribute.h"

class sett:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    sett(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // SETT_H
