#ifndef KOBUKO_H
#define KOBUKO_H

#include <QWidget>
#include "basic_attribute.h"

class kobuko:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    kobuko(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // KOBUKO_H
