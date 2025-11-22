#ifndef SERAPHINE_H
#define SERAPHINE_H

#include <QWidget>
#include "basic_attribute.h"

class seraphine:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    seraphine(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // SERAPHINE_H
