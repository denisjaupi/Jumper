//
// Created by tudor on 15/03/2023.
//

#ifndef JUMPER_MAP_H
#define JUMPER_MAP_H

#include "Platform.h"

#define MAPS_PLATFORMS 10

class Map {
private:
    Platform platforms[MAPS_PLATFORMS];
public:
    Map();
};


#endif //JUMPER_MAP_H
