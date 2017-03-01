/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Card.cpp
 * Author: gunter
 * 
 * Created on February 21, 2017, 1:31 PM
 */

#include "Card.h"

Card::Card() {
}

Card::Card(const Card& orig) {
    //std::cout<<"Copy constructor"<<std::endl;
    *this=orig;
}

Card::~Card() {
}

Card::Card(int value,Suit suit,bool faceUp,bool ace,bool faceCard,std::string faceValue){
    this->value=value;
    this->suit=suit;
    this->faceUp=faceUp;
    this->ace=ace;
    this->faceCard=faceCard;
    this->faceValue=faceValue;
    
}

//Returns Face Card name
std::string Card::getFaceValue(){
    if(this->isFaceCard())
        return faceValue;
    else
        return std::to_string(this->getValue());
}


//Mutators
int Card::getValue(){
    return value;
}

Suit Card::getSuit(){
    return suit;
}

bool Card::isVisible(){
    return faceUp;
}

bool Card::isFaceCard(){
    return faceCard;
}

bool Card::isAce(){
    return this->ace;
}

//Prints Card
int Card::printCard(){
    if(faceUp){
        std::cout<<printSuit(this->suit)<<"  "<<this->value<<"  "<<this->getFaceValue()<<std::endl;
    }
    else{
        std::cout<<" Face Down Card"<<std::endl;
    }
}

//Prints Suit
std::string Card::printSuit(int suit){
    switch(suit){
        case 0: return "Spades";
        case 1: return "Clubs";
        case 2: return "Diamonds";
        case 3: return "Hearts";
        default: return "No Suit";
                
    }
}

//Sets Card face up
int Card::flipCard(){
    this->faceUp=true;
    return 0;
}


