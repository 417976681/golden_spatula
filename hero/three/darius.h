#ifndef DARIUS_H
#define DARIUS_H

#include <QWidget>
#include "basic_attribute.h"

class darius:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    darius(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // DARIUS_H
