#ifndef LULU_H
#define LULU_H

#include <QWidget>
#include "basic_attribute.h"

class lulu:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    lulu(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // LULU_H
