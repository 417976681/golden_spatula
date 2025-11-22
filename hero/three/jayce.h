#ifndef JAYCE_H
#define JAYCE_H

#include <QWidget>
#include "basic_attribute.h"

class jayce:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    jayce(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // JAYCE_H
