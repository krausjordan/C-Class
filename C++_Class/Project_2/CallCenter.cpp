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

//CallCenter Arg Constructor. Set all variables to zero
CallCenter::CallCenter(unsigned int numTechs){
    char temp='A';
    for(int i=0;i<numTechs; i++){
        techs.push_back(Technician(temp++));
    }
    this->currentTime=0;
    this->totServiceTime=0;
    this->totQueueTime=0;
    this->totNumServiced=0;
    this->totCallersAdded=0;
}

//Return CallCenter's current time 
double CallCenter::getCurrentTime(){
    return currentTime;
}

// Increment the current time by specified increment. Call checkTechs
double CallCenter::incrementTime(double increment){
    currentTime+=increment;
    checkTechs();
    return currentTime;
}

// Add a new caller to the priority queue. Assign to a free tech if possible
void CallCenter::addCaller(Caller newCaller){
    cout<<"Adding New Caller to Call Queue"<<endl;
    callQueue.push(newCaller);
    printCallList();
    //Check if any techs are free, if so, add caller to them
    for (auto iter = techs.begin(); iter != techs.cend(); ++iter){
        if(!(*iter).checkBusy() && !callQueue.empty()){
            cout<<"FreeTech"<<endl;
            this->totQueueTime+= (this->currentTime-callQueue.top().getArrivalTime());
            this->totServiceTime += (*iter).changeCaller(callQueue.top());
            callQueue.pop();
            this->totNumServiced++;
        }
    }
    totCallersAdded++;;
}

//Print out how many callers each tech has helped
void CallCenter::printTechCounters(){
    for (auto iter = techs.begin(); iter != techs.cend(); ++iter){
        (*iter).getCallerCounter();
    }
}

// Update each tech with the current time and see if they've finished helping a caller. If so, assign them a new caller
void CallCenter::checkTechs(){
    cout<<"checking techs"<<endl;
    for (auto iter = techs.begin(); iter != techs.cend(); ++iter){
        //cout<<"a"<<endl;
        (*iter).printStatus();
        if((*iter).updateTech(currentTime)){//Update tech and see if free
            //cout<<"b"<<callQueue.empty()<<endl;
            if(!callQueue.empty()){ //If tech is free and callers are waiting then assign a caller
                //cout<<"c"<<endl;
                //Add queue time to total
                this->totQueueTime+= (this->currentTime-callQueue.top().getArrivalTime());
                //Add caller to tech and add service time to total
                this->totServiceTime += (*iter).changeCaller(callQueue.top());
                callQueue.pop();
                this->totNumServiced++;
            }
        }
    }
    
}

//Prints out callQueue, doesn't change callQueue
void CallCenter::printCallList() const{
    
    priority_queue<Caller, vector<Caller>, Cmp> temp=this->callQueue;
    cout<<"-----------Current Call Queue --------"<<endl;
    if(temp.empty())
        cout<<"***Empty Call Queue***"<<endl;
    //Print out callQueue queue and empty list
    while( !temp.empty()){
        cout<< temp.top() << endl;
        temp.pop();
    }
    cout<<"--------------------------------------"<<endl;
}

//Overrides outstream operator
std::ostream& operator<<(std::ostream& os, const Caller& caller){
    os<<"Caller: "<<caller.getArrivalTime()<< "   "<<caller.getSubscriptionStatus();
    return os;
}

//Return total number of callers serviced
int CallCenter::getTotNumServiced(){
    return totNumServiced;
}

//Calculate and return average wait time in priority queue for customers
double CallCenter::getAvgQueueTime(){
    return (totQueueTime/totNumServiced);
}

//Calculate and return average total wait time for caller
double CallCenter::getAvgWaitTime(){
    return ((totQueueTime+totServiceTime)/totNumServiced);
}

//Calculate and return average service time for callers
double CallCenter::getAvgServiceTime(){
    return (totServiceTime/totNumServiced);
}

//Return length of callQueue
int CallCenter::getCallQueueLength(){
    return callQueue.size();
}