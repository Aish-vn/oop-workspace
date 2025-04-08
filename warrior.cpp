#include "warrior.h"
#include <iostream>

Warrior::Warrior(const std::string& name, int health, int damage, const std::string& weapon)
    : Player(name, health, damage), weapon(weapon) {}

void Warrior::swingWeapon(Player* opponent) {
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    opponent->takeDamage(damage);
}