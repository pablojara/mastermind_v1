#include <stdlib.h>
#include <iostream>
#include "include/Player.h"

void Player::put(Board *board)
{
    IO *input = new IO();


}

void Player::setSecretCode(Board *board)
{
    IO *input = new IO();
    ColorToken colors[4];

    std::cout << "CodeMaker, please, enter the secret code:\n";

    for(int i = 0; i < 4; i++)
    {
        colors[i] = input->askColor();
    }

    board->setSecretCode(colors);

}

