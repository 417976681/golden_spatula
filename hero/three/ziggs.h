#ifndef ZIGGS_H
#define ZIGGS_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class ziggs:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    ziggs(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "ziggs"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // ZIGGS_H
