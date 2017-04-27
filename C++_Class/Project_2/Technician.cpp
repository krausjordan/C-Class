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

//Arg constructor
Technician::Technician(char newName){
    this->helpTime=0;
    this->busy=false;
    this->name=newName;
    this->callerCounter=0;
}

//check if Current time is past end help time for customer. Returns free/busy status
bool Technician::updateTech(double currentTime){
    this->currentTime=currentTime;
    
    //If Tech is finished with customer, tell CallCenter
    if(currentTime>= (this->endTime)&&helpTime!=0){  
        this->busy=false;
        this->helpTime=0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            helpTime=0;
        cout<<"Tech "<<this->name<<"  finished with caller "<<currentCaller.getArrivalTime()+this->helpTime<<endl;
        return true;
    }
    else
        return false;
}

//Calculate help time for caller using normal distribution with 6 min mean and 2 min std dev.
double Technician::calcHelpTime(){
    // Generate Normal distribution
    normal_distribution<> normalRandNums(6, 2);
    double helpTime = normalRandNums((this->engine));
    //cout<<"helpTime "<<helpTime<<endl;
    
    //Update Technician times
    this->helpTime=helpTime;
    this->arrivalTime=this->currentTime;
    this->endTime=this->currentTime+this->helpTime;
    
    return helpTime;
}

//Adds a new caller to the Tech, resets flags
double Technician::changeCaller(Caller newCaller){
    cout<<"Tech Changing caller"<<endl;
    this->currentCaller=newCaller;
    this->busy=true;
    this->callerCounter++;
    calcHelpTime();
    printStatus();
    return this->helpTime;
}

//Returns the Tech's busy or free status
bool Technician::checkBusy(){
    return this->busy;
}

//Print's what the Tech's current status is
void Technician::printStatus(){
    cout<<"Tech "<<this->name<<"  is ";
    if(this->busy)
        cout<<"busy with "<<this->currentCaller<<endl;
    else
        cout<<"free"<<endl;                
    
}

//Print tech's caller counter and returns the value
int Technician::getCallerCounter(){
    cout<<"Tech "<<this->name<<" helped "<<this->callerCounter<<" Callers"<<endl;
    return this->callerCounter;
}