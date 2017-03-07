/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   D.cpp
 * Author: gunter
 * 
 * Created on March 6, 2017, 8:58 PM
 */

#include "D.h"

D::D() {
    eObj=new E();
}

D::D(const D& orig) {
    *this=orig;
}

D::~D() {
    delete eObj;
}

int D::getE() const{
    return eObj->getE();
}

void D::setE(int newValue){
    eObj->setE(newValue);
}
