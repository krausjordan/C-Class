/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TransactionLogger.cpp
 * Author: gunter
 * 
 * Created on March 8, 2017, 7:36 PM
 */

#include "TransactionLogger.h"

TransactionLogger::TransactionLogger() {
    counter=1;
}

TransactionLogger::TransactionLogger(const TransactionLogger& orig) {
    *this=orig;
}

TransactionLogger::~TransactionLogger() {
}

void TransactionLogger::update(int id, float currentBalance){
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Transaction Logger has been updated"<<endl;
    cout<<"Transaction number #"<<counter++<<": ATM "<<id<<" has a balance of $"<<currentBalance;
    cout<<" at time "<<getCurrentDateTime()<<" and needs to be replenished"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    
}

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
std::string  TransactionLogger::getCurrentDateTime() {
    time_t now = time(0);
    struct tm tstruct;
    char buffer[80];
    tstruct = *localtime(&now);
    strftime(buffer, sizeof(buffer), "%Y-%m-%d.%X", &tstruct);
    return buffer;
}