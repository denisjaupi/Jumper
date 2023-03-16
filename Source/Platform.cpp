//
// Created by tudor on 15/03/2023.
//

#include "../Header/Platform.h"

Platform::Platform(sf::Vector2f size) {
    this->size = size;
}

sf::Vector2f Platform::getSize() const {
    return size;
}
