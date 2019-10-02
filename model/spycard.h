#ifndef SPYCARD_H
#define SPYCARD_H

#include <vector>
#include "color.h"
#include "team.h"

class SpyCard
{
private:
    Color spyCard[][];
    std::vector<Team> teams;
public:
    SpyCard(std::vector<Team> teams);
    void newCard();
};

#endif // SPYCARD_H
