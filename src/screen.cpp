#include "screen.hpp"

Screen::Screen(){

    // Créez une fenêtre SFML avec l'échelle appliquée
    sf::RenderWindow window(sf::VideoMode(screenWidth * scale, screenHeight * scale), "RF-5800V-HH emulator");

    // Définir la taille d'un pixel agrandi (4x4)
    sf::RectangleShape pixel(sf::Vector2f(scale, scale));

    /*for(int y; y < screenHeight; y++){  
        for(int x; x < screenWidth; x++){
            dotMatrix[x][y] = false;   
        } 
    } */

    Alphabet alph;

    char up[] = "R BAT      VULOS" ;

    alph.printString(up, 3, 1, 1, dotMatrix);

    alph.printChar('>', 0, 1, 7, dotMatrix);
    alph.printChar('>', 0, 1, 15, dotMatrix);

    char channel1[] = "446.00625$@%";
    alph.printString(channel1, 5, 10, 7, dotMatrix);
    char channel2[] = "446.12675";
    alph.printString(channel2, 5, 10, 15, dotMatrix);

    char down[] = "H   N S BUSY TDR FM VOX DCS U/V KEY"; 
    alph.printString(down, 3, 1, 25, dotMatrix);

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
                    pixel.setFillColor(sf::Color(70, 70, 20));    // Couleur du pixel allumé
                    window.draw(pixel);                      // Dessiner le pixel
                }
            }
        }

        window.display();  // Afficher à l'écran
    }
} 