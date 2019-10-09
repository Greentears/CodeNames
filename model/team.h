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
    const inline std::vector<Player>& getPlayers();
    void inline setNbGuessWord(int nb);
    int inline getNbGuessWord();
    int inline nbPlayers();
};

int inline Team::nbPlayers() {
    return this->players.size();
}

const inline std::vector<Player>& Team::getPlayers() {
    return this->players;
}

void Team::setColor(Color color) {
    this->color = color;
}

void Team::resetPoints() {
    this->points = 0;
}

Color Team::getColor() {
    return this->getColor();
}

void Team::setNbGuessWord(int nb) {
    this->nbGuessWord = nb;
}

int inline Team::getNbGuessWord() {
    return this->nbGuessWord;
}

#endif // TEAM_H
