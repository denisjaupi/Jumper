//
// Created by tudor on 15/03/2023.
//

#include <iostream>
#include "../Header/PowerUp.h"

PowerUp::PowerUp(const int &id) {
    this->id = id;
    switch (id) {
        case HELATH: ; // to do
        break;
        case SHIELD: ; // to do
        break;
        case SPEED: ; // to do
        default: std::cout<<"ERRORE: Selezione id powerUp";
    }
}

int PowerUp::getPowerUp() const {
    return 0;
}

void PowerUp::move() {
    Entity::move();
}

void PowerUp::draw() {
    Entity::draw();
}

void PowerUp::despawn() {

}
