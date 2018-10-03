#include "include/ColorToken.h"

ColorToken::ColorToken()
{
    color = '0';
}

void ColorToken::setColor(char color)
{
    this->color = color;
}

char ColorToken::getColor()
{
    return this->color;


}