#pragma once
#include "HitToken.h"
#include "ColorToken.h"


class Board
{
    public:

    Board();
    ~Board();
    void setSecretCode(ColorToken secretCode[4]);
    void putColor();
    void putMatch();
    bool getWin();
    void printSecretCode();
    ColorToken *getColors();

    private:

    ColorToken *colors[4][10];
    HitToken *hits[2][2];
    bool win;
    ColorToken *secretCode;

};