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

// D constructor. Creates new E object owned entirely by this object
D::D() {
    eObj=new E();
}

D::D(const D& orig) {
    *this=orig;
}

// Deletes the E object upon destruction
D::~D() {
    delete eObj;
}

// Returns the E object's value
int D::getE() const{
    return eObj->getE();
}

// Sets the E object's value
void D::setE(int newValue){
    eObj->setE(newValue);
}
