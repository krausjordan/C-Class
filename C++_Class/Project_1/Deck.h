/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Deck.h
 * Author: gunter
 *
 * Created on February 21, 2017, 1:31 PM
 */

#ifndef DECK_H
#define DECK_H

#define  MAX_SUITS 4
#define  MAX_CARDS_IN_SUIT 13

#include "Card.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;


class Deck {
public:
    Deck();
    Deck(const Deck& orig);
    virtual ~Deck();
    Deck(int size);
    int shuffle();
    Card drawCard();
    int printDeck();
    int getSize();
    int make52CardDeck();
    int clearDeck();
    int makeBiasedDeck();
private:
    std::vector<Card> deck;
    int size;
    
};

#endif /* DECK_H */

