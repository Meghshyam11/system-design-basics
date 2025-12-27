#include "gameboard.h"

GameBoard::GameBoard(int size){
    this->size=size;
}

void GameBoard::addJumper(int start,int end){
    jumpers[start]=new Jumper(start,end);

}

int GameBoard:: getNextPosition(int currentPosition){
    // Check if the current position square exists in jumper map
    if(jumpers.find(currentPosition)!=jumpers.end()){
       //if found return  'end' point of that jumper
        return jumpers[currentPosition]->end;
    }
    return currentPosition;
    //if no jumper found return current position
}

int GameBoard::getSize(){
    return size;
}