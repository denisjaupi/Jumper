//
// Created by tudor on 16/03/2023.
//

#include "../Header/Menu.h"
Menu::Menu(sf::RenderWindow& window) : window(window) {
        // Crea i bottoni del menu
        startButton.setSize(sf::Vector2f(200, 50));
        startButton.setFillColor(sf::Color::Green);
        startButton.setPosition(sf::Vector2f(300, 200));

        settingsButton.setSize(sf::Vector2f(200, 50));
        settingsButton.setFillColor(sf::Color::Yellow);
        settingsButton.setPosition(sf::Vector2f(300, 300));

        exitButton.setSize(sf::Vector2f(200, 50));
        exitButton.setFillColor(sf::Color::Red);
        exitButton.setPosition(sf::Vector2f(300, 400));
}

void Menu::draw() {
    window.draw(startButton);
    window.draw(settingsButton);
    window.draw(exitButton);
}

bool Menu::isStartButtonClicked(sf::Vector2f mousePos) {
    return startButton.getGlobalBounds().contains(mousePos);
}

bool Menu::isSettingsButtonClicked(sf::Vector2f mousePos) {
    return settingsButton.getGlobalBounds().contains(mousePos);
}

bool Menu::isExitButtonClicked(sf::Vector2f mousePos) {
    return exitButton.getGlobalBounds().contains(mousePos);
};
