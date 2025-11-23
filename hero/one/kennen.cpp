#include "kennen.h"
#include <QPushButton>
kennen::kennen(QWidget *parent):
    QWidget(parent)
{
    initial("./hero/1/凯南.json");

    // 布局：头像 + 名字
    auto *layout = new QVBoxLayout(this);
    // 英雄头像
    auto *imgLabel = new QLabel(this);
    imgLabel->setPixmap(QPixmap("E:\\golden_spatula\\golden_spatula\\hero\\image\\one\\head_kennen.png").scaled(64, 64, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    layout->addWidget(imgLabel);

    // 英雄名字（小写）
    auto *nameLabel = new QLabel("kennen", this);
    nameLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(nameLabel);

    setLayout(layout);

}
//攻击模块
void kennen::attack_module()
{

}
//防御模块
void kennen::defense_module()
{

}
//回蓝模块
void kennen::mana_regeneration_module()
{

}
//终极技能模块
void kennen::ultimate_skill_module()
{

}


