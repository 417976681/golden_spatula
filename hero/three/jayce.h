#ifndef JAYCE_H
#define JAYCE_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class jayce:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    jayce(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "jayce"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // JAYCE_H
