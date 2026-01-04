#pragma once
#include "../include/Entity.hpp"

class Enemy : public Entity {
public:
    Enemy(const std::string& n, int hp);
    void attack(Entity& target);

};