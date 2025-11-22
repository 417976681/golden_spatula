#ifndef KAYLE_H
#define KAYLE_H

#include <QWidget>
#include "basic_attribute.h"

class kayle:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    kayle(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // KAYLE_H
