#ifndef VARUS_H
#define VARUS_H

#include <QWidget>
#include "basic_attribute.h"

class varus:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    varus(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // VARUS_H
