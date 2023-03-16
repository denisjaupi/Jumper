//
// Created by tudor on 15/03/2023.
//

#ifndef JUMPER_GAME_H
#define JUMPER_GAME_H

#include <iostream>
#include "SFML/Window.hpp"
#include "Map.h"
#include "Menu.h"

class Game {
public:
    Game();
    void run();

private:
    void update();
    void draw();
    Menu menu;
    sf::RenderWindow window;
};


#endif //JUMPER_GAME_H
