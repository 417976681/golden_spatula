#ifndef ZIGGS_H
#define ZIGGS_H

#include <QWidget>
#include "basic_attribute.h"

class ziggs:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    ziggs(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // ZIGGS_H
