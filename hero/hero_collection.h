#ifndef HERO_COLLECTION_H
#define HERO_COLLECTION_H

#include <QWidget>
#include <QGridLayout>
#include <memory>
#include <vector>
#include "hero.h"

class hero_collection : public QWidget
{
    Q_OBJECT
  public:
    explicit hero_collection(QWidget *parent = nullptr);

  private:
    QGridLayout* grid;
    std::vector<std::shared_ptr<QWidget>> all_heroes;
    void initHeroes();
    void layoutHeroes(int numCols=8);
};

#endif // HERO_COLLECTION_H
