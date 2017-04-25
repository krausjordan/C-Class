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
    void incrementTime(double increment=1);
    double getCurrentTime();
    void checkTechs();
private:
    std::vector<Technician> techs;
    priority_queue<Caller, vector<Caller>, Cmp> port;
    double currentTime;
};

#endif /* CALLCENTER_H */

