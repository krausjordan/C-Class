/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gunter
 *
 * Created on February 21, 2017, 1:30 PM
 */

#include <cstdlib>

#include "Deck.h"
#include "Hand.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Deck testDeck= Deck();
    //test.printDeck();
    //Card temp= Card(1,Suit(0),false,true,true,"Ace");
    //temp.printCard();
    //Card temp2= Card(4,Suit(2),false,false);
    //temp2.printCard();
            
    Hand testHand = Hand();
    testHand.addCard(testDeck.drawCard());
    
    
    testHand.printHand();
    cout<<testDeck.getSize()<<endl;
    
    
    return 0;
}

