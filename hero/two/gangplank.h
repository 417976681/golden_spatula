#ifndef GANGPLANK_H
#define GANGPLANK_H

#include <QWidget>
#include "basic_attribute.h"

class gangplank:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    gangplank(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // GANGPLANK_H
