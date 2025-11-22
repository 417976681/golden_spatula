#ifndef SHEN_H
#define SHEN_H

#include <QWidget>
#include "basic_attribute.h"

class shen:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    shen(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // SHEN_H
