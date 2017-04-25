/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Caller.cpp
 * Author: gunter
 * 
 * Created on April 25, 2017, 12:22 AM
 */

#include "Caller.h"

Caller::Caller() {
}

Caller::Caller(const Caller& orig) {
    *this=orig;
}

Caller::~Caller() {
}

Caller::Caller(bool subscriptionStatus, double newArrivalTime){
    this->paidSubscription=subscriptionStatus;
    this->arrivalTime=newArrivalTime;
}

double Caller::getArrivalTime(){
    return this->arrivalTime;
}

bool Caller::getSubscriptionStatus(){
    return this->paidSubscription;
}