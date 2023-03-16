//
// Created by tudor on 15/03/2023.
//

#include "../Header/Game.h"
#include "../Header//Platform.h"
Game::Game() : window(sf::VideoMode(800, 600), "Game", sf::Style::Close | sf::Style::Titlebar), menu(window){
    // Inizializza gli oggetti del gioco
}

void Game::run() {
    // Ciclo principale del gioco

    sf::Vector2f size (20.f, 100.f);
    sf::Vector2f position(0.f,0.f);
    bool isStarted = false;
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
                            isStarted = true;
                        }else if (menu.isSettingsButtonClicked(mousePos)) {
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
        if(isStarted){
            Platform platform(size,position);
            platform.draw(window);
        }else{
            draw();
        }

        // Aggiorna la finestra
        window.display();
    }
}

void Game::update() {

}

void Game::draw() {
    menu.draw();
}
