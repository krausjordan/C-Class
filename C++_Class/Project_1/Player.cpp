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
#include "PokerGame.h"

Player::Player() {
    this->money=0;
    this->betAmount=0;
    
}

Player::Player(const Player& orig) {
    *this=orig;
}

Player::~Player() {
}

//Adds card to players hand
int Player::hit(Card newCard){
    newCard.flipCard();
    hand.addCard(newCard);
    return 0;
}

//Not really necessary, handled at game level
int Player::stay(){
    return 0;
}

//Checks if bet is valid and sets betAmount
int Player::bet(int bet){
    if(bet<=this->money && bet>0){
        this->betAmount=bet;
        //this->money-=bet;//Subtract bet from player's money
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

//Adds money to player's bank, sets betAmount to zero
int Player::addMoney(int funds){
    this->money+=funds;
    this->betAmount=0;//reset bet
    return 0;
}

//Returns pointer to hand
Hand* Player::returnHand(){
    return &(this->hand);
}

//Player loses the bet money
int Player::bust(){
    money -= betAmount;
    betAmount=0;
    return money;
}

//Player gains the bet money
int Player::winBet(int multiplier){
    this->money+= ((this->betAmount)*multiplier);
    this->betAmount=0;
    return 0;
}