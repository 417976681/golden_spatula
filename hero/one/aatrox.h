#ifndef AATROX_H
#define AATROX_H

#include <QWidget>
#include "basic_attribute.h"
#include <QImage>

class aatrox:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    aatrox(QWidget *parent = nullptr);

public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // AATROX_H
