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

#ifndef POKERGAME_H
#define POKERGAME_H

#include "Player.h"
#include "Deck.h"
//#include "GameInterface.h"

class PokerGame {
public:
    PokerGame();
    PokerGame(const PokerGame& orig);
    virtual ~PokerGame();
    PokerGame(Deck *deck, Player *player);
    Player* returnPlayer();
    Deck* returnDeck();
    int dealHands();
    int playerHit();
    bool checkBust(int handValue);
    int checkPlayerWin();
    int payOut(int outcome);
    bool checkRoyalFlush();
    bool checkFlush();
    bool checkStraight();
    bool checkRoyalStraight();
    bool checkFourOfAKind();
    bool checkThreeOfAKind();
    bool checkTwoOfAKind();
    bool checkFullHouse();
private:
    Player* player;
    Deck* deck;
    
};

#endif /* POKERGAME_H */

