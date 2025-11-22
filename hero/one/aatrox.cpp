#include "aatrox.h"
#include <QPushButton>
aatrox::aatrox(QWidget *parent):
    QWidget(parent)
{
    initial("./hero/1/亚托克斯.json");
    QPalette pal;
    pal.setBrush(QPalette::Window, QBrush(QPixmap("E:\\golden_spatula\\golden_spatula\\hero\\image\\one\\head_aatrox.png")));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
}
//攻击模块
void aatrox::attack_module()
{

}
//防御模块
void aatrox::defense_module()
{

}
//回蓝模块
void aatrox::mana_regeneration_module()
{

}
//终极技能模块
void aatrox::ultimate_skill_module()
{

}


