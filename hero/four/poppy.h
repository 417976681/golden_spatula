#ifndef POPPY_H
#define POPPY_H

#include <QWidget>
#include "basic_attribute.h"

class poppy:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    poppy(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // POPPY_H
