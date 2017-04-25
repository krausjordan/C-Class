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

Technician::Technician() {
}

Technician::Technician(const Technician& orig) {
    *this=orig;
}

Technician::~Technician() {
}

bool Technician::updateTech(){
    return true;
}

double Technician::calcHelpTime(){
    return 0;
}