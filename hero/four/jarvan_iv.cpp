#include "jarvan_iv.h"
#include <QPushButton>
jarvan_iv::jarvan_iv(QWidget *parent):
    QWidget(parent)
{
    initial("./hero/4/嘉文四世.json");

    // 布局：头像 + 名字
    auto *layout = new QVBoxLayout(this);
    // 英雄头像
    auto *imgLabel = new QLabel(this);
    imgLabel->setPixmap(QPixmap("E:\\golden_spatula\\golden_spatula\\hero\\image\\four\\head_jarvan_iv.png").scaled(64, 64, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    layout->addWidget(imgLabel);

    // 英雄名字（小写）
    auto *nameLabel = new QLabel("jarvan_iv", this);
    nameLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(nameLabel);

    setLayout(layout);

}
//攻击模块
void jarvan_iv::attack_module()
{

}
//防御模块
void jarvan_iv::defense_module()
{

}
//回蓝模块
void jarvan_iv::mana_regeneration_module()
{

}
//终极技能模块
void jarvan_iv::ultimate_skill_module()
{

}


