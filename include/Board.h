#include "HitToken.h"
#include "ColorToken.h"


class Board
{
    public:

    Board();
    ~Board();
    void putColor();
    void putMatch();
    bool getWin();

    private:

    ColorToken *colors[4][10];
    HitToken *hits[2][2];
    bool win;

};