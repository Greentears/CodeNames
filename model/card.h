#ifndef CARD_H
#define CARD_H

#include "color.h"
#include "word.h"

class card
{
private:
    Word word;
    Color color = Color::UNDEFINED;
public:
    card();
};

#endif // CARD_H
