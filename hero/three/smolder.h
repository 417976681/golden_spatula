#ifndef SMOLDER_H
#define SMOLDER_H

#include <QWidget>
#include "basic_attribute.h"

class smolder:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    smolder(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // SMOLDER_H
