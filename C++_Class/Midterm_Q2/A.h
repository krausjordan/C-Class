/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   A.h
 * Author: gunter
 *
 * Created on March 6, 2017, 8:57 PM
 */

#ifndef A_H
#define A_H

#include <iostream>
#include "B.h"
#include "C.h"

class A {
public:
    A();
    A(const A& orig);
    virtual ~A();
    int getB() const;
    int getC() const;
    void setB(int newValue);
    void setC(int newValue);
private:
    B* bObj;
    C* cObj;

};

#endif /* A_H */

