#include "HitToken.h"
#include "ColorToken.h"


class Board
{
    public:

    Board();
    ~Board();
    void putColor();
    void putMatch();

    private:

    ColorToken colors[4][10];
    HitToken matches[2][2];

};