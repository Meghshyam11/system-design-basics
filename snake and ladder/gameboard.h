#ifndef GAMEBOARD_H
#define GAMEBOARD_H
using namespace std;

#include <vector>
#include <map>
#include "jumper.h"

class GameBoard
{
private:
    int size;                   // size of the board
    map<int, Jumper *> jumpers; // map to store jumpers(ladders and snakes)

public:
GameBoard(int size);

void addJumper(int start, int end);//function to add jumpers

int getNextPosition(int currentPosition);//function to check next position after encountering jumper

int getSize();// function to get size of board

};
#endif