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

ATM::ATM(int newID, float startBalance, float startThreshold){
    this->ID=newID;
    this->balance=startBalance;
    this->threshold=startThreshold;
}

void ATM::setBalance(float newBalance){
    this->balance=newBalance;
}

float ATM::checkBalance(){
    
    if(balance <= threshold){
        std::cout<<"Need to notify listeners"<<std::endl;
        notify(ID,balance);
    }
    return this->balance;
}

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

void ATM::addMoney(float money){
    this->balance += money;
    std::cout<<"$"<<money<<" has been added to ATM "<<this->ID<<std::endl;
    std::cout<<"ATM "<<this->ID<<" has a new balance of $"<<this->balance<<std::endl;
    checkBalance();
}


int ATM::getID(){
    return this->ID;
}

void ATM::setID(int newID){
    this->ID=newID;
}

float ATM::getThreshold(){
    return this->threshold;
}

void ATM::setThreshold(float newThreshold){
    this->threshold=newThreshold;
}