#pragma once
#include "Entity.hpp"

class Player : public Entity {
public: 
    Player();
    Player(const std::string& n, int hp);

    void jump();
    void attack(Entity& target);

    static int playerCount;

private:
    int level = 1;

};