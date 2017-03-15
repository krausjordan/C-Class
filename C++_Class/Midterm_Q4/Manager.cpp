/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Manager.cpp
 * Author: gunter
 * 
 * Created on March 8, 2017, 7:36 PM
 */

#include "Manager.h"

Manager::Manager() {
}

Manager::Manager(const Manager& orig) {
    *this=orig;
}

Manager::~Manager() {
}

// Update function is called when ATM object is below threshold. This realizes Listener's Update function
void Manager::update(int id, float currentBalance){
    cout<<"Manager has been updated that ATM "<<id<<" has a balance of $"<<currentBalance<<" and needs to be replenished"<<endl; 
}

