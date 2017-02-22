/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.cpp
 * Author: gunter
 * 
 * Created on February 21, 2017, 1:32 PM
 */

#include "Player.h"

Player::Player() {
}

Player::Player(const Player& orig) {
    *this=orig;
}

Player::~Player() {
}

int Player::hit(){
    return 0;
}
int Player::stay(){
    return 0;
}
int Player::bet(){
    return 0;
}
int Player::checkHand(){
    return 0;
}

