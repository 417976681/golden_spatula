#ifndef GNAR_H
#define GNAR_H

#include <QWidget>
#include "basic_attribute.h"

class gnar:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    gnar(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // GNAR_H
