//
// Created by tudor on 15/03/2023.
//

#ifndef JUMPER_POWERUP_H
#define JUMPER_POWERUP_H

#define HELATH 1
#define SHIELD 2
#define SPEED 3

#include "Entity.h"

class PowerUp: Entity{
private:
    int id;
    const int TIME_TO_DESPAWN = 5;
public:
    PowerUp(const int &id);
    int getPowerUp() const;
    void despawn();
    void move() override;
    void draw() override;
};


#endif //JUMPER_POWERUP_H
