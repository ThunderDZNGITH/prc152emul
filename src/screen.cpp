#include "screen.hpp"

Screen::Screen(){
    // Taille de l'affichage : 128x64 pixels, chaque pixel sera x4 plus grand
    const int screenWidth = 128;
    const int screenHeight = 32;
    const int scale = 4;

    // Créez une fenêtre SFML avec l'échelle appliquée
    sf::RenderWindow window(sf::VideoMode(screenWidth * scale, screenHeight * scale), "Dot Matrix Display");

    // Définir la taille d'un pixel agrandi (4x4)
    sf::RectangleShape pixel(sf::Vector2f(scale, scale));

    // Simuler quelques pixels allumés
    bool dotMatrix[screenWidth][screenHeight] = {false};

    for(int a = 0; a < screenHeight; a++){
        dotMatrix[1][a] = true;  
    }     

    // Boucle principale de la fenêtre
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(150, 160, 0));  // Efface l'écran

        // Affichage des pixels
        for (int x = 0; x < screenWidth; ++x) {
            for (int y = 0; y < screenHeight; ++y) {
                if (dotMatrix[x][y]) {
                    pixel.setPosition(x * scale, y * scale);  // Positionner le pixel
                    pixel.setFillColor(sf::Color::Black);    // Couleur du pixel allumé
                    window.draw(pixel);                      // Dessiner le pixel
                }
            }
        }

        window.display();  // Afficher à l'écran
    }
} 