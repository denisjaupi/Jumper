//
// Created by tudor on 15/03/2023.
//

#ifndef JUMPER_PLAYER_H
#define JUMPER_PLAYER_H

#include "Entity.h"

#define DEFAULT_PLAYER_HEALTH 3
#define DEFAULT_PLAYER_SPEED 2.f

class Player: Entity{
private:
    int health;
    bool shield;
    float speed;

    void jump();

public:
    Player();
    void decreaseHealth();
    void increaseHealth();
    void addShield();
    bool hitted();
    void death();
    sf::Vector2<float> getPosition();
    void draw();
    int getHealth() const{
        return health;
    }
};


#endif //JUMPER_PLAYER_H
