#include "player.h"

Player::Player(std::string name, int health, int damage) 
    : name(name), health(health), damage(damage) {}

void Player::attack(Player* opponent, int damage) {
    opponent->takeDamage(damage);
}

void Player::takeDamage(int dmg) {
    health -= dmg;
    if (health < 0) health = 0;
    std::cout << name << " takes " << dmg << " damage. Remaining health: " << health << "\n";
}

std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getDamage() const { return damage; }

void Player::setName(std::string name) { this->name = name; }
void Player::setHealth(int health) { this->health = health; }
void Player::setDamage(int damage) { this->damage = damage; }
