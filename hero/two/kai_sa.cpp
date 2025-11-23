#include "kai_sa.h"
#include <QPushButton>
kai_sa::kai_sa(QWidget *parent):
    QWidget(parent)
{
    initial("./hero/2/卡莎.json");

    // 布局：头像 + 名字
    auto *layout = new QVBoxLayout(this);
    // 英雄头像
    auto *imgLabel = new QLabel(this);
    imgLabel->setPixmap(QPixmap("E:\\golden_spatula\\golden_spatula\\hero\\image\\two\\head_kai_sa.png").scaled(64, 64, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    layout->addWidget(imgLabel);

    // 英雄名字（小写）
    auto *nameLabel = new QLabel("kai_sa", this);
    nameLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(nameLabel);

    setLayout(layout);

}
//攻击模块
void kai_sa::attack_module()
{

}
//防御模块
void kai_sa::defense_module()
{

}
//回蓝模块
void kai_sa::mana_regeneration_module()
{

}
//终极技能模块
void kai_sa::ultimate_skill_module()
{

}


