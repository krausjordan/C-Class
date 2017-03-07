/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   C.cpp
 * Author: gunter
 * 
 * Created on March 6, 2017, 8:58 PM
 */

#include "C.h"

C::C() {
    this->cData=0;
}

C::C(const C& orig) {
    *this=orig;
}

C::~C() {
}

int C::getC() const{
    return this->cData;
}

void C::setC(int newValue){
    this->cData=newValue;
}