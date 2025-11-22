#ifndef YONE_H
#define YONE_H

#include <QWidget>
#include "basic_attribute.h"

class yone:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    yone(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // YONE_H
