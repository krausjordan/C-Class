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

//Returns the value of a hand. checks for highest value possible with ace.
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
    
    
    //Check if any aces
    int numAces=0;
    if(total>21){
        for (auto iter = hand.begin(); iter != hand.cend(); ++iter){
            if((*iter).isAce()){
                numAces++;
            }
        }
    
        //Check if Aces cause busts. If it does, try different combos of aces being worth 1 rather than 11
        int max = 0;
        int aceCount=numAces;
        if(numAces>0){
            while(aceCount>0){
                int temp = 0;
                int tempAceCount=0;
                for(auto iter = hand.begin(); iter!= hand.cend(); ++iter){
                    if((*iter).isVisible()){
                        if((*iter).isAce()){
                            if((aceCount>tempAceCount)){//Should affect all aces at first, then all minus 1 ace, all the way down to no aces
                                //std::cout<<"less than tempcount"<<std::endl;
                                temp++;
                                tempAceCount++;
                            }
                            else{
                                temp+=(*iter).getValue();
                                //std::cout<<"more than tempcount"<<std::endl;
                            }
                        }
                        else{
                            //std::cout<<"not an ace"<<std::endl;
                            temp+=(*iter).getValue();
                        }
                    }
                }
                //std::cout<<temp<<std::endl;
                if(temp>max && temp<22){
                    std::cout<<temp<<std::endl;
                    max=temp;
                }
                aceCount--;
            }
            
            total=max;
            
        }
    
    }
    return total;
}

//Adds card to hand
int Hand::addCard(Card newCard){
    //size+=1;
    hand.push_back(newCard);
    size=hand.size();
    return 0;
}

//Removes last card in hand
int Hand::removeCard(){
    hand.pop_back();
    size=hand.size();
    return 0;
}

//Prints cards in hand out
int Hand::printHand(){
    //std::cout<<"*******************"<<std::endl;
    for (auto iter = hand.begin(); iter != hand.cend(); ++iter){
        (*iter).printCard();
    }
    //std::cout<<"*******************"<<std::endl;
    return 0;
}

//Sets all cards to face up
int Hand::flipHand(){
    std::cout<<"Flipping Hand"<<std::endl;
    for (auto iter = hand.begin(); iter != hand.cend(); ++iter){
        (*iter).flipCard();
    }
    
    return 0;
}

//Removes all cards from hand
int Hand::clearHand(){
    while(hand.size()!=0){
        removeCard();
    }
    
    return 0;
}

Card* Hand::returnCard(int index){
    return &(hand.at(index));
}

int Hand::replaceCard(int index, Card newCard){
    hand[index]=newCard;
    hand[index].setReplaceable(false);
    return 0;
}