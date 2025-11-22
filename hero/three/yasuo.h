#ifndef YASUO_H
#define YASUO_H

#include <QWidget>
#include "basic_attribute.h"

class yasuo:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    yasuo(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // YASUO_H
