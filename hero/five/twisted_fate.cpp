#include "twisted_fate.h"
#include <QPushButton>
twisted_fate::twisted_fate(QWidget *parent):
    QWidget(parent)
{
    initial("./hero/5/崔斯特.json");

    // 布局：头像 + 名字
    auto *layout = new QVBoxLayout(this);
    // 英雄头像
    auto *imgLabel = new QLabel(this);
    imgLabel->setPixmap(QPixmap("E:\\golden_spatula\\golden_spatula\\hero\\image\\five\\head_twisted_fate.png").scaled(64, 64, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    layout->addWidget(imgLabel);

    // 英雄名字（小写）
    auto *nameLabel = new QLabel("twisted_fate", this);
    nameLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(nameLabel);

    setLayout(layout);

}
//攻击模块
void twisted_fate::attack_module()
{

}
//防御模块
void twisted_fate::defense_module()
{

}
//回蓝模块
void twisted_fate::mana_regeneration_module()
{

}
//终极技能模块
void twisted_fate::ultimate_skill_module()
{

}


