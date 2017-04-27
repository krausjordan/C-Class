/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gunter
 *
 * Created on April 13, 2017, 5:51 PM
 */

#include <cstdlib>
#include <random>
#include <iostream>
#include "CallCenter.h"
#include "Caller.h"
#include "Technician.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Call support center with 3 technicians
    CallCenter support(3);
    
    
    //Generate exponential RVs with average of 25 calls per hour
    default_random_engine e;
    exponential_distribution<> expoRandNums(25);
    vector<Caller> callList;

    double interArrivalTime = 0;
    double arrivalTime = 0;
    int count=0;
    priority_queue<Caller, vector<Caller>, Cmp> callQueue;

    //Generate 1 days worth of callers. Units are minutes. every other caller has a paid subscription
    while(arrivalTime<(24*60))
    {
        double v = 60*expoRandNums(e);
        arrivalTime += v;
        
        cout << "InterArrival Time = " << v << "\tArrivalTime = " << arrivalTime << endl;
        callList.push_back(Caller(count%2, arrivalTime));   
        callQueue.push(Caller(count%2,arrivalTime));
        count++;
    }
    int sizeOfCallList=callList.size();
    cout<<callQueue.top()<<endl;
    

    
    //Walk through one day's worth of callers. Add them to the Queue when current time hits their arrival time
    double currentTime=0;
    while(currentTime<(24.5*60) && !callList.empty()){
        
        //cout<<"increment time: "<<currentTime<<endl;
        currentTime=support.incrementTime(.1);
        cout<<"increment time: "<<currentTime<<endl;
        
        if(currentTime>=(callList.front().getArrivalTime())){
            cout<<callList.size()<<endl;
            support.addCaller(callList.front());
            support.printCallList();

            callList.erase(callList.begin());
        }
        support.printCallList();
    }
    
    cout<<"--------------------------------------------------"<<endl;
    //Print statistics
    cout<<"Total Number of generated Callers: "<<sizeOfCallList<<endl;
    cout<<"Total Number of Callers Serviced: "<<support.getTotNumServiced()<<endl;
    cout<<"Avg Queue wait time:  "<<support.getAvgQueueTime()<<"  minutes"<<endl;
    cout<<"Avg Service wait time:  "<<support.getAvgServiceTime()<<"  minutes"<<endl;
    cout<<"Avg total wait time:  "<<support.getAvgWaitTime()<<"  minutes"<<endl;
    cout<<"Num Callers still waiting: "<<support.getCallQueueLength()<<endl;
    
    support.printTechCounters();

    return 0;
}

