#ifndef RELL_H
#define RELL_H

#include <QWidget>
#include "basic_attribute.h"

class rell:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    rell(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // RELL_H
