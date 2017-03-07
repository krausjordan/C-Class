/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   C.h
 * Author: gunter
 *
 * Created on March 6, 2017, 8:58 PM
 */

#ifndef C_H
#define C_H

class C {
public:
    C();
    C(const C& orig);
    virtual ~C();
    int getC() const;
    void setC(int newValue);
private:
    int cData;

};

#endif /* C_H */

