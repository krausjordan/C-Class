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
    int checkPlayerWin();
    int resetGame();
    bool checkRoyalFlush(bool payout=true);
    bool checkFlush(bool payout=true);
    bool checkStraight(bool payout=true);
    bool checkRoyalStraight(bool payout=true);
    bool checkFourOfAKind(bool payout=true);
    bool checkThreeOfAKind(bool payout=true);
    bool checkTwoOfAKind(bool payout=true);
    bool checkFullHouse(bool payout=true);
    bool checkTwoPair(bool payout=true);
    bool checkStraightFlush(bool payout=true);
private:
    Player* player;
    Deck* deck;
    
};

#endif /* POKERGAME_H */

