/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Technician.h
 * Author: gunter
 *
 * Created on April 25, 2017, 1:46 AM
 */

#include "Caller.h"
#include <random>
#include <vector>
#include <iostream>
using namespace std;

#ifndef TECHNICIAN_H
#define TECHNICIAN_H

class Technician {
public:
    Technician();
    Technician(const Technician& orig);
    virtual ~Technician();
    Technician(default_random_engine* newEngine);
    bool updateTech(double currentTime);
    bool techFree();
    double calcHelpTime();
    double changeCaller(Caller newCaller);
    bool checkBusy();
    
private:
    double helpTime;
    double endTime;
    double arrivalTime;
    double currentTime;
    Caller currentCaller;
    default_random_engine* engine;
    bool busy;
};

#endif /* TECHNICIAN_H */

