#include "game.h"

Game::Game(std::vector<Team> teams):
    teams{teams}
{
    this->isOverVal = false;
    setTeamsColor();
    setStartingTeam();
}
