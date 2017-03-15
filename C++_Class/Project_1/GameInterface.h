/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GameInterface.h
 * Author: gunter
 *
 * Created on February 21, 2017, 11:36 PM
 */

#ifndef GAMEINTERFACE_H
#define GAMEINTERFACE_H

#include "PokerGame.h"
#include <iostream>
#include <climits>
using namespace std;

class GameInterface {
public:
    GameInterface();
    GameInterface(const GameInterface& orig);
    virtual ~GameInterface();
    GameInterface(PokerGame *aGame);
    int waitForPlayerAction();
    int displayWelcome();
    int displayWinner();
    int displayTable();
    int getBet();
    int getAction();
    int replaceCards();
private:
    PokerGame *aGame;
};

#endif /* GAMEINTERFACE_H */

