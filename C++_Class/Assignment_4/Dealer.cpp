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

//Calculates hand value
int Dealer::checkHand(){
    return hand.checkHand();
}

//Adds new card to hand, sets it's face up status
int Dealer::hit(Card newCard, bool flipUp){
    if(flipUp){
        newCard.flipCard();
    }
    hand.addCard(newCard);
    
    return 0;
}

//Not really used, implemented at game level
int Dealer::stay(){
    return 0;
}

//Returns pointer to deck
Deck* Dealer::returnDeck(){
    return &(this->deck);
}

//Returns pointer to Hand
Hand* Dealer::returnHand(){
    return &(this->hand);
}

//Flips hand face up
int Dealer::flipHand(){
    hand.flipHand();
    return 0;
}