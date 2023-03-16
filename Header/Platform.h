//
// Created by tudor on 15/03/2023.
//

#ifndef JUMPER_PLATFORM_H
#define JUMPER_PLATFORM_H


#include <SFML/System/Vector2.hpp>

class Platform {
private:
    sf::Vector2f size;
public:
    Platform(sf::Vector2f size);
    sf::Vector2f getSize() const;
};


#endif //JUMPER_PLATFORM_H
