#include "game.h"

Game::Game() {

}

Game::Game(std::vector<Team> teams):
    teams{teams}
{
    this->isOverVal = false;
    this->setTeamsColor();
    this->setStartingTeam();
    this->setSpy();
}

void Game::setStartingTeam() {
    int firstTeamIdx = randNb(0,1);
    this->currentTeam = &this->teams[firstTeamIdx];
    this->currentTeam->setNbGuessWord(NB_GUESS_WORD + 1); // the team starting has to guess one more word
    int nextTeamIdx = (firstTeamIdx + 1) % 2;
    this->teams[nextTeamIdx].setNbGuessWord(NB_GUESS_WORD);
}

void Game::setSpy() {
    std::vector<Player> players;
    int randPlayerIdx;
    for(Team& team : teams) {
        players = team.getPlayers();
        randPlayerIdx = randNb(0,team.nbPlayers()-1);
        players[randPlayerIdx].setRole(Role::Spy);
    }
}

std::vector<Card> Game::getCards() {
    std::vector<Card> cards;
    // for(Card card : ) FOREACH ENUM ? we have to get 25 cards from the enum card
    return cards;
}
