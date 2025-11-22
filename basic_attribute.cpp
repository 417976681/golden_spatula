#include "basic_attribute.h"
#include <QDebug>
basic_attribute::basic_attribute() {
    this->star = 0;
    this->health = 0;
    this->critical_strike_chance = 0.0;
    this->armor = 0;
    this->attack_range = 0;
    this->magic_resistance = 0;
    this->initial_mana = 0;
    this->attack_damage = 0;
    this->mana = 0;
    this->attack_speed = 0.0;
    this->ability_power = 0;
    this->critical_strick_damage = 0.0;

    this->now_health = 0;
    this->now_critical_strike_chance = 0.0;
    this->now_armor = 0;
    this->now_attack_range = 0;
    this->now_magic_resistance = 0;
    this->now_initial_mana = 0;
    this->now_attack_damage = 0;
    this->now_mana = 0;
    this->now_attack_speed = 0.0;
    this->now_ability_power = 0;
    this->now_critical_strick_damage = 0.0;
}
//设置星级
void basic_attribute::set_star(int star)
{
    this->star = star;
}
//设置当前生命值
void basic_attribute::set_now_health(int health)
{
    this->now_health = health;
}
//设置当前暴击机率
void basic_attribute::set_now_critical_strike_chance(double critical_strike_chance)
{
    this->now_critical_strike_chance = critical_strike_chance;
}
//设置当前护甲
void basic_attribute::set_now_armor(int armor)
{
    this->now_armor = armor;
}
//设置当前攻击距离
void basic_attribute::set_now_attack_range(int attack_range)
{
    this->now_attack_range = attack_range;
}
//设置当前魔抗
void basic_attribute::set_now_magic_resistance(int magic_resistance)
{
    this->now_magic_resistance = magic_resistance;
}
//设置当前初始法力值
void basic_attribute::set_now_initial_mana(int initial_mana)
{
    this->now_initial_mana = initial_mana;
}
//设置当前物理攻击
void basic_attribute::set_now_attack_damage(int attack_damage)
{
    this->now_attack_damage = attack_damage;
}
//设置当前法力值
void basic_attribute::set_now_mana(int mana)
{
    this->now_mana = mana;
}
//设置当前攻击速度
void basic_attribute::set_now_attack_speed(double attack_speed)
{
    this->now_attack_speed = attack_speed;
}
//设置当前魔法攻击
void basic_attribute::set_ability_power(int ability_power)
{
    this->now_ability_power = ability_power;
}
//设置当前暴击伤害
void basic_attribute::set_critical_strick_damage(double critical_strick_damage)
{
    this->now_critical_strick_damage = critical_strick_damage;
}

void basic_attribute::initial(QString hero_path)
{
    QFile file(hero_path);
    if(file.open(QIODevice::ReadOnly|QIODevice::Text)) {
        QString byteArray = file.readAll();
        file.close();
        QJsonDocument jd = QJsonDocument::fromJson(byteArray.toUtf8());
        for(int i = 0;i < 4; i++) {
            this->all_health[i] = jd["attribute"]["生命"][i].toInt();
            this->all_critical_strike_chance[i] = jd["attribute"]["暴击率"][i].toString().toInt();
            this->all_armor[i] = jd["attribute"]["护甲"][i].toString().toInt();
            this->all_attack_range[i] = jd["attribute"]["攻击距离"][i].toString().toInt();
            this->all_magic_resistance[i] = jd["attribute"]["魔抗"][i].toString().toInt();
            this->all_initial_mana[i] = jd["attribute"]["初始法力值"][i].toString().toInt();
            this->all_attack_damage[i] = jd["attribute"]["物攻"][i].toString().toInt();
            this->all_mana[i] = jd["attribute"]["法力值"][i].toString().toInt();
            this->all_attack_speed[i] = jd["attribute"]["攻速"][i].toString().toInt();
            this->all_ability_power[i] = 0;
            this->all_critical_strick_damage[i] = 1.0;
        } 
    }
}

void basic_attribute::set_all(int star)
{
    this->star = star;
    this->health = all_health[star];
    this->critical_strike_chance = all_critical_strike_chance[star];
    this->armor = all_armor[star];
    this->attack_range = all_attack_range[star];
    this->magic_resistance = all_magic_resistance[star];
    this->initial_mana = all_initial_mana[star];
    this->attack_damage = all_attack_damage[star];
    this->mana = all_mana[star];
    this->attack_speed = all_attack_speed[star];
    this->ability_power = all_ability_power[star];
    this->critical_strick_damage = all_attack_damage[star];

    set_now_health(this->health);
    set_now_critical_strike_chance(this->critical_strike_chance);
    set_now_armor(this->armor);
    set_now_attack_range(this->attack_range);
    set_now_magic_resistance(this->magic_resistance);
    set_now_initial_mana(this->initial_mana);
    set_now_attack_damage(this->attack_damage);
    set_now_mana(this->mana);
    set_now_attack_speed(this->attack_speed);
    set_ability_power(this->ability_power);
    set_critical_strick_damage(this->critical_strick_damage);
    qDebug() << "设置完毕！123";
}
