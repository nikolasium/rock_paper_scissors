// Author: Nikolas Beier

// Game.cpp: Game definition / Game logic

#include <iostream>
#include <ctime>
#include "Game.h"

// Generate random int (for selection_computer value)
inline int randint(int max) { srand(time(0)); return rand() % max; }
inline int randint(int min, int max) { return randint(max - min) + min; }

int game(int selection)
{
    srand(clock());
    int selection_computer = randint(1, 3); // Call function "randint" to get random int

    std::cout << "Please enter your selection now: (scissors=1, stone=2, paper=3, END=4)!" << std::endl;
    std::cin >> selection;
    while (std::cin.fail()) 
    {
        std::cout << "Err: Please enter a number!\n";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> selection;
    }
    if (selection > 4)
    {
        std::cout << "Number must not be greater than 4!\n";
        std::cout << "Try again!\n\n";
    }
    else if (selection < 1)
    {
        std::cout << "Number must not be less than 1!\n";
        std::cout << "Try again!\n\n";
    }
    else
    {
        if (selection == 1 && selection_computer == 3)
        {
            std::cout << " " << std::endl;
            std::cout << "Your selection: Scissors" << " | " << "Computer: Paper " << std::endl;
            std::cout << "You win!" << std::endl;
        }
        else if (selection == 1 && selection_computer == 2)
        {
            std::cout << " " << std::endl;
            std::cout << "Your selection: Scissors" << " | " << "Computer: Stone " << std::endl;
            std::cout << "You lost!" << std::endl;
        }
        else if (selection == 1 && selection_computer == 1)
        {
            std::cout << " " << std::endl;
            std::cout << "Your selection: Scissors" << " | " << "Computer: Scissors " << std::endl;
            std::cout << "Draw !" << std::endl;
        }
        else if (selection == 2 && selection_computer == 1)
        {
            std::cout << " " << std::endl;
            std::cout << "Your selection: Stein" << " | " << "Computer: Scissors " << std::endl;
            std::cout << "You win!" << std::endl;
        }
        else if (selection == 2 && selection_computer == 3)
        {
            std::cout << " " << std::endl;
            std::cout << "Your selection: Stone" << " | " << "Computer: Paper " << std::endl;
            std::cout << "You lost!" << std::endl;
        }
        else if (selection == 2 && selection_computer == 2)
        {
            std::cout << " " << std::endl;
            std::cout << "Your selection: Stone" << " | " << "Computer: Stone " << std::endl;
            std::cout << "Draw !" << std::endl;
        }
        else if (selection == 3 && selection_computer == 2)
        {
            std::cout << " " << std::endl;
            std::cout << "Your selection: Paper" << " | " << "Computer: Stone " << std::endl;
            std::cout << "You win!" << std::endl;
        }
        else if (selection == 3 && selection_computer == 1)
        {
            std::cout << " " << std::endl;
            std::cout << "Your selection:: Paper" << " | " << "Computer: Scissors " << std::endl;
            std::cout << "You lost!" << std::endl;
        }
        else if (selection == 3 && selection_computer == 3)
        {
            std::cout << " " << std::endl;
            std::cout << "Your selection: Paper" << " | " << "Computer: Paper " << std::endl;
            std::cout << "Draw !" << std::endl;
        }
    }

    return selection;
}