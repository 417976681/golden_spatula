#ifndef RAKAN_H
#define RAKAN_H

#include <QWidget>
#include "basic_attribute.h"

class rakan:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    rakan(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // RAKAN_H
