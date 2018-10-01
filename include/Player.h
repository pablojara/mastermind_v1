#pragma once
#include "ColorToken.h"


class Player
{
    public:

        void put();

    private:
        int wins;
        ColorToken secretCode[4];
};