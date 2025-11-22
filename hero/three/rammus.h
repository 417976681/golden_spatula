#ifndef RAMMUS_H
#define RAMMUS_H

#include <QWidget>
#include "basic_attribute.h"

class rammus:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    rammus(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // RAMMUS_H
