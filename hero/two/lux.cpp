#include "lux.h"
#include <QPushButton>
lux::lux(QWidget *parent):
    QWidget(parent)
{
    initial("./hero/2/拉克丝.json");

    // 布局：头像 + 名字
    auto *layout = new QVBoxLayout(this);
    // 英雄头像
    auto *imgLabel = new QLabel(this);
    imgLabel->setPixmap(QPixmap("E:\\golden_spatula\\golden_spatula\\hero\\image\\two\\head_lux.png").scaled(64, 64, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    layout->addWidget(imgLabel);

    // 英雄名字（小写）
    auto *nameLabel = new QLabel("lux", this);
    nameLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(nameLabel);

    setLayout(layout);

}
//攻击模块
void lux::attack_module()
{

}
//防御模块
void lux::defense_module()
{

}
//回蓝模块
void lux::mana_regeneration_module()
{

}
//终极技能模块
void lux::ultimate_skill_module()
{

}


