#include "include/Board.h"


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
