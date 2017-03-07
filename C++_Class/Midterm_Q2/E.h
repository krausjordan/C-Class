/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   E.h
 * Author: gunter
 *
 * Created on March 6, 2017, 8:58 PM
 */

#ifndef E_H
#define E_H

class E {
public:
    E();
    E(const E& orig);
    virtual ~E();
    int getE() const;
    void setE(int newValue);
private:
    int eData;
};

#endif /* E_H */

