#include "include/Board.h"
#include <iostream>

Board::Board()
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            ColorToken *cToken = new ColorToken();
            colors[i][j] = cToken;
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            HitToken *hToken = new HitToken();
            hits[i][j] = hToken;
        }
    }
    
    win = false;

}

void Board::setSecretCode(ColorToken *auxSecretCode)
{
    std::cout << auxSecretCode[1].getColor() << std::endl;
    this->secretCode = auxSecretCode;
}

void Board::printSecretCode()  /* TODO: remove from this and move to IO.h */
{
    
    std::cout << "The secret code is: ";

    for(int i = 0; i < 4; i++)
    {
        std::cout << this->secretCode[i].getColor();
    }

    std::cout << std::endl;
}
