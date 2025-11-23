#ifndef LEE_SIN_H
#define LEE_SIN_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class lee_sin:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    lee_sin(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "lee_sin"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // LEE_SIN_H
