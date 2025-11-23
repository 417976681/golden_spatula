#ifndef KOG_MAW_H
#define KOG_MAW_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class kog_maw:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    kog_maw(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "kog_maw"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // KOG_MAW_H
