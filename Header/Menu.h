//
// Created by tudor on 16/03/2023.
//

#ifndef JUMPER_MENU_H
#define JUMPER_MENU_H


#include <SFML/Graphics.hpp>

class Menu {
public:
    Menu(sf::RenderWindow& window);


    void draw();

    // Verifica se il pulsante Start è stato cliccato
    bool isStartButtonClicked(sf::Vector2f mousePos);

    // Verifica se il pulsante Settings è stato cliccato
    bool isSettingsButtonClicked(sf::Vector2f mousePos);
    // Verifica se il pulsante Exit è stato cliccato
    bool isExitButtonClicked(sf::Vector2f mousePos);

private:
    sf::RenderWindow& window;
    sf::RectangleShape startButton;
    sf::RectangleShape settingsButton;
    sf::RectangleShape exitButton;
};


#endif //JUMPER_MENU_H
