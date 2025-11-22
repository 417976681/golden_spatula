#ifndef JANNA_H
#define JANNA_H

#include <QWidget>
#include "basic_attribute.h"

class janna:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    janna(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // JANNA_H
