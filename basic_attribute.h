#ifndef BASIC_ATTRIBUTE_H
#define BASIC_ATTRIBUTE_H
#include <QFile>
#include <QJsonDocument>

class basic_attribute
{
public:
    basic_attribute();

    void set_star(int star);
    void set_now_health(int health);
    void set_now_critical_strike_chance(double critical_strike_chance);
    void set_now_armor(int armor);
    void set_now_attack_range(int attack_range);
    void set_now_magic_resistance(int magic_resistance);
    void set_now_initial_mana(int initial_mana);
    void set_now_attack_damage(int attack_damage);
    void set_now_mana(int mana);
    void set_now_attack_speed(double attack_speed);
    void set_ability_power(int ability_power);
    void set_critical_strick_damage(double critical_strick_damage);

    //初始化
    void initial(QString hero_path);

    //设置参数
    void set_all(int star);
public:
    void attack_module(){};
    void defense_module(){};
    void mana_regeneration_module(){};
    void ultimate_skill_module(){};
public:
    //基础属性
    /*
        生命：550/990/1782/2574
        暴击率：25/25/25/25
        护甲：25/25/25/25
        攻击距离：4/4/4/4
        魔抗：25/25/25/25
        初始法力值：20/20/20/20
        物攻：45/67/101/135
        法力值：70/70/70/70
        攻速：0.75/0.75/0.75/0.75
        3)	生命值(Health)
        5)	攻击力(Attack Damage, AD )与法术强度(Ability Power, AP )
        9)	暴击率(Critical Strike Chance  )与暴击伤害(Critical Strick Damage  )

        Life: 550/990/1782/2574
        Critical Hit Rate: 25/25/25/25
        Armor: 25/25/25/25
        Attack Range: 4/4/4/4
        Magic Resistance: 25/25/25/25
        Initial Mana: 20/20/20/20
        Physical Attack: 45/67/101/135
        Mana: 70/70/70/70
        Attack Speed: 0.75/0.75/0.75/0.75
    */
    int star;
    int health;
    double critical_strike_chance;
    int armor;
    int attack_range;
    int magic_resistance;
    int initial_mana;
    int attack_damage;
    int mana;
    double attack_speed;
    int ability_power;
    double critical_strick_damage;

    int now_health;
    double now_critical_strike_chance;
    int now_armor;
    int now_attack_range;
    int now_magic_resistance;
    int now_initial_mana;
    int now_attack_damage;
    int now_mana;
    double now_attack_speed;
    int now_ability_power;
    double now_critical_strick_damage;

    int all_health[4];
    double all_critical_strike_chance[4];
    int all_armor[4];
    int all_attack_range[4];
    int all_magic_resistance[4];
    int all_initial_mana[4];
    int all_attack_damage[4];
    int all_mana[4];
    double all_attack_speed[4];
    int all_ability_power[4];
    double all_critical_strick_damage[4];
};

#endif // BASIC_ATTRIBUTE_H
