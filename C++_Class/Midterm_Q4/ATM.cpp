/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ATM.cpp
 * Author: gunter
 * 
 * Created on March 8, 2017, 7:36 PM
 */

#include "ATM.h"

ATM::ATM() {
}

ATM::ATM(const ATM& orig) {
    *this=orig;
}

ATM::~ATM() {
}

//ATM constructor that takes ID, balance and threshold args. Threshold default value is 200
ATM::ATM(int newID, float startBalance, float startThreshold){
    this->ID=newID;
    this->balance=startBalance;
    this->threshold=startThreshold;
    std::cout<<"ATM "<<newID<<" starting balance is $"<<startBalance<<std::endl;
}

//Set ATM object's balance
void ATM::setBalance(float newBalance){
    this->balance=newBalance;
}

//Returns ATM object's balance and notifies listeners if balance is below threshold
float ATM::checkBalance(){
    
    if(balance < threshold){
        std::cout<<"Need to notify listeners"<<std::endl;
        notify(ID,balance);
    }
    return this->balance;
}

// Takes money out of ATM if enough money is available. Calls checkbalance at end.
float ATM::subtractMoney(float money){
    if(this->balance>money){
        std::cout<<"ATM "<<this->ID<<" Dispensing $"<<money<<std::endl;
        this->balance-=money;
        std::cout<<"ATM "<<this->ID<<" Current Balance is "<<this->balance<<std::endl;
        checkBalance();
        return money;
    }
    else{
        std::cout<<"ATM "<<this->ID<<" Error not enough money"<<std::endl;
        return 0;
    }
}

//Adds money to ATM object's balance and calls checkBalance
void ATM::addMoney(float money){
    this->balance += money;
    std::cout<<"$"<<money<<" has been added to ATM "<<this->ID<<std::endl;
    std::cout<<"ATM "<<this->ID<<" has a new balance of $"<<this->balance<<std::endl;
    checkBalance();
}

//Returns ATM object's ID
int ATM::getID() const{
    return this->ID;
}

// Sets ATM object's ID
void ATM::setID(int newID){
    this->ID=newID;
}

// Returns ATM object's Threshold
float ATM::getThreshold() const{
    return this->threshold;
}

//Sets ATM object's threshold
void ATM::setThreshold(float newThreshold){
    this->threshold=newThreshold;
}