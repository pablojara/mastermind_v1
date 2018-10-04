#include <iostream>
#include "include/IO.h"

IO::IO()
{
    std::cout << "IO initialized\n";
}

ColorToken IO::askColor()
{
    char color;
    ColorToken *colorToken = new ColorToken();

    std::cout << "Please, enter a color (R, G, B, Y)\n";

    std::cin >> color;

    colorToken->setColor(color);

    return *colorToken;

}

void IO::printBoard(Board *board)
{

for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            std::cout << board->
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


}
