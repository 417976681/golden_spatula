#ifndef XAYAH_H
#define XAYAH_H

#include <QWidget>
#include "basic_attribute.h"

class xayah:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    xayah(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();

};

#endif // XAYAH_H
