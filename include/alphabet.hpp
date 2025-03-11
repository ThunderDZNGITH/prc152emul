#ifndef ALPHABET_HPP
#define ALPHABET_HPP

#include "screen.hpp"
#include <string>

class Alphabet{
    public:
    Alphabet();
    void printChar(char character, int size, int x, int y, bool screen[128][32]);
    void printString(char str[], int size, int x, int y, bool screen[128][32]);
};

#endif // ALPHABET_HPP