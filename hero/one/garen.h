#ifndef GAREN_H
#define GAREN_H

#include <QWidget>
#include "basic_attribute.h"

class garen:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    garen(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // GAREN_H
