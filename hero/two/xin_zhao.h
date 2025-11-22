#ifndef XIN_ZHAO_H
#define XIN_ZHAO_H

#include <QWidget>
#include "basic_attribute.h"

class xin_zhao:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    xin_zhao(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // XIN_ZHAO_H
