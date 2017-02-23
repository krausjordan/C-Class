/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.cpp
 * Author: gunter
 * 
 * Created on February 21, 2017, 1:32 PM
 */

#include "Player.h"

Player::Player() {
    this->money=0;
    this->betAmount=0;
    
}

Player::Player(const Player& orig) {
    *this=orig;
}

Player::~Player() {
}

int Player::hit(Card newCard){
    newCard.flipCard();
    hand.addCard(newCard);
    return 0;
}
int Player::stay(){
    return 0;
}
int Player::bet(int bet){
    if(bet<=this->money && bet>0){
        this->betAmount=bet;
        return 0;
    }
    else{
        std::cout<<"You bet an invalid amount"<<std::endl;
        return -1;
    }
}
int Player::checkHand(){
    
    return hand.checkHand();
}

int Player::checkMoney(){
    return money;
}

int Player::addMoney(int funds){
    this->money+=funds;
    this->betAmount=0;//reset bet
    return 0;
}

Hand Player::returnHand(){
    return hand;
}