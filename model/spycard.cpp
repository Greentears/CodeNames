#include "spycard.h"

SpyCard::SpyCard(std::vector<Team> teams)
{
    this->teams = teams;
    this->newCard();
}

void SpyCard::newCard() {
    for (Team& team : teams) {
        for(int i=0;i<team.getNbGuessWord();i++) {
            // get rand x and y and check if not already something
        }
    }
}
