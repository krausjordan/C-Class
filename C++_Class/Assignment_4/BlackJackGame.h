/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BlackJackGame.h
 * Author: gunter
 *
 * Created on February 21, 2017, 1:32 PM
 */

#ifndef BLACKJACKGAME_H
#define BLACKJACKGAME_H

#include "Dealer.h"
#include "Player.h"
#include "Deck.h"
//#include "GameInterface.h"

class BlackJackGame {
public:
    BlackJackGame();
    BlackJackGame(const BlackJackGame& orig);
    virtual ~BlackJackGame();
    BlackJackGame(Dealer *dealer, Player *player);
    int Play();
    Player* returnPlayer();
    Dealer* returnDealer();
    Deck* returnDeck();
    int dealHands();
    int playerHit();
    bool checkBust(int handValue);
private:
    Dealer* dealer;
    Player* player;
    //Deck deck;
    //GameInterface interface;
    
};

#endif /* BLACKJACKGAME_H */

