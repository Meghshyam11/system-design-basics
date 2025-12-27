#ifndef Player_h
#define Player_h

#include <string>
using namespace std;

class Player
{
private:
    string name;
    int position;

public:
    Player(string name);

    // getter and setter funtions

    string getName();
    int getPosition();
    void setPosition(int newPosition);
};

#endif