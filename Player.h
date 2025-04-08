#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player {
protected:
    std::string name;
    int health;
    int damage;

public:
    Player(std::string name, int health, int damage);
    
    void attack(Player* opponent, int damage);
    void takeDamage(int damage);

    std::string getName() const;
    int getHealth() const;
    int getDamage() const;

    void setName(std::string name);
    void setHealth(int health);
    void setDamage(int damage);
};

#endif
