/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: gunter
 *
 * Created on February 21, 2017, 1:32 PM
 */

#ifndef PLAYER_H
#define PLAYER_H

#include "Hand.h"

class Player {
public:
    Player();
    Player(const Player& orig);
    virtual ~Player();
    int hit(Card newCard);
    int stay();
    int bet(int bet);
    int checkHand();
    int checkMoney();
    int addMoney(int funds);
    Hand* returnHand();
    int bust();
    int winBet();
private:
    Hand hand;
    int money;
    int betAmount;
    //Hand splitHand;
    
};

#endif /* PLAYER_H */

