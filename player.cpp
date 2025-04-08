#include "player.h"
#include <iostream>

Player::Player(const std::string& name, int health, int damage)
    : name(name), health(health), damage(damage) {}

std::string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

void Player::takeDamage(int amount) {
    health -= amount;
    if (health < 0) health = 0;
    std::cout << name << " takes " << amount << " damage. Remaining health: " << health << "\n";
}
