// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>

#include "Deck.h"
#include "Card.h"

using namespace consoleCards;

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

/**
 * Programming Assignment 3
 * @return exit status
*/
int main()
{
    // loop while there's more input
    std::string Input;
    std::getline(std::cin, Input);
    while (Input[0] != 'q')
    {
        // Add your code between this comment
        // and the comment below. You can of
        // course add more space between the
        // comments as needed

        // declare a deck variable
        // DON'T SHUFFLE THE DECK

        Deck Deck1;
        // deal 2 cards each to 4 players (deal properly, dealing
        // the first card to each player before dealing the
        // second card to each player)
        Card Player1 [3];
        Card Player2 [3];
        Card Player3 [3];
        Card Player4 [3];
 
        Player1[0] = Deck1.TakeTopCard();
        Player2[0] = Deck1.TakeTopCard();
        Player3[0] = Deck1.TakeTopCard();
        Player4[0] = Deck1.TakeTopCard();
      
        // deal 1 more card to players 2 and 3


        // flip all the cards over
        Player1[0].FlipOver();
        Player2[0].FlipOver();
        Player3[0].FlipOver();
        Player4[0].FlipOver();




        // print the cards for player 1
        Player1[0].Print();
        Player2[0].Print();
        Player3[0].Print();
        Player4[0].Print();

        // print the cards for player 2
        Player1[1].Print();
        Player2[1].Print();
        Player3[1].Print();
        Player4[1].Print();

        // print the cards for player 3


        // print the cards for player 4


        // Don't add or modify any code below
        // this comment
        std::getline(std::cin, Input);
    }
}
