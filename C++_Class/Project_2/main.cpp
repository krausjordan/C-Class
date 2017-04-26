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
    
    /*
    
    // Generate Uniform RVs
    vector<unsigned> values(10);
    default_random_engine e;
    uniform_int_distribution<unsigned> uniformRandNums(0, 9);

    for(int i = 0; i < 300; i++)
    {
            unsigned v = uniformRandNums(e);
            if( v < values.size() )
                    values[v]++; // count how often value appears
    }

    //for( int j = 0; j < values.size(); j++ )
    //    cout << j << ": " << string( values[j], '*' ) << endl;
    
    
    // Generate Normal distribution
    vector<unsigned> valuesNormal(10);

    normal_distribution<> normalRandNums(4, 1.5);

    for(int i = 0; i < 200; i++)
    {
            unsigned v = lround( normalRandNums(e) );	// round			
            if( v < values.size() )
                    valuesNormal[v]++;	// count how often value appears
    }

    //for( int j = 0; j < valuesNormal.size(); j++ )
     //       cout << j << ": " << string( valuesNormal[j], '*' ) << endl;

    */
    
    CallCenter support(3);
    
    
    
    //Generate exponential RVs
    default_random_engine e;
    exponential_distribution<> expoRandNums(25);
    vector<Caller> callList;

    double interArrivalTime = 0;
    double arrivalTime = 0;
    int count=0;
    
    //for(int i = 0; i < 25; i++)
    while(arrivalTime<(24*60))
    {
        double v = 60*expoRandNums(e);
        arrivalTime += v;
        
        cout << "InterArrival Time = " << v << "\tArrivalTime = " << arrivalTime << endl;
        callList.push_back(Caller(count%2, arrivalTime));   
        count++;
    }
    int sizeOfCallList=callList.size();
    
    
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
    cout<<"Total Number of generated Callers: "<<sizeOfCallList<<endl;
    
    
    cout<<"Total Number of Callers Serviced: "<<support.getTotNumServiced()<<endl;
    cout<<"Avg Queue wait time: "<<support.getAvgQueueTime()<<endl;
    cout<<"Avg Service wait time: "<<support.getAvgServiceTime()<<endl;
    cout<<"Avg total wait time: "<<support.getAvgWaitTime()<<endl;
    cout<<"Num Callers still waiting: "<<support.getCallQueueLength()<<endl;
    

    return 0;
}

