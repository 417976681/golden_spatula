#ifndef NEEKO_H
#define NEEKO_H

#include <QWidget>
#include "basic_attribute.h"

class neeko:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    neeko(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // NEEKO_H
