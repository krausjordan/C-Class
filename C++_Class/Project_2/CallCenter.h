/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CallCenter.h
 * Author: gunter
 *
 * Created on April 25, 2017, 1:46 AM
 */


#include "Technician.h"
#include "Caller.h"
#include <vector>
#include <queue>
#include <random>
#include <iostream>

using namespace std;

#ifndef CALLCENTER_H
#define CALLCENTER_H

class CallCenter {
public:
    CallCenter();
    CallCenter(const CallCenter& orig);
    virtual ~CallCenter();
    CallCenter(unsigned int numTechs);
    void addCaller(Caller newCaller);
    double incrementTime(double increment=1);
    double getCurrentTime();
    void checkTechs();
    void assignCallerToTech();
    void printCallList();
    double getAvgWaitTime();
    double getAvgQueueTime();
    int getTotNumServiced();
    double getAvgServiceTime();
    int getCallQueueLength();
    int getNumCallersAdded();
private:
    std::vector<Technician> techs;
    priority_queue<Caller, vector<Caller>, Cmp> callQueue;
    double currentTime;
    default_random_engine* engine;
    int totNumServiced;
    double totServiceTime;
    double totQueueTime;
    int totCallersAdded;
};

#endif /* CALLCENTER_H */

