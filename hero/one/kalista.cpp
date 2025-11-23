#include "kalista.h"
#include <QPushButton>
kalista::kalista(QWidget *parent):
    QWidget(parent)
{
    initial("./hero/1/卡莉丝塔.json");

    // 布局：头像 + 名字
    auto *layout = new QVBoxLayout(this);
    // 英雄头像
    auto *imgLabel = new QLabel(this);
    imgLabel->setPixmap(QPixmap("E:\\golden_spatula\\golden_spatula\\hero\\image\\one\\head_kalista.png").scaled(64, 64, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    layout->addWidget(imgLabel);

    // 英雄名字（小写）
    auto *nameLabel = new QLabel("kalista", this);
    nameLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(nameLabel);

    setLayout(layout);

}
//攻击模块
void kalista::attack_module()
{

}
//防御模块
void kalista::defense_module()
{

}
//回蓝模块
void kalista::mana_regeneration_module()
{

}
//终极技能模块
void kalista::ultimate_skill_module()
{

}


