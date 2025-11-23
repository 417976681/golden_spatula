#ifndef JARVAN_IV_H
#define JARVAN_IV_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class jarvan_iv:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    jarvan_iv(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "jarvan_iv"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // JARVAN_IV_H
