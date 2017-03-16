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



//Calculates if player beat the dealer
int PokerGame::checkPlayerWin(){
    int player_total=(*player).checkHand();
    
    bool win=false;
    while(true){
        //Check if royal flush
        win=checkRoyalFlush();
        if(win)
            break;
        
        win=checkStraightFlush();
        if(win)
            break;
        
        win=checkFourOfAKind();
        if(win)
            break;
        
        win=checkFullHouse();
        if(win)
            break;

        win=checkFlush();
        if(win)
            break;
        
        win=checkStraight();
        if(win)
            break;
        
        win=checkRoyalStraight();
        if(win)
            break;
        
        //Check if 3 of a kind
        win=checkThreeOfAKind();
        if(win)
            break;

        win=checkTwoPair();
        if(win)
            break;
        
        win=checkTwoOfAKind();
        
        break;
    }
    
    if(win){
        cout<<"##################"<<endl;
        cout<<"### You Win!!! ###"<<endl;
        cout<<"##################"<<endl;
    }
    else{
        cout<<"###################"<<endl;
        cout<<"### You Lose :( ###"<<endl;
        cout<<"###################"<<endl;
        (*player).bust();
    }
        
    
    return 0;
}

// Resets Deck and hand
int PokerGame::resetGame(){
    //Clear hands and reset Deck
    (*(*player).returnHand()).clearHand();
    (*deck).clearDeck();
    (*deck).make52CardDeck();
    return 0;
}

// Check if player has a royal flush
bool PokerGame::checkRoyalFlush(bool payout){
    bool flush=false;
    bool royalstraight=false;
    
    // check if flush and if royal straight. don't let them pay out.
    flush=checkFlush(false);
    royalstraight=checkRoyalStraight(false);
    
    bool win=false;
    if(flush&&royalstraight){
        win=true;
        if(payout)
            (*player).winBet(250);// pays 250 to 1
    }
    return win;
}

// check if a player has a straight flush
bool PokerGame::checkStraightFlush(bool payout){
    bool flush=false;
    bool straight=false;
    
    // check if flush and if royal straight. don't let them pay out.
    flush=checkFlush(false);
    straight=checkStraight(false);
    
    bool win=false;
    if(flush&&straight){
        win=true;
        if(payout)
            (*player).winBet(50);// pays 50 to 1
    }
    return win;
    
}

// Check if Player has a flush
bool PokerGame::checkFlush(bool payout){
    std::vector<Card> tempHand=(*(*player).returnHand()).returnHand();
    int count[MAX_SUITS]={0,0,0,0};
    // find suit of each card in hand
    for (auto iter = tempHand.begin(); iter != tempHand.cend(); ++iter){
        Suit x= (*iter).getSuit();
        count[x]++;
    }
    
    //check if all 5 cards are same suit
    for(int i=0;i<MAX_SUITS;i++){
        //cout<<"count "<<count[i]<<endl;
        if(count[i]==5){ 
            cout<<"Win Flush"<<endl;
            // Add monies to player. 6 to 1
            if(payout)
                (*player).winBet(6);
            return true;
        }
    }
    
    // Not all 5 cards are the same suit
    return false;
}

//Check if player has two of a kind
bool PokerGame::checkTwoOfAKind(bool payout){
    //Return players hand
    std::vector<Card> tempHand=(*(*player).returnHand()).returnHand();
    int count[MAX_CARDS_IN_SUIT]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    // find value of each card in hand
    for (auto iter = tempHand.begin(); iter != tempHand.cend(); ++iter){
        int x= (*iter).getValue();
        count[x-1]++;//Values don't start at 0 so need to account for that
    }
    
    int pairCount=0;
    //check if there is a pair of jacks or higher
    
    if(count[0]==2)//Aces
        pairCount++;
    if(count[10]==2)//Jacks
        pairCount++;
    if(count[11]==2)//Queens
        pairCount++;
    if(count[12]==2)//Kings
        pairCount++;
    
    bool win=false;
    if(pairCount==1){
        cout<<"Win single pair"<<endl;
        if(payout)
            (*player).winBet(1);//pays 1 to 1 
        win=true;
    }
    
    // Not all 5 cards are the same suit
    return win;
}

//Check if player has two pairs
bool PokerGame::checkTwoPair(bool payout){
    //Return players hand
    std::vector<Card> tempHand=(*(*player).returnHand()).returnHand();
    int count[MAX_CARDS_IN_SUIT]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    // find value of each card in hand
    for (auto iter = tempHand.begin(); iter != tempHand.cend(); ++iter){
        int x= (*iter).getValue();
        count[x-1]++;
    }
    
    int pairCount=0;
    //check if there are two pairs
    for(int i=0;i<MAX_CARDS_IN_SUIT;i++){
        if(count[i]==2){
            pairCount++;
        }
    }
    
    bool win=false;
    if(pairCount==2){
        cout<<"Win two pair"<<endl;
        if(payout)
            (*player).winBet(2);//pays 2 to 1
        win=true;
    }
    
    // Not all 5 cards are the same suit
    return win;
}


