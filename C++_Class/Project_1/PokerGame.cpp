/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BlackJackGame.cpp
 * Author: gunter
 * 
 * Created on February 21, 2017, 1:32 PM
 */

#include "PokerGame.h"


PokerGame::PokerGame() {
}

PokerGame::PokerGame(const PokerGame& orig) {
    *this=orig;
}

PokerGame::~PokerGame() {
}

//Constructor with dealer and player
PokerGame::PokerGame(Deck *deck,Player *player){
    std::cout<<"Make Game"<<std::endl;
    this->deck=deck;
    this->player=player;
    std::cout<<"Done Making Game"<<std::endl;
}


//Returns pointer to player
Player* PokerGame::returnPlayer(){
    return player;
}

//Returns pointer to deck
Deck* PokerGame::returnDeck(){
    return deck;
}

//Deals 5 cards to the player and dealer
int PokerGame::dealHands(){
    for(int i=0; i<5;i++){
        (*player).hit(((*deck).drawCard()));
    }
    return 0;
}

//Removes card from deck and adds to player's hand
int PokerGame::playerHit(){
    (*player).hit(((*deck).drawCard()));
    return (*player).checkHand();
    
}

//Checks if player busted
bool PokerGame::checkBust(int handValue){
    if(handValue>21){
        cout<<"You busted"<<endl;
        payOut(0);
        return true;
    }
    return false;
}


//Calculates if player beat the dealer
int PokerGame::checkPlayerWin(){
    int player_total=(*player).checkHand();
    
    
    
    
}

// Adds or subtracts money from player's bank. prints out game status
int PokerGame::payOut(int outcome){
    if(outcome==0){
        (*player).bust();
        cout<<"###################"<<endl;
        cout<<"### You Lose :( ###"<<endl;
        cout<<"###################"<<endl;
    }
    else if(outcome==1){
        (*player).winBet();
        cout<<"##################"<<endl;
        cout<<"### You Win!!! ###"<<endl;
        cout<<"##################"<<endl;
    }
    else if(outcome==2){
        (*player).addMoney(0);
        cout<<"##################"<<endl;
        cout<<"#### You Draw ####"<<endl;
        cout<<"##################"<<endl;
    }
    else{
        cout<<"Error, wrong outcome"<<endl;
    }
    
    //Clear hands and reset Deck
    (*(*player).returnHand()).clearHand();
    (*deck).clearDeck();
    (*deck).make52CardDeck();
    
    return 0;
}

bool PokerGame::checkRoyalFlush(){
    
}