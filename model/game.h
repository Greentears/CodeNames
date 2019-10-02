#ifndef GAME_H
#define GAME_H

#include "team.h"
#include "card.h"
#include <string>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <vector>

class Game
{
private:
    static const int NB_GUESS_WORD = 8;
    std::vector<Team> teams;
    void inline setTeamsColor();
    Team currentTeam;
    bool isOverVal;
    int inline rand01();
    int inline randNb(int max);
public:
    Game(std::vector<Team> teams);
    void announceTheme(std::string theme, int nbWords);
    void guessWord(std::string word);
    void endTurn();
    bool isOver();
    void setStartingTeam();
    void setSpy();
    Team inline getCurrentTeam();
    std::vector<Card> getCards();
};

void inline Game::setTeamsColor() {
    Color firstColor = rand01() == 0 ? Color::BLUE : Color::RED;
    this->teams[0].setColor(firstColor);
    this->teams[1].setColor(firstColor == Color::BLUE ? Color::RED : Color::BLUE);
}
int inline Game::rand01() {
    srand(time(NULL));
    return (int) rand() % 2;
}

int inline Game::randNb(int max) {
    srand(time(NULL));
    return (int) rand() % max;
}

Team inline Game::getCurrentTeam() {
    return this->currentTeam;
}

#endif // GAME_H
