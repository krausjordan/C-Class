/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   D.h
 * Author: gunter
 *
 * Created on March 6, 2017, 8:58 PM
 */

#ifndef D_H
#define D_H

#include "A.h"
#include "E.h"

class D : public A{
public:
    D();
    D(const D& orig);
    virtual ~D();
    int getE() const;
    void setE(int newValue);
private:
    E* eObj;
};

#endif /* D_H */

