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

A::A() {
    bObj=new B();
    cObj=new C();
}

A::A(const A& orig) {
    *this=orig;
}

A::~A() {
    std::cout<<"Calling Destructor"<<std::endl;
    delete bObj;
    delete cObj;
}

int A::getB() const{
    return bObj->getB();
}

int A::getC() const{
    return cObj->getC();
}

void A::setB(int newValue){
    bObj->setB(newValue);
}

void A::setC(int newValue){
    cObj->setC(newValue);
}