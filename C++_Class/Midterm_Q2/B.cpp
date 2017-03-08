/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   B.cpp
 * Author: gunter
 * 
 * Created on March 6, 2017, 8:58 PM
 */

#include "B.h"

B::B() {
    this->bData=0;
}

B::B(const B& orig) {
    *this=orig;
}

B::~B() {
}

// Sets the object's B value
void B::setB(int newValue){
    this->bData=newValue;
}

// Returns the object's B value
int B::getB() const{
    return bData;
}
