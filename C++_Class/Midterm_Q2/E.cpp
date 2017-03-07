/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   E.cpp
 * Author: gunter
 * 
 * Created on March 6, 2017, 8:58 PM
 */

#include "E.h"

E::E() {
    this->eData=0;
}

E::E(const E& orig) {
    *this=orig;
}

E::~E() {
}

void E::setE(int newValue){
    this->eData=newValue;
}

int E::getE() const{
    return this->eData;
}