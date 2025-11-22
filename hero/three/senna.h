#ifndef SENNA_H
#define SENNA_H

#include <QWidget>
#include "basic_attribute.h"

class senna:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    senna(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // SENNA_H
