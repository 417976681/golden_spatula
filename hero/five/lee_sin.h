#ifndef LEE_SIN_H
#define LEE_SIN_H

#include <QWidget>
#include "basic_attribute.h"

class lee_sin:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    lee_sin(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // LEE_SIN_H
