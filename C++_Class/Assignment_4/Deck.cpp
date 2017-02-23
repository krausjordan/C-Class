/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Deck.cpp
 * Author: gunter
 * 
 * Created on February 21, 2017, 1:31 PM
 */

#include "Deck.h"
#include "BlackJackGame.h"

Deck::Deck() {
    //Makes normal 52 card deck
    std::cout<<"Making normal deck"<<std::endl;
    size=52;
    //deck=new Card[size];
    for(int i=0;i<9;i++){
        Card temp1=Card(i+2,Suit::Spades,false,false);
        deck.push_back(Card(i+2,Suit::Spades,false,false));
        deck.push_back(Card(i+2,Suit::Clubs,false,false));
        deck.push_back(Card(i+2,Suit::Diamonds,false,false));
        deck.push_back(Card(i+2,Suit::Hearts,false,false));              
    }
    for(int i=0;i<4;i++){
        deck.push_back(Card(10,Suit(i),false,false,true,"Jack"));
        deck.push_back(Card(10,Suit(i),false,false,true,"Queen"));
        deck.push_back(Card(10,Suit(i),false,false,true,"King"));
        deck.push_back(Card(11,Suit(i),false,true,true,"Ace"));
    }
    
    //Pick random seed for shuffle
    std::srand(std::time(0));
    
    for(int i=0;i<1;i++){
        this->shuffle();
    }
    //printDeck();
    //Card card = Card(5,Suit(2),false,false);
    //deck.push_back(card);
    //deck.back().printCard();
    //(this->returnCard());
    std::cout<<"Deck is now shuffled"<<std::endl;
}

Deck::Deck(const Deck& orig){
    *this=orig;
}

Deck::~Deck() {
}

Deck::Deck(int size){
    size=size;
    //deck=new Card[size];
}

int Deck::shuffle(){                                      
    std::cout<<"Shuffle Deck"<<std::endl;
    std::random_shuffle(deck.begin(), deck.end());
    //this->printDeck(); 
    return 0;
}

int Deck::printDeck(){
    std::cout<<"Print Deck"<<std::endl;
    for (auto iter = deck.begin(); iter != deck.cend(); ++iter){
        (*iter).printCard();
    }
    std::cout<<"Done Printing Deck"<<std::endl;
    return 0;
}

Card Deck::drawCard(){
    //std::cout<<"Draw Card"<<std::endl;
    Card temp = deck.back();
    deck.pop_back();
    //temp.printCard();
    size=deck.size();
    //std::cout<<"Done Drawing card"<<std::endl;
    return temp;
}

int Deck::getSize(){
    return size;
}