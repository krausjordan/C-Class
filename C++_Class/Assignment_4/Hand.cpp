/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hand.cpp
 * Author: gunter
 * 
 * Created on February 21, 2017, 1:31 PM
 */

#include "Hand.h"

Hand::Hand() {
    size=0;
}

Hand::Hand(const Hand& orig) {
    *this=orig;
}

Hand::~Hand() {
}

int Hand::checkHand(){
    int total=0;
    for (auto iter = hand.begin(); iter != hand.cend(); ++iter){
        if((*iter).isVisible()){
            total+=(*iter).getValue();
        }
        else{
            std::cout<<"Count doesn't include facedown card"<<std::endl;
        }
    }
    return 0;
}

int Hand::addCard(Card newCard){
    //size+=1;
    hand.push_back(newCard);
    size=hand.size();
    return 0;
}

int Hand::removeCard(){
    hand.pop_back();
    return 0;
}

int Hand::printHand(){
    std::cout<<"Print Hand"<<std::endl;
    for (auto iter = hand.begin(); iter != hand.cend(); ++iter){
        (*iter).printCard();
    }
    std::cout<<"Done Printing Hand"<<std::endl;
    return 0;
}