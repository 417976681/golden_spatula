#ifndef RYZE_H
#define RYZE_H

#include <QWidget>
#include "basic_attribute.h"

class ryze:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    ryze(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // RYZE_H
