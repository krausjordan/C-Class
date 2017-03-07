/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   B.h
 * Author: gunter
 *
 * Created on March 6, 2017, 8:58 PM
 */

#ifndef B_H
#define B_H

class B {
public:
    B();
    B(const B& orig);
    virtual ~B();
    int getB() const;
    void setB(int newValue);
private:
    int bData;
};

#endif /* B_H */

