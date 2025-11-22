#ifndef AHRI_H
#define AHRI_H

#include <QWidget>
#include "basic_attribute.h"

class ahri:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    ahri(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // AHRI_H
