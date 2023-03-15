//
// Created by tudor on 15/03/2023.
//

#ifndef JUMPER_GAME_H
#define JUMPER_GAME_H


#include "Map.h"

class Game {
private:
    void stop();
    void pause();
    void resume();
public:
    Map map;
    void start();

};


#endif //JUMPER_GAME_H
