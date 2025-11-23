#ifndef KAI_SA_H
#define KAI_SA_H

#include <QWidget>
#include "basic_attribute.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>

class kai_sa:public QWidget, public basic_attribute
{
    Q_OBJECT
public:
    kai_sa(QWidget *parent = nullptr);
  // 费用
  int cost() const { return 1; }
  // 名字
  QString name() const { return "kai_sa"; }
public:
    void attack_module();
    void defense_module();
    void mana_regeneration_module();
    void ultimate_skill_module();
};

#endif // KAI_SA_H
