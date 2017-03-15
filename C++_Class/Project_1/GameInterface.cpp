/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GameInterface.cpp
 * Author: gunter
 * 
 * Created on February 21, 2017, 11:36 PM
 */

#include "GameInterface.h"

GameInterface::GameInterface() {
}

GameInterface::GameInterface(const GameInterface& orig) {
    *this=orig;
}

GameInterface::~GameInterface() {
}

GameInterface::GameInterface(PokerGame *aGame){
    this->aGame=aGame;
}

// Handle player intput while playing a game. Handles Dealing initial cards and 
//   player/dealer hits. Calls functions to determine game winner
int GameInterface::waitForPlayerAction(){
    cout<<"Dealing starting Hands"<<endl;
    (*aGame).dealHands();
    displayTable();
    bool keepPlaying=true;
    while(keepPlaying){
        cout<<"###################################################################"<<endl;
        cout<<"Choose:  Pick Cards to Replace(1), Keep Hand(2) "<<endl;
        int choice=getAction();
        cout<<"Your choice was: "<<choice<<endl;

        switch(choice){
            case 1:{
                replaceCards();
                //int handValue=(*aGame).playerHit();
                //displayTable();
                //keepPlaying=!(*aGame).checkBust(handValue);//if bust stop playing
                break;}
            case 2:{
                cout<<"Stay"<<endl;
                //(*aGame).dealerHit();
                displayTable();
                int outcome=(*aGame).checkPlayerWin();
                (*aGame).payOut(outcome);
                keepPlaying=false;
                break;
            }
            case 3:{
                cout<<"****Dealer's Hand****"<<endl;
                //(*(*(*aGame).returnDealer()).returnHand()).printHand();
                return 0;
            }
            default:{
                cout<<"Please choose 1, 2, or 3"<<endl;
            }
        }//end while

    }
    
    return 0;
    
}

int GameInterface::replaceCards(){
    cout<<"How many cards do you want to replace (0-5)?:"<<endl;
    
    int choice=getAction();
    while(choice>0){
        cout<<"Pick card index to replace (0-4)?:"<<endl;
        int cardchoice=getAction();
        if(cardchoice<0 && cardchoice>4){
            cout<<"Bad choice. Choose 0 to keep hand."<<endl;
        }
        else{
            bool replaceable= (*(*(*(*aGame).returnPlayer()).returnHand()).returnCard(cardchoice)).getReplaceable();
            if(replaceable){
                //Remove card from hand, add new card to hand, set new card to not replaceable
                Card newCard= (*(*aGame).returnDeck()).drawCard();
                (*(*(*aGame).returnPlayer()).returnHand()).replaceCard(cardchoice,newCard);
                cout<<"Card is not replaceable "<<(*(*(*(*aGame).returnPlayer()).returnHand()).returnCard(cardchoice)).getReplaceable()<<endl;
                choice--;
            }
            else{
                cout<<"This card is not replaceable"<<endl;
            }
        }
    }
}

// Handles Initial interface where player can add money, play a game, or exit
int GameInterface::displayWelcome(){
    cout<<"################################"<<endl;
    cout<<"Welcome to the BlackJack Game"<<endl;
    
    while(true){
        cout<<"-------------------------------------"<<endl;
        cout<<"You currently have $"<<(*(*aGame).returnPlayer()).checkMoney()<<endl;

        cout<<"Choose:  AddMoney(1),  Play(2),  Exit(3)"<<endl;
        int choice=getAction();

        cout<<"Your choice was: "<<choice<<endl;
        
        switch(choice){
            case 1:{
                cout<<"How much money:"<<endl;
                int funds;
                cin>>funds;
                (*(*aGame).returnPlayer()).addMoney(funds);
                break;}
            case 2:{
                if((*(*aGame).returnPlayer()).checkMoney()<=0){
                    cout<<"Please add funds before playing"<<endl;
                    break;
                }
                int x=1;
                while(x!=0){
                    cout<<"Enter Bet(int between 1 and your max money):"<<endl;
                    int bet;
                    cin>>bet;
                    x=(*(*aGame).returnPlayer()).bet(bet);
                }   
                waitForPlayerAction();
                break;
            }
            case 3:{
                cout<<"Thanks for playing"<<endl;
                return 0;
            }
            default:{
                cout<<"Invalid Input. Please choose 1, 2, or 3"<<endl;
            }


        }
    }
    return 0;
}


// Prints out dealers hand and players hand and their values
int GameInterface::displayTable(){
    cout<<"*********************"<<endl;
    cout<<"*****Dealer Hand*****"<<endl;
    //(*(*(*aGame).returnDealer()).returnHand()).printHand();
    //cout<<"*****Dealer Total: "<<((*(*aGame).returnDealer()).checkHand())<<"  *****"<<endl;
    cout<<"*********************"<<endl;
    cout<<"*****Player Hand*****"<<endl;
    (*(*(*aGame).returnPlayer()).returnHand()).printHand();
    //int x=((*(*aGame).returnPlayer()).checkHand());
    cout<<"*****Player Total: "<<((*(*aGame).returnPlayer()).checkHand())<<"  *****"<<endl;
    cout<<"*********************"<<endl;
    
    return 0;
}

// Handled in BlackJackGame
int GameInterface::displayWinner(){
    return 0;
}

// Handles player bet by calling Player's bet function
int GameInterface::getBet(){
    cout<<"Enter Bet:"<<endl;
    int bet=getAction();
    (*(*aGame).returnPlayer()).bet(bet);
    
    return bet;
}

// Handles input and checks for non int values
int GameInterface::getAction(){
    int x;
    while(!(cin >> x)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    }
    //cout<<"returning"<<endl;
    return x;
}