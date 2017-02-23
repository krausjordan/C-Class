/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dealer.cpp
 * Author: gunter
 * 
 * Created on February 21, 2017, 1:32 PM
 */

#include "Dealer.h"

Dealer::Dealer() {
    this->deck= Deck();
}

Dealer::Dealer(const Dealer& orig) {
    *this=orig;
}

Dealer::~Dealer() {
}

int Dealer::checkHand(){
    return hand.checkHand();
}

int Dealer::hit(Card newCard, bool flipUp){
    if(flipUp){
        newCard.flipCard();
    }
    hand.addCard(newCard);
    
    return 0;
}

int Dealer::stay(){
    return 0;
}

Deck* Dealer::returnDeck(){
    return &(this->deck);
}

Hand Dealer::returnHand(){
    return hand;
}