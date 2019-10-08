#ifndef VIEW_H
#define VIEW_H

#include "model/game.h"

class View
{
private:
    Game game_;
public:
    View();
    View(Game game);
    void displayWords();
    void displaySpyCard();
};

#endif // VIEW_H
