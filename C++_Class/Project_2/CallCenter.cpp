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
    char temp='A';
    for(int i=0;i<numTechs; i++){
        techs.push_back(Technician(this->engine,temp++));
    }
    this->currentTime=0;
    this->totServiceTime=0;
    this->totQueueTime=0;
    this->totNumServiced=0;
    this->totCallersAdded=0;
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

void CallCenter::assignCallerToTech(){
    
}

void CallCenter::checkTechs(){
    cout<<"checking techs"<<endl;
    for (auto iter = techs.begin(); iter != techs.cend(); ++iter){
        //cout<<"a"<<endl;
        (*iter).printStatus();
        if((*iter).updateTech(currentTime)){//Update tech and see if free
            cout<<"b"<<callQueue.empty()<<endl;
            if(!callQueue.empty()){ //If tech is free and callers are waiting then assign a caller
                cout<<"c"<<endl;
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



void CallCenter::printCallList(){
    
    priority_queue<Caller, vector<Caller>, Cmp> temp=this->callQueue;
    
    //Print out ship queue and empty list
    while( !temp.empty()){
        cout<< temp.top() << endl;
        temp.pop();
    }
    
    

}


//Overrides outstream operator
std::ostream& operator<<(std::ostream& os, const Caller& caller){
    os<<"Caller: "<<caller.getArrivalTime()<< "   "<<caller.getSubscriptionStatus();
    return os;
}


int CallCenter::getTotNumServiced(){
    return totNumServiced;
}


double CallCenter::getAvgQueueTime(){
    return (totQueueTime/totNumServiced);
}

double CallCenter::getAvgWaitTime(){
    return ((totQueueTime+totServiceTime)/totNumServiced);
}


double CallCenter::getAvgServiceTime(){
    return (totServiceTime/totNumServiced);
}

int CallCenter::getCallQueueLength(){
    return callQueue.size();
}