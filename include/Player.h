#pragma once
#include "ColorToken.h"
#include "IO.h"
#include "Board.h"



class Player
{
    public:

        void put(Board *board);
        void setSecretCode(Board *board);

    private:
        int wins;
};