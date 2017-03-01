/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hand.h
 * Author: gunter
 *
 * Created on February 21, 2017, 1:31 PM
 */

#ifndef HAND_H
#define HAND_H

#include "Card.h"
#include <vector>
#include <iostream>

class Hand {
public:
    Hand();
    Hand(const Hand& orig);
    virtual ~Hand();
    int checkHand();
    int addCard(Card newCard);
    int removeCard();
    int printHand();
    int flipHand();
    int clearHand();
private:
    std::vector<Card> hand;
    int size;
    int value;
    
};

#endif /* HAND_H */

