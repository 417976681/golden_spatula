#ifndef CAITLYN_H
#define CAITLYN_H

#include <QWidget>
#include "basic_attribute.h"

class caitlyn:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    caitlyn(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // CAITLYN_H
