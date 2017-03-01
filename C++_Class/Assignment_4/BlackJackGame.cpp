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

//Constructor with dealer and player
BlackJackGame::BlackJackGame(Dealer *dealer, Player *player){
    std::cout<<"Make Game"<<std::endl;
    this->dealer=dealer;
    this->player=player;
    std::cout<<"Done Making Game"<<std::endl;
}


//Returns pointer to dealer
Dealer* BlackJackGame::returnDealer(){
    return dealer;
}

//Returns pointer to player
Player* BlackJackGame::returnPlayer(){
    return player;
}

//Returns pointer to deck
Deck* BlackJackGame::returnDeck(){
    return (*dealer).returnDeck();
}

//Deals 2 cards to the player and dealer
int BlackJackGame::dealHands(){
    (*player).hit(((*(*dealer).returnDeck()).drawCard()));
    (*dealer).hit(((*(*dealer).returnDeck()).drawCard()),false);
    (*player).hit(((*(*dealer).returnDeck()).drawCard()));
    (*dealer).hit(((*(*dealer).returnDeck()).drawCard()),true);
    
    
    return 0;
}

//Removes card from deck and adds to player's hand
int BlackJackGame::playerHit(){
    (*player).hit(((*(*dealer).returnDeck()).drawCard()));
    return (*player).checkHand();
    
}

//Checks if player busted
bool BlackJackGame::checkBust(int handValue){
    if(handValue>21){
        cout<<"You busted"<<endl;
        payOut(0);
        return true;
    }
    return false;
}

//Dealer auto hits until his value is 17
int BlackJackGame::dealerHit(){
    //start by flipping hand face up
    (*(*dealer).returnHand()).flipHand();
    
    //Add cards until total is over 16
    while((*dealer).checkHand()<17){
        (*dealer).hit((*(*dealer).returnDeck()).drawCard(),true);     
    }
    
    (*(*dealer).returnHand()).printHand();
    return (*dealer).checkHand();  
}

//Calculates if player beat the dealer
int BlackJackGame::checkPlayerWin(){
    int dealer_total=(*dealer).checkHand();
    int player_total=(*player).checkHand();
    
    if(dealer_total>21&&player_total<22){//Dealer busts, player doesn't
        return 1;
    }
    else if(dealer_total==player_total){//Push no one wins
        return 2;
    }
    else if(dealer_total<player_total){
        return 1;
    }
    else if(dealer_total>player_total){
        return 0;
    }
    else{
        cout<<"Invalid Score "<<player_total<<" "<<dealer_total<<endl;
        return 3;
    }
}

// Adds or subtracts money from player's bank. prints out game status
int BlackJackGame::payOut(int outcome){
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
    (*(*dealer).returnHand()).clearHand();
    (*(*dealer).returnDeck()).clearDeck();
    (*(*dealer).returnDeck()).make52CardDeck();
    
    return 0;
}