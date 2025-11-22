#ifndef LUCIAN_H
#define LUCIAN_H

#include <QWidget>
#include "basic_attribute.h"

class lucian:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    lucian(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // LUCIAN_H
