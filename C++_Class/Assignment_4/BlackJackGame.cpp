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

BlackJackGame::BlackJackGame(Dealer dealer, Player player){
    this->dealer=dealer;
    this->player=player;
    
}

int BlackJackGame::Play(){
    
    return 0;
}
