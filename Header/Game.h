//
// Created by tudor on 15/03/2023.
//

#ifndef JUMPER_GAME_H
#define JUMPER_GAME_H

#include <iostream>
#include "SFML/Window.hpp"
#include "Map.h"
#include "Menu.h"

class Game {
public:
    Game() : window(sf::VideoMode(800, 600), "Game"), menu(window){
        // Inizializza gli oggetti del gioco
    }

    void run() {
        // Ciclo principale del gioco
        while (window.isOpen()) {
            // Gestisci gli eventi
            sf::Event event;
            while (window.pollEvent(event)) {
                switch (event.type) {
                    // Chiudi la finestra se l'utente clicca sulla
                    case sf::Event::Closed:
                        window.close();
                        break;
                    case sf::Event::MouseButtonPressed:
                        if (event.mouseButton.button == sf::Mouse::Left) {
                            // Verifica se i pulsanti del menu sono stati cliccati
                            sf::Vector2f mousePos(event.mouseButton.x, event.mouseButton.y);
                            if (menu.isStartButtonClicked(mousePos)) {
                                std::cout << "Start button clicked" << std::endl;
                            }
                            else if (menu.isSettingsButtonClicked(mousePos)) {
                                std::cout << "Settings button clicked" << std::endl;
                            }
                            else if (menu.isExitButtonClicked(mousePos)) {
                                std::cout << "Exit button clicked" << std::endl;
                                window.close();
                            }
                        }
                        break;
                    default:
                        break;
                }
            }

            // Aggiorna lo stato del gioco
            update();

            // Pulisci la finestra
            window.clear();

            // Disegna gli oggetti del gioco sulla finestra
            draw();

            // Aggiorna la finestra
            window.display();
        }
    }

private:
    void update() {
        // Aggiorna lo stato del gioco
        // ...
    }

    void draw() {
        // Disegna gli oggetti del gioco sulla finestra
        menu.draw();
    }
    Menu menu;
    sf::RenderWindow window;
};


#endif //JUMPER_GAME_H
