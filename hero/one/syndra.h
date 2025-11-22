#ifndef SYNDRA_H
#define SYNDRA_H

#include <QWidget>
#include "basic_attribute.h"

class syndra:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    syndra(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // SYNDRA_H
