/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ATM.h
 * Author: gunter
 *
 * Created on March 8, 2017, 7:36 PM
 */

#ifndef ATM_H
#define ATM_H

#include "Publisher.h"
#include <iostream>

class ATM: public Publisher {
public:
    ATM();
    ATM(const ATM& orig);
    virtual ~ATM();
    ATM(int newID, float startBalance,float startThreshold=200);
    //void notify();
    float checkBalance();
    int getID() const;
    void setID(int newID);
    void setBalance(float newBalance);
    void addMoney(float money);
    float subtractMoney(float money);
    float getThreshold() const;
    void setThreshold(float newThreshold);
private:
    int ID;
    float balance;
    float threshold;
};

#endif /* ATM_H */

