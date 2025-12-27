#include <bits/stdc++.h>
#include "gameboard.h"
#include "player.h"
#include "dice.h"
using namespace std;

int main(){
    //create configuration for game board
    int boardSize=100;
    int numDice=1;

    GameBoard board(boardSize);
    Dice dice(numDice);

    //add jumpers
    board.addJumper(2,22);
    board.addJumper(8,30);
    board.addJumper(77,20);
    board.addJumper(75,32);

    //create players
    vector<Player> players;
    players.push_back(Player("Alice"));
    players.push_back(Player("Bob"));

    cout<<"Game Loaded! Board size: "<<boardSize<<" with "<<players.size()<<" players." <<endl;

    bool gameWon=false;

    while(!gameWon){
        for (auto &player: players){
            cout << "\n" << player.getName() << "'s turn. Press Enter to roll...";
cin.ignore(); // This waits for the user to press Enter
            int roll=dice.roll();
            int oldPos=player.getPosition();
            int newPos=oldPos+roll;

            //check if it exceeds board size
            if (newPos>boardSize){
                cout<<player.getName()<<" rolled a "<<roll<<" but needs exactly"<<(boardSize-oldPos)<<" to win."<<endl;
                continue;
            }

            //check for jumpers
            newPos=board.getNextPosition(newPos);
            player.setPosition(newPos);

            cout<<player.getName()<<" rolled a "<<roll<<" and has moved from "<<oldPos<<" to "<<newPos<<endl;

            if (newPos==boardSize){
                cout<<player.getName()<<" has won the game!"<<endl;
                gameWon=true;
                break;
            }
        }
    }
    return 0;
}