bool PokerGame::checkThreeOfAKind(bool payout){
    //Return players hand
    std::vector<Card> tempHand=(*(*player).returnHand()).returnHand();
    int count[MAX_CARDS_IN_SUIT]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    // find value of each card in hand
    for (auto iter = tempHand.begin(); iter != tempHand.cend(); ++iter){
        int x= (*iter).getValue();
        count[x-1]++;//Values don't start at 0 so need to account for that
    }
    
    bool win=false;
    //check if there is 3 of a kind   
    for(int i=0;i<MAX_CARDS_IN_SUIT;i++){
        if(count[i]==3){
            cout<<"Win 3 of a kind"<<endl;
            if(payout)
                (*player).winBet(3);//pays 3 to 1 
            win=true;
        }
    }
    
    return win;
}

bool PokerGame::checkFourOfAKind(bool payout){
    //Return players hand
    std::vector<Card> tempHand=(*(*player).returnHand()).returnHand();
    int count[MAX_CARDS_IN_SUIT]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    // find value of each card in hand
    for (auto iter = tempHand.begin(); iter != tempHand.cend(); ++iter){
        int x= (*iter).getValue();
        count[x-1]++;//Values don't start at 0 so need to account for that
    }
    
    bool win=false;
    //check if there is 3 of a kind   
    for(int i=0;i<MAX_CARDS_IN_SUIT;i++){
        if(count[i]==4){
            cout<<"Win 4 of a kind"<<endl;
            if(payout)
                (*player).winBet(25);//pays 25 to 1 
            win=true;
        }
    }
    
    return win;
}

bool PokerGame::checkFullHouse(bool payout){
    //Return players hand
    std::vector<Card> tempHand=(*(*player).returnHand()).returnHand();
    int count[MAX_CARDS_IN_SUIT]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    // find value of each card in hand
    for (auto iter = tempHand.begin(); iter != tempHand.cend(); ++iter){
        int x= (*iter).getValue();
        count[x-1]++;//Values don't start at 0 so need to account for that
    }
    
    bool win=false;
    //check if there is a 3 of a kind and a 2 of a kind
    bool three=false;
    bool two=false;
    for(int i=0;i<MAX_CARDS_IN_SUIT;i++){
        if(count[i]==3){
            three=true;
        }
        if(count[i]==2){
            two=true;
        }
    }
    
    if(two&&three){
        cout<<"Win Full House"<<endl;
        if(payout)
            (*player).winBet(9);//pays 9 to 1 
        win=true;
    }
    return win;
}

// Checks for all but Royal straight
bool PokerGame::checkStraight(bool payout){
    //Return players hand
    std::vector<Card> tempHand=(*(*player).returnHand()).returnHand();
    int count[MAX_CARDS_IN_SUIT]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    // find value of each card in hand
    for (auto iter = tempHand.begin(); iter != tempHand.cend(); ++iter){
        int x= (*iter).getValue();
        count[x-1]++;//Values don't start at 0 so need to account for that
    }
    
    bool win=false;
    //check if there are 5 cards in a row, but not for royal straight
    
    for(int i=0;i<MAX_CARDS_IN_SUIT-4;i++){ //Checks for all but Royal straight
        if(count[i]==1 && count[i+1]==1 && count[i+2]==1 && count[i+3]==1 && count[i+4]==1){
            cout<<"Win Straight"<<endl;
            if(payout)
                (*player).winBet(4);//pays 4 to 1 
            win=true;
        }
    }
        
    return win;
}

// Checks for  Royal straight
bool PokerGame::checkRoyalStraight(bool payout){
    //Return players hand
    std::vector<Card> tempHand=(*(*player).returnHand()).returnHand();
    int count[MAX_CARDS_IN_SUIT]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    // find value of each card in hand
    for (auto iter = tempHand.begin(); iter != tempHand.cend(); ++iter){
        int x= (*iter).getValue();
        count[x-1]++;//Values don't start at 0 so need to account for that
    }
    
    bool win=false;
    //check if there are 5 cards in a row, but not for royal straight
    
    // if(10,jack,queen,king,ace)
    if(count[9]==1 && count[10]==1 && count[11]==1 && count[12]==1 && count[0]==1){
        cout<<"Win Royal Straight"<<endl;
        if(payout)
            (*player).winBet(4);//pays 4 to 1. same as regular straight
        win=true;
    }
    
    return win;
}


