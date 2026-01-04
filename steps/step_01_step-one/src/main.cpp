// =====================================================
// Step 01: step one
// =====================================================

#include "../include/Player.hpp"
#include "../include/Enemy.hpp"
#include "../include/util.hpp"


int main() {
    Player p1;
    Player p2("Alice", 20);
    Enemy e1("Goblin", 50);

    p1.displayStatus();
    p2.displayStatus();
    e1.displayStatus();
    
    std::cout << "Battle\n";
    
    p2.attack(e1);
    e1.attack(p2);
    e1.attack(p2);
    e1.attack(p2);
    e1.attack(p2);
    e1.attack(p2);
    e1.attack(p2);
    p1.jump();
    p2.heal(20);
    p2.heal(20);
    
    p1.displayStatus();
    p2.displayStatus();
    e1.displayStatus();

    int sum = add(5, 10);

    std::cout << "sum of 5+10 = " << sum << "\n";

    std::cout << "Total players: " << Player::playerCount << "\n";

    return 0;
}
