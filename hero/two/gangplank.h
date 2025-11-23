#ifndef GANGPLANK_H
#define GANGPLANK_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class gangplank:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    gangplank(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "gangplank"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // GANGPLANK_H
