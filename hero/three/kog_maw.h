#ifndef KOG_MAW_H
#define KOG_MAW_H

#include <QWidget>
#include "basic_attribute.h"

class kog_maw:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    kog_maw(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // KOG_MAW_H
