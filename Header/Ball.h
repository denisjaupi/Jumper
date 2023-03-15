//
// Created by tudor on 15/03/2023.
//

#ifndef JUMPER_BALL_H
#define JUMPER_BALL_H

#include "Entity.h"

#define DEFAULT_SPEED  2.f

class Ball: Entity{
private:
    float speed;
public:
    Ball();
    void move() override;
    void draw() override;
    void increaseSpeed();


};


#endif //JUMPER_BALL_H
