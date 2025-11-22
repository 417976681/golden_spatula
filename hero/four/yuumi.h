#ifndef YUUMI_H
#define YUUMI_H

#include <QWidget>
#include "basic_attribute.h"

class yuumi:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    yuumi(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // YUUMI_H
