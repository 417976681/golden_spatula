#ifndef K_SANTE_H
#define K_SANTE_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class k_sante:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    k_sante(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "k_sante"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // K_SANTE_H
