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
        techs.push_back(Technician(this->engine));
    }
    double currentTime=0;
}

double CallCenter::getCurrentTime(){
    return currentTime;
}


double CallCenter::incrementTime(double increment){
    currentTime+=increment;
    checkTechs();
    return currentTime;
}

void CallCenter::addCaller(Caller newCaller){
    cout<<"Adding New Caller to Call Queue"<<endl;
    callQueue.push(newCaller);
    
    //Check if any techs are free, if so, add caller to them
    for (auto iter = techs.begin(); iter != techs.cend(); ++iter){
        if(!(*iter).checkBusy() && !callQueue.empty()){
            cout<<"FreeTech"<<endl;
            (*iter).changeCaller(callQueue.top());
            callQueue.pop();
        }
    }
    
}

void CallCenter::assignCallerToTech(){
    
}

void CallCenter::checkTechs(){
    cout<<"checking techs"<<endl;
    for (auto iter = techs.begin(); iter != techs.cend(); ++iter){
        cout<<"a"<<endl;
        if((*iter).updateTech(currentTime)){
            cout<<"b"<<!callQueue.empty()<<endl;
            if(!callQueue.empty()){
                cout<<"c"<<endl;
                (*iter).changeCaller(callQueue.top());
                callQueue.pop();
            }
        }
    }
    
}