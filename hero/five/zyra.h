#ifndef ZYRA_H
#define ZYRA_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class zyra:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    zyra(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "zyra"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // ZYRA_H
