#ifndef KARMA_H
#define KARMA_H

#include <QWidget>
#include "basic_attribute.h"

class karma:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    karma(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // KARMA_H
