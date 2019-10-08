#ifndef SPYCARD_H
#define SPYCARD_H

#include <vector>
#include "color.h"
#include "team.h"

class SpyCard
{
private:
    static const int SIZE = 5;
    Color spyCard[SIZE][SIZE];
    std::vector<Team> teams;
public:
    SpyCard(std::vector<Team> teams);
    void newCard();
};

#endif // SPYCARD_H
