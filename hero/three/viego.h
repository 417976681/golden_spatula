#ifndef VIEGO_H
#define VIEGO_H

#include <QWidget>
#include "basic_attribute.h"

class viego:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    viego(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // VIEGO_H
