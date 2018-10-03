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
