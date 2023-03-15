//
// Created by tudor on 15/03/2023.
//

#ifndef JUMPER_ENTITY_H
#define JUMPER_ENTITY_H

#include "SFML/Graphics.hpp"

class Entity {
private:
    sf::Sprite sprite;
    sf::Texture texture;

protected:
    virtual void move();
    virtual void draw();


    Entity();
};


#endif //JUMPER_ENTITY_H
