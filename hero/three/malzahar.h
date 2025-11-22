#ifndef MALZAHAR_H
#define MALZAHAR_H

#include <QWidget>
#include "basic_attribute.h"

class malzahar:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    malzahar(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // MALZAHAR_H
