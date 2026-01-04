#include "../include/Player.hpp"

int Player::playerCount = 0;

Player::Player() : Entity("Unnamed", MaxHealth) {
    playerCount++;
    std::cout << "Player " << name << " created\n";
}

Player::Player(const std::string& n, int hp) : Entity(n, hp)  {
    playerCount++;
    std::cout << "Player " << name << " created\n";
}

void Player::jump() {
    std::cout << name << " jumps!\n";
}

void Player::attack(Entity& target) {
    int dmg = 10 + level;
    std::cout << name << " attacks " << target.getName() << " for " << dmg << " dmg\n";
    target.takeDamage(dmg);
}