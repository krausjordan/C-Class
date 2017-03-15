/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dealer.h
 * Author: gunter
 *
 * Created on February 21, 2017, 1:32 PM
 */

#ifndef DEALER_H
#define DEALER_H

#include "Hand.h"
#include "Deck.h"

class Dealer {
public:
    Dealer();
    Dealer(const Dealer& orig);
    virtual ~Dealer();
    int checkHand();
    int hit(Card newCard, bool flipUp);
    int stay();
    Deck* returnDeck();
    Hand* returnHand();
    int flipHand();
private:
    Hand hand;
    Deck deck;
    
};

#endif /* DEALER_H */

