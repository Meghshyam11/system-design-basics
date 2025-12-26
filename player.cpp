#include "player.h"
using namespace std;


Player::Player(string name){
    this->name=name;
    this->position=0; // Initial position set to 0
}

string Player::getName(){
    return name;

}

int Player::getPosition(){
    return position;
}

void Player::setPosition(int newPosition){
    position=newPosition;
}

