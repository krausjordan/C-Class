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

#include "BlackJackGame.h"


BlackJackGame::BlackJackGame() {
}

BlackJackGame::BlackJackGame(const BlackJackGame& orig) {
    *this=orig;
}

BlackJackGame::~BlackJackGame() {
}

BlackJackGame::BlackJackGame(Dealer *dealer, Player *player){
    std::cout<<"Make Game"<<std::endl;
    this->dealer=dealer;
    this->player=player;
    //this->deck=deck;
    //this->interf
    std::cout<<"Done Making Game"<<std::endl;
}

int BlackJackGame::Play(){
    
    return 0;
}

Dealer* BlackJackGame::returnDealer(){
    return dealer;
}

Player* BlackJackGame::returnPlayer(){
    return player;
}

Deck* BlackJackGame::returnDeck(){
    return (*dealer).returnDeck();
}

int BlackJackGame::dealHands(){
    (*player).hit(((*(*dealer).returnDeck()).drawCard()));
    (*dealer).hit(((*(*dealer).returnDeck()).drawCard()),false);
    (*player).hit(((*(*dealer).returnDeck()).drawCard()));
    (*dealer).hit(((*(*dealer).returnDeck()).drawCard()),true);
    
    
    return 0;
}

int BlackJackGame::playerHit(){
    (*player).hit(((*(*dealer).returnDeck()).drawCard()));
    return (*player).checkHand();
    
}

bool BlackJackGame::checkBust(int handValue){
    if(handValue>21){
        cout<<"You busted"<<endl;
        return true;
    }
    return false;
}