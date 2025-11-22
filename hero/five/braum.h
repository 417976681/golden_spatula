#ifndef BRAUM_H
#define BRAUM_H

#include <QWidget>
#include "basic_attribute.h"

class braum:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    braum(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // BRAUM_H
