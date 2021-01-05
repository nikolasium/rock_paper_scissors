// Author: Nikolas Beier

// rock_paper_scissors.cpp: "main".

#include <iostream>
#include "Game.h"

int main()
{
    std::cout << "Welcome to Game: Rock-Paper-Scissors!\n";
    int selection = 0;

    do {
        game(selection);
    } while (game(selection) != 4);
    
    return 0;
}

