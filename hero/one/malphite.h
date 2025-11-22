#ifndef MALPHITE_H
#define MALPHITE_H

#include <QWidget>
#include "basic_attribute.h"

class malphite:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    malphite(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // MALPHITE_H
