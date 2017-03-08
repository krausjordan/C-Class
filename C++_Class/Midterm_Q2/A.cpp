/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   A.cpp
 * Author: gunter
 * 
 * Created on March 6, 2017, 8:57 PM
 */

#include "A.h"
#include "B.h"
#include "C.h"


// Null constructor creates a B and C object, which are both entirely owned and
//    controlled within A
A::A() {
    bObj=new B();
    cObj=new C();
}

A::A(const A& orig) {
    *this=orig;
}

// Deletes B and C objects upon destruction
A::~A() {
    std::cout<<"Calling Destructor"<<std::endl;
    delete bObj;
    delete cObj;
}

// Returns the B object's value
int A::getB() const{
    return bObj->getB();
}

// Returns the C object's value
int A::getC() const{
    return cObj->getC();
}

// Sets the B value
void A::setB(int newValue){
    bObj->setB(newValue);
}

// Sets the C values
void A::setC(int newValue){
    cObj->setC(newValue);
}