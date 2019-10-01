#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include "player.h"
#include "color.h"

class Team
{
private:
    std::vector<Player> players;
    Color color;
    int points;
    int nbGuessWord;
public:
    Team();
    Team(std::vector<Player> players);
    void inline setColor(Color color);
    void inline resetPoints();
    Color inline getColor();
    void inline setNbGuessWord(int nb);
};

void Team::setColor(Color color) {
    this->color = color;
}

void Team::resetPoints() {
    points = 0;
}

Color Team::getColor() {
    return this->getColor();
}

void Team::setNbGuessWord(int nb) {
    this->nbGuessWord = nb;
}

#endif // TEAM_H
