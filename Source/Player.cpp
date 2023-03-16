//
// Created by tudor on 15/03/2023.
//

#include "../Header/Player.h"

void Player::jump() {

}

Player::Player() {
    health = DEFAULT_PLAYER_HEALTH;
    shield = false;
    speed = DEFAULT_PLAYER_SPEED;
}

void Player::decreaseHealth() {
    if(health == 1){
        death();
    }
    health--;
}

void Player::increaseHealth() {
    if(health < 3){
        health++;
    }
}

void Player::addShield() {
    if(!shield)
        shield = true;
}

bool Player::hitted() {
    return false;
}

void Player::death() {

}

sf::Vector2<float> Player::getPosition() {
    sf::Vector2<float> positions;
    return positions;
}

void Player::draw() {

}
