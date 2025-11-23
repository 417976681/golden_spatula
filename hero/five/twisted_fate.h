#ifndef TWISTED_FATE_H
#define TWISTED_FATE_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class twisted_fate:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    twisted_fate(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "twisted_fate"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // TWISTED_FATE_H
