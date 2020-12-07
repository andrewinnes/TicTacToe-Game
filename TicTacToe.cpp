// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "function.h"
#include <random>


int main()
{

    std::srand(time(0));
    startGame();
    displayGrid();

    do{

        do {

            playerInput();
            checkPlayerInput(input);
            displayGrid();

        } while (result == 0);

        //printGridString();
        checkGridState();
        drawCheck();
        result = 0;
        
        if (gameEnd == 1) {

            std::cout << "You Win!\n";
            break;

        }

        else if (gameDraw == 1) {

            std::cout << "The game is a draw.\n";
            break;
        }
        
        else {

            std::cout << "Computer picks!\n";

            do {

                computerInput();
                checkComputerInput(compChoice);

            } while (result == 0);

            //printGridString();
            displayGrid();
            checkGridState();
            drawCheck();
            result = 0;

            if (gameEnd == 1) {

                std::cout << "The Computer Wins, you Lose!\n";
                break;
            }

            else if(gameDraw == 1) {

                std::cout << "The game is a draw.\n";
                break;
            }

            else {

                continue;
            }

        }


        

        displayGrid();
        checkGridState();

    } while (gameEnd == 0);

   
}



    

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
