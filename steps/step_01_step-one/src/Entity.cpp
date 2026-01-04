#include "../include/Entity.hpp"

Entity::Entity(const std::string& n, int hp) : name(n), health(hp), isDead(hp <= 0)  {}

void Entity::takeDamage(int dmg) {
    
    if(isDead) {
        std::cout << "Dont hit dead creatures!!!";
        return;
    }
    
    health -= dmg;
    
    if(health <= 0) {
        health = 0;
        isDead = true;
        std::cout << name << " takes to much dmg and died. RIP " << name << "\n";
    }
    else {
        std::cout << name << " takes " << dmg << " damage. HP: " << health << "\n";
    }
    
}

void Entity::heal(int amount) {
    if(isDead) {

        if(amount < 11) {
            std::cout << "The caracter " << name << " is dead, reanimation requires at least 11 HP.";
            return;
        }
        amount -= 10;
        health = amount;
        isDead = false;
        std::cout << "The caracter " << name 
        << " is dead and will be reborn. New HP " 
        << health << ".\n";
        return;
    }
    if(health + amount > MaxHealth) {
        std::cout << name << " should heal by " << amount << " HP. To rase Hp to " << MaxHealth
        << name << " can only heal " << MaxHealth - health << " HP.\n";
        
        health = MaxHealth;
        
        std::cout << name << " is heal completely. Health is now at " << health << " HP\n" ;
    }
    else {
        health += amount;
        std::cout << name << " heals " << amount << ". HP: " << health << "\n";
    }
}

void Entity::displayStatus() const {
    std::cout << "Entity: " << name <<  " | HP: " << health << "\n";
}

