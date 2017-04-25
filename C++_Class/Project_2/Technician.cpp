/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Technician.cpp
 * Author: gunter
 * 
 * Created on April 25, 2017, 1:46 AM
 */

#include "Technician.h"
#include <random>

Technician::Technician() {
}

Technician::Technician(const Technician& orig) {
    *this=orig;
}

Technician::~Technician() {
}

Technician::Technician(default_random_engine* newEngine){
    this->engine=newEngine;
    this->helpTime=0;
    this->busy=false;
}

//check if Current time is past end help time for customer
bool Technician::updateTech(double currentTime){
    this->currentTime=currentTime;
    //Tech is finished with customer, tell CallCenter
    if(currentTime>= (this->endTime)&&helpTime!=0){  
        this->busy=false;
        cout<<"finished with caller "<<currentCaller.getArrivalTime()+this->helpTime<<endl;
        return true;
    }
    else
        return false;
}

double Technician::calcHelpTime(){
    //default_random_engine e;
    // Generate Normal distribution
    vector<unsigned> valuesNormal(10);
    
    normal_distribution<> normalRandNums(8, 2);
    unsigned int helpTime = normalRandNums(*this->engine);
    
    //Update Technician times
    this->helpTime=helpTime;
    this->arrivalTime=this->currentTime;
    this->endTime=this->currentTime+this->helpTime;
    
    return 0;
}


double Technician::changeCaller(Caller newCaller){
    cout<<"Tech Changing caller"<<endl;
    this->currentCaller=newCaller;
    this->busy=true;
    calcHelpTime();
    return this->helpTime;
}


bool Technician::checkBusy(){
    return this->busy;
}