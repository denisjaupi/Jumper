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
    float Radius;
    sf::Vector2f position;
protected:
    virtual void move();
    virtual void draw();
public:
    float getRadius() const;
    sf::Vector2f getPositions() const;

    Entity();
};


#endif //JUMPER_ENTITY_H
