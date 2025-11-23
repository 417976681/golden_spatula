#ifndef NAAFIRI_H
#define NAAFIRI_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class naafiri:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    naafiri(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "naafiri"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // NAAFIRI_H
