#ifndef VOLIBEAR_H
#define VOLIBEAR_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class volibear:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    volibear(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "volibear"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // VOLIBEAR_H
