#ifndef MALPHITE_H
#define MALPHITE_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class malphite:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    malphite(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "malphite"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // MALPHITE_H
