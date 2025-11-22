#ifndef KATARINA_H
#define KATARINA_H

#include <QWidget>
#include "basic_attribute.h"

class katarina:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    katarina(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // KATARINA_H
