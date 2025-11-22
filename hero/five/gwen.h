#ifndef GWEN_H
#define GWEN_H

#include <QWidget>
#include "basic_attribute.h"

class gwen:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    gwen(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // GWEN_H
