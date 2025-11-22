#ifndef LEONA_H
#define LEONA_H

#include <QWidget>
#include "basic_attribute.h"

class leona:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    leona(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // LEONA_H
