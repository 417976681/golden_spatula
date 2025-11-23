#include "hero_collection.h"

hero_collection::hero_collection(QWidget *parent)
    : QWidget(parent), grid(new QGridLayout(this))
{
    initHeroes();
    layoutHeroes(8); // 每行8个格子
    setLayout(grid);
}

void hero_collection::initHeroes()
{
    all_heroes = {
        std::make_shared<braum>(this),
        std::make_shared<gwen>(this),
        std::make_shared<lee_sin>(this),
        std::make_shared<seraphine>(this),
        std::make_shared<twisted_fate>(this),
        std::make_shared<varus>(this),
        std::make_shared<yone>(this),
        std::make_shared<zyra>(this),

        std::make_shared<akali>(this),
        std::make_shared<ashe>(this),
        std::make_shared<jarvan_iv>(this),
        std::make_shared<jinx>(this),
        std::make_shared<k_sante>(this),
        std::make_shared<karma>(this),
        std::make_shared<leona>(this),
        std::make_shared<poppy>(this),
        std::make_shared<ryze>(this),
        std::make_shared<samira>(this),
        std::make_shared<sett>(this),
        std::make_shared<volibear>(this),
        std::make_shared<yuumi>(this),

        std::make_shared<aatrox>(this),
        std::make_shared<ezreal>(this),
        std::make_shared<garen>(this),
        std::make_shared<gnar>(this),
        std::make_shared<kalista>(this),
        std::make_shared<kayle>(this),
        std::make_shared<kennen>(this),
        std::make_shared<lucian>(this),
        std::make_shared<malphite>(this),
        std::make_shared<naafiri>(this),
        std::make_shared<rell>(this),
        std::make_shared<sivir>(this),
        std::make_shared<syndra>(this),
        std::make_shared<zac>(this),

        std::make_shared<ahri>(this),
        std::make_shared<caitlyn>(this),
        std::make_shared<darius>(this),
        std::make_shared<jayce>(this),
        std::make_shared<kog_maw>(this),
        std::make_shared<lulu>(this),
        std::make_shared<malzahar>(this),
        std::make_shared<neeko>(this),
        std::make_shared<rammus>(this),
        std::make_shared<senna>(this),
        std::make_shared<smolder>(this),
        std::make_shared<swain>(this),
        std::make_shared<udyr>(this),
        std::make_shared<viego>(this),
        std::make_shared<yasuo>(this),
        std::make_shared<ziggs>(this),

        std::make_shared<dr_mundo>(this),
        std::make_shared<gangplank>(this),
        std::make_shared<janna>(this),
        std::make_shared<jhin>(this),
        std::make_shared<kai_sa>(this),
        std::make_shared<katarina>(this),
        std::make_shared<kobuko>(this),
        std::make_shared<lux>(this),
        std::make_shared<rakan>(this),
        std::make_shared<shen>(this),
        std::make_shared<vi>(this),
        std::make_shared<xayah>(this),
        std::make_shared<xin_zhao>(this)
    };
}

void hero_collection::layoutHeroes(int numCols)
{
    int row = 0, col = 0;
    for (const auto& hero : all_heroes) {
        grid->addWidget(hero.get(), row, col);
        ++col;
        if (col >= numCols) {
            col = 0;
            ++row;
        }
    }
}
