#ifndef PLAYER_H
#define PLAYER_H

#include "role.h"

class Player
{
private:
    Role role;
public:
    Player();
    void inline setRole(Role role);
};

void inline Player::setRole(Role role) {
    this->role = role;
}

#endif // PLAYER_H
