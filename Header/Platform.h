//
// Created by tudor on 15/03/2023.
//

#ifndef JUMPER_PLATFORM_H
#define JUMPER_PLATFORM_H


#include <SFML/System/Vector2.hpp>
#include "Entity.h"

class Platform: public sf::RectangleShape{
public:
    Platform(sf::Vector2f &size, sf::Vector2f &position);
    sf::Vector2f getRectSize() const;
    void draw(sf::RenderWindow &window);
};


#endif //JUMPER_PLATFORM_H
