#ifndef VI_H
#define VI_H

#include <QWidget>
#include "basic_attribute.h"

class vi:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    vi(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // VI_H
