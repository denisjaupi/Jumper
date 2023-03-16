//
// Created by tudor on 15/03/2023.
//

#include "../Header/Platform.h"



Platform::Platform(sf::Vector2f &size, sf::Vector2f &position) {
    this->setSize(size);
    this->setPosition(position);
    this->setFillColor(sf::Color(255,255,255));
}

sf::Vector2f Platform::getRectSize() const {
    return this->getSize();
}

void Platform::draw(sf::RenderWindow &window) {
        window.draw(*this);
}
