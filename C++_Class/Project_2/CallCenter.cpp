/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CallCenter.cpp
 * Author: gunter
 * 
 * Created on April 25, 2017, 1:46 AM
 */

#include "CallCenter.h"

CallCenter::CallCenter() {
}

CallCenter::CallCenter(const CallCenter& orig) {
    *this=orig;
}

CallCenter::~CallCenter() {
}

CallCenter::CallCenter(unsigned int numTechs){
    for(int i=0;i<numTechs; i++){
        techs.push_back(Technician());
    }
    double currentTime=0;
}

double CallCenter::getCurrentTime(){
    return currentTime;
}


void CallCenter::incrementTime(double increment){
    currentTime+=increment;
    checkTechs();
}

void CallCenter::addCaller(Caller newCaller){
    
    
}

void CallCenter::checkTechs(){
    for (auto iter = techs.begin(); iter != techs.cend(); ++iter){
        (*iter).updateTech();
    }
    
}