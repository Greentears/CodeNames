#ifndef CARD_H
#define CARD_H

#include "color.h"
#include "word.h"

class Card
{
private:
    Word word;
    Color color = Color::UNDEFINED;
public:
    Card();
};

#endif // CARD_H
