#ifndef K_SANTE_H
#define K_SANTE_H

#include <QWidget>
#include "basic_attribute.h"

class k_sante:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    k_sante(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // K_SANTE_H
