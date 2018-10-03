#include "include/Mastermind.h"
#include "include/Player.h"
#include "include/Board.h"
#include <iostream>
#include <stdlib.h>


int main()
{
    
    Player *maker = new Player();
    Player *guesser = new Player();
    Board *mainBoard = new Board();

    maker->setSecretCode(mainBoard);
    
    mainBoard->printSecretCode();

   /* maker.put();

    while(board.win())
    {
            guesser.put();
            board.checkCode();
            board.fillHits();

    }*/

    std::cout << "Everything is fine by the moment.\n";



}