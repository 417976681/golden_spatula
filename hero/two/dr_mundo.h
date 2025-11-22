#ifndef DR_MUNDO_H
#define DR_MUNDO_H

#include <QWidget>
#include "basic_attribute.h"

class dr_mundo:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    dr_mundo(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // DR_MUNDO_H
