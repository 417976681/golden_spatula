#ifndef SWAIN_H
#define SWAIN_H

#include <QWidget>
#include "basic_attribute.h"

class swain:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    swain(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // SWAIN_H
