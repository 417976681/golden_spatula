#ifndef XIN_ZHAO_H
#define XIN_ZHAO_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class xin_zhao:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    xin_zhao(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "xin_zhao"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // XIN_ZHAO_H
