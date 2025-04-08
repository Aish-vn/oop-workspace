#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
protected:
    std::string name;
    int health;
    int damage;

public:
    Player(const std::string& name, int health, int damage);
    virtual ~Player() {}

    std::string getName() const;
    int getHealth() const;
    virtual void takeDamage(int amount);
};

#endif 