#ifndef JHIN_H
#define JHIN_H

#include <QWidget>
#include "basic_attribute.h"

class jhin:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    jhin(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // JHIN_H
