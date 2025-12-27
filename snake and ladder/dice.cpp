#include "dice.h"
#include <cstdlib> //for rand and srand
#include <ctime>   //for time
using namespace std;

Dice::Dice(int numOfDice, int sides)
{
    this->numOfDice = numOfDice;
    this->sides = sides;

    srand(static_cast<unsigned int>(time(0)));
    // seed the random num generator using current time
}

int Dice::roll()
{
    int totalSum = 0;
    for (int i = 0; i < numOfDice; i++)
    {
        totalSum += (rand() % sides) + 1; // generate random num between 1 and sides
    }
    return totalSum;
}
