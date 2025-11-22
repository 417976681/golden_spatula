#ifndef AKALI_H
#define AKALI_H

#include <QWidget>
#include "basic_attribute.h"

class akali:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    akali(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // AKALI_H
