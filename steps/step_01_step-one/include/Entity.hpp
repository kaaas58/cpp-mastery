#pragma once
#include <string>
#include <iostream>

class Entity {
public:
    Entity(const std::string& n, int hp);
    void takeDamage(int dmg);
    void heal(int amount);
    void displayStatus() const;

    std::string getName() const { return name; }
    int getHealth() const { return health; }

protected:
    static constexpr int MaxHealth = 100;
    std::string name;
    int health;
    bool isDead;
};