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

#ifndef TECHNICIAN_H
#define TECHNICIAN_H

class Technician {
public:
    Technician();
    Technician(const Technician& orig);
    virtual ~Technician();
    bool updateTech();
    double calcHelpTime();
    
private:
    double helpTime;
    double endTime;
    double arrivalTime;
    Caller currentCaller;
};

#endif /* TECHNICIAN_H */

