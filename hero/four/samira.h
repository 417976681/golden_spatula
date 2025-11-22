#ifndef SAMIRA_H
#define SAMIRA_H

#include <QWidget>
#include "basic_attribute.h"

class samira:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    samira(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // SAMIRA_H
