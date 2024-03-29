#include "dice.h"

Dice::Dice()
{
}

int Dice::randomNumber(int min, int max)
{
    //qsrand(QDateTime::currentMSecsSinceEpoch());
    return qRound(
                static_cast<double>(
                    qrand() % (max + 1 - min)
                    )
                + static_cast<double>(min)
                );
}

int Dice::roll(int number, int sides, int mod)
{
    int total = 0;
    for (int i = 0; i < number; ++i) {
        total += randomNumber(1, sides);
    }
    total += mod;
    return total;
}


