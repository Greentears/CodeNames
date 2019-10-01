#ifndef GAME_H
#define GAME_H

#include <vector>
#include "team.h"
#include <string>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

class Game
{
private:
    static const int NB_GUESS_WORD = 8;
    std::vector<Team> teams;
    void inline setTeamsColor();
    void inline setStartingTeam();
    Team currentTeam;
    bool isOverVal;
    int inline rand01();
public:
    Game(std::vector<Team> teams);
    void announceTheme(std::string theme, int nbWords);
    void guessWord(std::string word);
    void endTurn();
    bool isOver();
    Team inline getCurrentTeam();
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

void inline Game::setStartingTeam() {
    int randValue = rand01();
    this->currentTeam = this->teams[randValue];
    this->currentTeam.setNbGuessWord(NB_GUESS_WORD + 1); // the team starting has to guess one more word
    this->teams[(randValue + 1) % 2].setNbGuessWord(NB_GUESS_WORD);
}

#endif // GAME_H
