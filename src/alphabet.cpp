#include "alphabet.hpp"

Alphabet::Alphabet(){}

void Alphabet::printChar(char character, int size, int x, int y, bool screen[128][32]){ 
    if(size == 0){
        switch(character){
            case '>':
            /**
             *   012
             * 0 # 
             * 1 ##  
             * 2 ###     
             * 3 ##  
             * 4 #   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {true};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            break;
        } 
    } else if(size == 3){
        switch(character){
            case 'A':
            /**
             *   012
             * 0  # 
             * 1 # # 
             * 2 # # 
             * 3 ### 
             * 4 # #   
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            break;
    
            case 'B':
            /**
             *   012
             * 0 ##  
             * 1 # #  
             * 2 ##  
             * 3 # #  
             * 4 ##  
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {false};
            break;
    
            case 'C':
            /**
             *   012
             * 0 ###  
             * 1 #
             * 2 #
             * 3 #
             * 4 ###    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;
    
            case 'D':
            /**
             *   012
             * 0 ## 
             * 1 # # 
             * 2 # # 
             * 3 # # 
             * 4 ##    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {false};
            break;
    
            case 'E':
            /**
             *   012
             * 0 ###  
             * 1 #
             * 2 ## 
             * 3 #
             * 4 ###    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;
    
            case 'F':
            /**
             *   012
             * 0 ###  
             * 1 #
             * 2 ## 
             * 3 #
             * 4 # 
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            break;
    
            case 'G':
            /**
             *   012
             * 0 ###  
             * 1 #
             * 2 #
             * 3 # # 
             * 4 ###    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;
    
            case 'H':
            /**
             *   012
             * 0 # #  
             * 1 # # 
             * 2 ###  
             * 3 # # 
             * 4 # #    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            break;
    
            case 'I':
            /**
             *   012
             * 0 ###  
             * 1  #
             * 2  #
             * 3  #
             * 4 ###    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {true};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;
    
            case 'J':
            /**
             *   012
             * 0 ###  
             * 1  #
             * 2  #
             * 3  #
             * 4 ##    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {true};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {false};
            break;
    
            case 'K':
            /**
             *   012
             * 0 # #  
             * 1 # # 
             * 2 ## 
             * 3 # # 
             * 4 # #   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            break;
    
            case 'L':
            /**
             *   012
             * 0 #  
             * 1 #  
             * 2 #
             * 3 # 
             * 4 ###   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;
    
            case 'M':
            /**
             *   012
             * 0 # # 
             * 1 ###  
             * 2 ###  
             * 3 # # 
             * 4 # #   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {true};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            break;
    
            case 'N':
            /**
             *   012
             * 0 ## 
             * 1 # #  
             * 2 # #  
             * 3 # # 
             * 4 # #   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            break;
    
            case 'O':
            /**
             *   012
             * 0 ### 
             * 1 # #  
             * 2 # #  
             * 3 # # 
             * 4 ###   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;
    
            case 'P':
            /**
             *   012
             * 0 ### 
             * 1 # #  
             * 2 ###  
             * 3 #  
             * 4 #    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            break;

            case 'Q':
            /**
             *   012
             * 0 ### 
             * 1 # #  
             * 2 # #  
             * 3 ##  
             * 4  ##     
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;

            case 'R':
            /**
             *   012
             * 0 ### 
             * 1 # #  
             * 2 ###  
             * 3 ## 
             * 4 # #    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            break;

            case 'S':
            /**
             *   012
             * 0 ### 
             * 1 #  
             * 2 ###  
             * 3   #  
             * 4 ###     
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;

            case 'T':
            /**
             *   012
             * 0 ### 
             * 1  # 
             * 2  # 
             * 3  #  
             * 4  #    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {true};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {false};
            break;

            case 'U':
            /**
             *   012
             * 0 # # 
             * 1 # #  
             * 2 # # 
             * 3 # # 
             * 4 ###    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;

            case 'V':
            /**
             *   012
             * 0 # # 
             * 1 # # 
             * 2 # # 
             * 3 # #   
             * 4  #    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {false};
            break;

            case 'W':
            /**
             *   012
             * 0 # # 
             * 1 # # 
             * 2 ###
             * 3 ###    
             * 4 # #   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            break;

            case 'X':
            /**
             *   012
             * 0 # # 
             * 1 # # 
             * 2  # 
             * 3 # #   
             * 4 # #    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            break;

            case 'Y':
            /**
             *   012
             * 0 # # 
             * 1 # # 
             * 2  # 
             * 3  #   
             * 4  #    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {false};
            break;

            case 'Z':
            /**
             *   012
             * 0 ### 
             * 1   # 
             * 2  # 
             * 3 #   
             * 4 ###     
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;

            case ' ':
            /**
             *   012
             * 0 
             * 1  
             * 2 
             * 3  
             * 4    
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            break;

            case '0':
            /**
             *   012
             * 0  # 
             * 1 # #  
             * 2 # #  
             * 3 # #  
             * 4  # 
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {false};
            break;

            case '1':
            /**
             *   012
             * 0  # 
             * 1 ##  
             * 2  # 
             * 3  # 
             * 4 ###  
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {true};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;

            case '2':
            /**
             *   012
             * 0 ###   
             * 1   #  
             * 2 ###   
             * 3 # 
             * 4 ###     
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;

            case '3':
            /**
             *   012
             * 0 ###   
             * 1   # 
             * 2 ###   
             * 3   # 
             * 4 ### 
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;

            case '4':
            /**
             *   012
             * 0 # #   
             * 1 # #  
             * 2 ###   
             * 3   # 
             * 4   # 
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            break;

            case '5':
            /**
             *   012
             * 0 ###   
             * 1 # 
             * 2 ###   
             * 3   # 
             * 4 ### 
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;

            case '6':
            /**
             *   012
             * 0 ###   
             * 1 # 
             * 2 ###   
             * 3 # #  
             * 4 ###   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;

            case '7':
            /**
             *   012
             * 0 ###   
             * 1   # 
             * 2   # 
             * 3   # 
             * 4   # 
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            break;

            case '8':
            /**
             *   012
             * 0 ###   
             * 1 # #  
             * 2 ###   
             * 3 # #  
             * 4 ###   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;

            case '9':
            /**
             *   012
             * 0 ###   
             * 1 # #  
             * 2 ###   
             * 3   # 
             * 4 ###   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            break;

            case '/':
            /**
             *   012
             * 0   # 
             * 1  # 
             * 2  # 
             * 3  # 
             * 4 #   
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {true};
            screen[x+2][y+1] = {false};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            break;
        };
    } else if(size == 5){
        switch(character){
            case 'A':
            /**
             *   01234
             * 0  ###   
             * 1 #   # 
             * 2 #   # 
             * 3 #####  
             * 4 #   #   
             * 5 #   # 
             * 6 #   # 
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {true};
            break;

            case 'B':
            /**
             *   01234
             * 0 ####  
             * 1 #   # 
             * 2 #   # 
             * 3 #### 
             * 4 #   #   
             * 5 #   # 
             * 6 ####   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case 'C':
            /**
             *   01234
             * 0  ###  
             * 1 #   # 
             * 2 #    
             * 3 # 
             * 4 #      
             * 5 #   # 
             * 6  ###   
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case 'D':
            /**
             *   01234
             * 0 ####  
             * 1 #   # 
             * 2 #   # 
             * 3 #   #  
             * 4 #   #   
             * 5 #   # 
             * 6 ####   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case 'E':
            /**
             *   01234
             * 0 #####
             * 1 #   
             * 2 #   
             * 3 #### 
             * 4 #    
             * 5 #   
             * 6 ##### 
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {true};
            break;

            case 'F':
            /**
             *   01234
             * 0 #####  
             * 1 #    
             * 2 #    
             * 3 #### 
             * 4 #      
             * 5 #    
             * 6 #   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {false};
            break;

            case 'G':
            /**
             *   01234
             * 0  ###  
             * 1 #   # 
             * 2 #   
             * 3 # ###    
             * 4 #   #   
             * 5 #   # 
             * 6  ###   
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case 'H':
            /**
             *   01234
             * 0 #   #  
             * 1 #   # 
             * 2 #   # 
             * 3 #####    
             * 4 #   #   
             * 5 #   # 
             * 6 #   #   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {true};
            break;

            case 'I':
            /**
             *   01234
             * 0 #####  
             * 1   #   
             * 2   #   
             * 3   #    
             * 4   #     
             * 5   #   
             * 6 #####    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {false};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {false};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {true};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {true};
            break;

            case 'J':
            /**
             *   01234
             * 0     #  
             * 1     #   
             * 2     #   
             * 3     #    
             * 4     #     
             * 5 #   #   
             * 6  ###    
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case 'K':
            /**
             *   01234
             * 0 #   # 
             * 1 #  #  
             * 2 # #   
             * 3 ##     
             * 4 # #    
             * 5 #  # 
             * 6 #   # 
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {true};
            screen[x+4][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {true};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {true};
            break;

            case 'L':
            /**
             *   01234
             * 0 #  
             * 1 #   
             * 2 #   
             * 3 #    
             * 4 #     
             * 5 #   
             * 6 #####      
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {true};
            break;

            case 'M':
            /**
             *   01234
             * 0  # #  
             * 1 # # #   
             * 2 # # #   
             * 3 # # #    
             * 4 # # #     
             * 5 # # #   
             * 6 #   #      
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {false};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {true};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {true};
            break;

            case 'N':
            /**
             *   01234
             * 0 #   #  
             * 1 ##  #   
             * 2 # # #   
             * 3 # # #    
             * 4 #  ##     
             * 5 #  ##   
             * 6 #   #      
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {true};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {true};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {true};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {true};
            break;

            case 'O':
            /**
             *   01234
             * 0  ###  
             * 1 #   #   
             * 2 #   #   
             * 3 #   #    
             * 4 #   #     
             * 5 #   #   
             * 6  ###      
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case 'P':
            /**
             *   01234
             * 0 ####  
             * 1 #   #   
             * 2 #   #   
             * 3 ####     
             * 4 #        
             * 5 #      
             * 6 #        
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {false};
            break;
            
            case 'Q':
            /**
             *   01234
             * 0  ###  
             * 1 #   #   
             * 2 #   #   
             * 3 #   #    
             * 4 # # #     
             * 5 #  #   
             * 6  ## #       
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {true};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {true};
            break;
            
            case 'R':
            /**
             *   01234
             * 0 ####  
             * 1 #   #   
             * 2 #   #   
             * 3 ####     
             * 4 # #         
             * 5 #  #      
             * 6 #   #        
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {true};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {true};
            break;

            case 'S':
            /**
             *   01234
             * 0  ###  
             * 1 #   #   
             * 2 #     
             * 3  ###     
             * 4     #         
             * 5 #   #      
             * 6  ###           
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case 'T':
            /**
             *   01234
             * 0 #####   
             * 1   #   
             * 2   #     
             * 3   #     
             * 4   #         
             * 5   #      
             * 6   #           
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {false};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {false};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {true};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {false};
            break;

            case 'U':
            /**
             *   01234
             * 0 #   #  
             * 1 #   #   
             * 2 #   #   
             * 3 #   #    
             * 4 #   #     
             * 5 #   #   
             * 6  ###      
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case 'V':
            /**
             *   01234
             * 0 #   #  
             * 1 #   #   
             * 2 #   #   
             * 3  # #    
             * 4  # #     
             * 5   #   
             * 6   #      
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {true};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {false};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {true};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {false};
            break;

            case 'W':
            /**
             *   01234
             * 0 #   #  
             * 1 # # #   
             * 2 # # #   
             * 3 # # #    
             * 4 # # #     
             * 5 # # #   
             * 6  # #      
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {true};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case 'X':
            /**
             *   01234
             * 0 #   #  
             * 1 #   #   
             * 2  # #   
             * 3   #    
             * 4  # #     
             * 5 #   #   
             * 6 #   #      
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {true};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {true};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {true};
            break;

            case 'Y':
            /**
             *   01234
             * 0 #   #  
             * 1 #   #   
             * 2  # #   
             * 3   #    
             * 4   #     
             * 5   #    
             * 6   #       
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {true};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {false};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {true};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {false};
            break;

            case 'Z':
            /**
             *   01234
             * 0 #####   
             * 1     # 
             * 2    # 
             * 3   #   
             * 4  #     
             * 5 #      
             * 6 #####             
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {true};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {true};
            break;

            case ' ':
            /**
             *   01234
             * 0 
             * 1  
             * 2
             * 3
             * 4   
             * 5  
             * 6       
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {false};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {false};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {false};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {false};
            break;            

            case '0':
            /**
             *   01234
             * 0  ###  
             * 1 #   #   
             * 2 #  ##   
             * 3 # # #    
             * 4 ##  #     
             * 5 #   #   
             * 6  ###      
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {true};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case '1':
            /**
             *   01234
             * 0   # 
             * 1  ## 
             * 2 # # 
             * 3   # 
             * 4   # 
             * 5   # 
             * 6 #####     
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {false};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {true};
            screen[x+2][y+1] = {true};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {false};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {true};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {true};
            break;
            
            case '2':
            /**
             *   01234
             * 0  ###   
             * 1 #   # 
             * 2     # 
             * 3    # 
             * 4   # 
             * 5  # 
             * 6 #####         
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {false};
            screen[x+1][y+5] = {true};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {true};
            break; 
            
            case '3':
            /**
             *   01234
             * 0  ###   
             * 1 #   # 
             * 2     # 
             * 3  ###    
             * 4     # 
             * 5 #   #  
             * 6  ###  
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case '4':
            /**
             *   01234
             * 0    #
             * 1   ##
             * 2  # #
             * 3 #  #
             * 4 #####
             * 5    #
             * 6    #
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {false}; 
            screen[x+2][y+0] = {false}; 
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};
            screen[x+3][y+1] = {true};
            screen[x+4][y+1] = {false};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {true};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {true};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {false};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {true};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case '5':
            /**
             *   01234
             * 0 #####     
             * 1 # 
             * 2 ####    
             * 3     # 
             * 4     # 
             * 5     # 
             * 6 ####    
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true}; 
            screen[x+2][y+0] = {true}; 
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {false};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {true};
            screen[x+3][y+2] = {true};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {false};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case '6':
            /**
             *   01234
             * 0  ###
             * 1 #   # 
             * 2 #    
             * 3 #### 
             * 4 #   #
             * 5 #   #
             * 6  ###
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true}; 
            screen[x+2][y+0] = {true}; 
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case '7':
            /**
             *   01234
             * 0 #####
             * 1     #
             * 2    #
             * 3   # 
             * 4   #  
             * 5   #   
             * 6   #   
             */
            screen[x+0][y+0] = {true};
            screen[x+1][y+0] = {true}; 
            screen[x+2][y+0] = {true}; 
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {true};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {false};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {true};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {false};
            break;
            
            case '8':
            /**
             *   01234
             * 0  ###
             * 1 #   #
             * 2 #   #
             * 3  ###
             * 4 #   #
             * 5 #   #
             * 6  ###
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true}; 
            screen[x+2][y+0] = {true}; 
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;
            
            case '9':
            /**
             *   01234
             * 0  ###
             * 1 #   #
             * 2 #   #
             * 3  #### 
             * 4     #
             * 5     #
             * 6  ###
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true}; 
            screen[x+2][y+0] = {true}; 
            screen[x+3][y+0] = {true};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case '$':
            /**
             *   01234
             * 0  ## #  
             * 1 #  ## 
             * 2   ###  
             * 3
             * 4 ###   
             * 5 ##  # 
             * 6 # ##        
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {true};
            screen[x+2][y+0] = {true};
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {true};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {true};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {true};
            screen[x+3][y+2] = {true};
            screen[x+4][y+2] = {true};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {true};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {true};
            screen[x+3][y+6] = {true};
            screen[x+4][y+6] = {false};
            break;

            case '%':
            /**
             *   01234
             * 0  
             * 1 #   # 
             * 2 ## #   
             * 3 ###   
             * 4  ###  
             * 5 # ###      
             * 6       
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {false}; 
            screen[x+2][y+0] = {false}; 
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {true};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {true};

            screen[x+0][y+2] = {true};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {true};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {true};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {true};
            screen[x+2][y+4] = {true};
            screen[x+3][y+4] = {true};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {true};
            screen[x+3][y+5] = {true};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {false};
            break;

            case '@':
            /**
             *   01234
             * 0      
             * 1   #     
             * 2  # #   
             * 3 ## ##    
             * 4 #   #   
             * 5 #   # 
             * 6      
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {false}; 
            screen[x+2][y+0] = {false}; 
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {true};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {false};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {true};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {true};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {true};
            screen[x+1][y+3] = {true};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {true};
            screen[x+4][y+3] = {true};

            screen[x+0][y+4] = {true};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {true};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {false};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {true};

            screen[x+0][y+6] = {false};
            screen[x+1][y+6] = {false};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {false};
            break;

            case '.':
            /**
             *   01234
             * 0      
             * 1      
             * 2      
             * 3      
             * 4      
             * 5      
             * 6 # 
             */
            screen[x+0][y+0] = {false};
            screen[x+1][y+0] = {false}; 
            screen[x+2][y+0] = {false}; 
            screen[x+3][y+0] = {false};
            screen[x+4][y+0] = {false};

            screen[x+0][y+1] = {false};
            screen[x+1][y+1] = {false};
            screen[x+2][y+1] = {false};
            screen[x+3][y+1] = {false};
            screen[x+4][y+1] = {false};

            screen[x+0][y+2] = {false};
            screen[x+1][y+2] = {false};
            screen[x+2][y+2] = {false};
            screen[x+3][y+2] = {false};
            screen[x+4][y+2] = {false};

            screen[x+0][y+3] = {false};
            screen[x+1][y+3] = {false};
            screen[x+2][y+3] = {false};
            screen[x+3][y+3] = {false};
            screen[x+4][y+3] = {false};

            screen[x+0][y+4] = {false};
            screen[x+1][y+4] = {false};
            screen[x+2][y+4] = {false};
            screen[x+3][y+4] = {false};
            screen[x+4][y+4] = {false};

            screen[x+0][y+5] = {true};
            screen[x+1][y+5] = {true};
            screen[x+2][y+5] = {false};
            screen[x+3][y+5] = {false};
            screen[x+4][y+5] = {false};

            screen[x+0][y+6] = {true};
            screen[x+1][y+6] = {true};
            screen[x+2][y+6] = {false};
            screen[x+3][y+6] = {false};
            screen[x+4][y+6] = {false};
            break;

        };
    } 
} 

void Alphabet::printString(char str[], int size, int x, int y, bool screen[128][32]){
    int cursorX = x;
    for (int i = 0; str[i] != '\0'; ++i){
        
        printChar(str[i], size, cursorX, y, screen);

        if(str[i] == '.'){
            cursorX += 3;
        } else { 
            cursorX += (size + 1);
        } 
    } 
} 