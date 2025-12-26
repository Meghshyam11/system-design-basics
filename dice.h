#ifndef Dice_H
#define Dice_H

class Dice{
    private:
    int numOfDice;
    int sides;

    public:

    Dice(int numOfDice,int sides=6);
    int roll();
};

#endif