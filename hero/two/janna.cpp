#include "janna.h"
#include <QPushButton>
janna::janna(QWidget *parent):
    QWidget(parent)
{
    initial("./hero/2/迦娜.json");

    // 布局：头像 + 名字
    auto *layout = new QVBoxLayout(this);
    // 英雄头像
    auto *imgLabel = new QLabel(this);
    imgLabel->setPixmap(QPixmap("E:\\golden_spatula\\golden_spatula\\hero\\image\\two\\head_janna.png").scaled(64, 64, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    layout->addWidget(imgLabel);

    // 英雄名字（小写）
    auto *nameLabel = new QLabel("janna", this);
    nameLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(nameLabel);

    setLayout(layout);

}
//攻击模块
void janna::attack_module()
{

}
//防御模块
void janna::defense_module()
{

}
//回蓝模块
void janna::mana_regeneration_module()
{

}
//终极技能模块
void janna::ultimate_skill_module()
{

}


