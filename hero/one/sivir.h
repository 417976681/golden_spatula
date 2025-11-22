#ifndef SIVIR_H
#define SIVIR_H

#include <QWidget>
#include "basic_attribute.h"

class sivir:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    sivir(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // SIVIR_H
