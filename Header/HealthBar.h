//
// Created by tudor on 15/03/2023.
//

#ifndef JUMPER_HEALTHBAR_H
#define JUMPER_HEALTHBAR_H

#include "Heart.h"

#define MAX_HEALTH 3

class HealthBar {
private:
    Heart hearts[MAX_HEALTH];
public:
    HealthBar();
    void decreaseHealth();
    void increaseHealth();
};


#endif //JUMPER_HEALTHBAR_H
