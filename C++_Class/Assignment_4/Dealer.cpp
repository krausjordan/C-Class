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
}

Dealer::Dealer(const Dealer& orig) {
    *this=orig;
}

Dealer::~Dealer() {
}

int Dealer::checkHand(){
    return hand.checkHand();
}

int Dealer::hit(){
    
    return 0;
}

int Dealer::stay(){
    return 0;
}