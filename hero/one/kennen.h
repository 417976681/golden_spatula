#ifndef KENNEN_H
#define KENNEN_H

#include <QWidget>
#include "basic_attribute.h"

class kennen:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    kennen(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // KENNEN_H
