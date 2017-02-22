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
    int hit();
    int stay();
    int bet();
    int checkHand();
    //int split_hand();
private:
    Hand hand;
    int money;
    int betAmount;
    //Hand splitHand;
    
};

#endif /* PLAYER_H */

