//
// Created by tudor on 16/03/2023.
//

#ifndef JUMPER_MENU_H
#define JUMPER_MENU_H


#include <SFML/Graphics.hpp>

class Menu {
public:
    Menu(sf::RenderWindow& window) : window_(window) {
        // Crea i bottoni del menu
        startButton_.setSize(sf::Vector2f(200, 50));
        startButton_.setFillColor(sf::Color::Green);
        startButton_.setPosition(sf::Vector2f(300, 200));

        settingsButton_.setSize(sf::Vector2f(200, 50));
        settingsButton_.setFillColor(sf::Color::Yellow);
        settingsButton_.setPosition(sf::Vector2f(300, 300));

        exitButton_.setSize(sf::Vector2f(200, 50));
        exitButton_.setFillColor(sf::Color::Red);
        exitButton_.setPosition(sf::Vector2f(300, 400));
    }


    void draw() {
        // Disegna i bottoni del menu sulla finestra
        window_.draw(startButton_);
        window_.draw(settingsButton_);
        window_.draw(exitButton_);
    }

    // Verifica se il pulsante Start è stato cliccato
    bool isStartButtonClicked(sf::Vector2f mousePos) {
        return startButton_.getGlobalBounds().contains(mousePos);
    }

    // Verifica se il pulsante Settings è stato cliccato
    bool isSettingsButtonClicked(sf::Vector2f mousePos) {
        return settingsButton_.getGlobalBounds().contains(mousePos);
    }

    // Verifica se il pulsante Exit è stato cliccato
    bool isExitButtonClicked(sf::Vector2f mousePos) {
        return exitButton_.getGlobalBounds().contains(mousePos);
    }

private:
    sf::RenderWindow& window_;
    sf::RectangleShape startButton_;
    sf::RectangleShape settingsButton_;
    sf::RectangleShape exitButton_;
};


#endif //JUMPER_MENU_H
