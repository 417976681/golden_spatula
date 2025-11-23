#ifndef KALISTA_H
#define KALISTA_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class kalista:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    kalista(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "kalista"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // KALISTA_H
