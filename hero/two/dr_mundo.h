#ifndef DR_MUNDO_H
#define DR_MUNDO_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class dr_mundo:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    dr_mundo(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "dr_mundo"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // DR_MUNDO_H
