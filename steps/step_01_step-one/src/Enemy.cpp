#include "../include/Enemy.hpp" 

Enemy::Enemy(const std::string& n, int hp) : Entity(n, hp) {}

void Enemy::attack(Entity& target) {
    int dmg = 5;
    std::cout << name << " attacks " << target.getName() << " for " << dmg << " dmg\n";
    target.takeDamage(dmg); 
}