#ifndef SCREEN_HPP
#define SCREEN_HPP 

#include <SFML/Graphics.hpp>
#include "alphabet.hpp" 

class Screen {
    public:
    Screen();
        // Taille de l'affichage : 128x64 pixels, chaque pixel sera x4 plus grand
        const int screenWidth = 128;
        const int screenHeight = 32;
        const int scale = 4;

        bool dotMatrix[128][32] = {false};
    sf::RenderWindow window;
};

#endif // SCREEN_HPP