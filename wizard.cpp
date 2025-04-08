#include "wizard.h"
#include <iostream>

Wizard::Wizard(const std::string& name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player* opponent) {
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << mana << " damage.\n";
    opponent->takeDamage(mana);
}