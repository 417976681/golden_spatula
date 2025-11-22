#ifndef NAAFIRI_H
#define NAAFIRI_H

#include <QWidget>
#include "basic_attribute.h"

class naafiri:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    naafiri(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // NAAFIRI_H
