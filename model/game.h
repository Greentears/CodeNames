#ifndef GAME_H
#define GAME_H

#include "team.h"
#include "card.h"
#include <string>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <vector>
#include <random>

class Game
{
private:
    static constexpr int NB_GUESS_WORD = 8;
    std::vector<Team> teams;
    void inline setTeamsColor();
    Team* currentTeam;
    bool isOverVal;
    int inline randNb(int min, int max);
public:
    Game();
    Game(std::vector<Team> teams);
    void announceTheme(const std::string& theme, int nbWords);
    void guessWord(const std::string& word);
    void endTurn();
    bool isOver();
    void setStartingTeam();
    void setSpy();
    Team inline getCurrentTeam();
    std::vector<Card> getCards();
};

void inline Game::setTeamsColor() {
    Color firstColor = randNb(0,1) == 0 ? Color::BLUE : Color::RED;
    this->teams[0].setColor(firstColor);
    this->teams[1].setColor(firstColor == Color::BLUE ? Color::RED : Color::BLUE);
}
int inline Game::randNb(int min, int max) {
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(min, max);
    int dice_roll = distribution(generator);
    return dice_roll;
}

Team inline Game::getCurrentTeam() {
    return *this->currentTeam;
}

#endif // GAME_H
