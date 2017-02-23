/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Card.h
 * Author: gunter
 *
 * Created on February 21, 2017, 1:31 PM
 */

#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

enum Suit {Spades, Clubs, Diamonds, Hearts};
//enum Suit {Spades="Spades", Clubs="Clubs", Diamonds="Diamonds", Hearts="Hearts"};


class Card {
public:
    explicit Card();
    Card(const Card& orig);
    virtual ~Card();
    explicit Card(int value,Suit suit, bool faceUp, bool ace, bool faceCard=false, std::string faceValue="");
    int getValue();
    std::string getFaceValue();
    Suit getSuit();
    bool isVisible();
    bool isFaceCard();
    int printCard();
    std::string printSuit(int suit);
    int flipCard();
    bool isAce();
    
private:
    int value;
    std::string faceValue;
    bool faceCard;
    Suit suit;
    bool faceUp;
    bool ace;
    

};

#endif /* CARD_H */

