#ifndef JINX_H
#define JINX_H

#include <QWidget>
#include "basic_attribute.h"

class jinx:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    jinx(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // JINX_H
