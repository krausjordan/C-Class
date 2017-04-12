/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ship.h
 * Author: gunter
 *
 * Created on April 4, 2017, 11:46 PM
 */

#ifndef SHIP_H
#define SHIP_H

#include <string>
#include <iostream>
#include "DateTime.h"
using namespace std;

class Ship {
public:
    Ship();
    Ship(unsigned int priority, unsigned int number, string newName, DateTime newDateTime);
    Ship(const Ship& orig);
    virtual ~Ship();
    unsigned int getPriority();
    unsigned int getID();
    string getName();
    DateTime getDateTime();
    void setPriority(unsigned int newPriority);
    void setID(unsigned int newID);
    void setName(string newName);
    friend std::ostream& operator<<(std::ostream& os, const Ship& ship);
private:
    unsigned int cargoPriority;
    unsigned int shipNumber;
    string name;
    DateTime datetime;
    

};

//Order Ships by priority with lowest int value first
class Cmp{
public: bool operator()(Ship &x, Ship &y){
    if(x.getPriority()==y.getPriority()){
        return x.getDateTime()>y.getDateTime();//Who arrived first gets higher priority
    }
    else
        return x.getPriority() > y.getPriority();
}


};

#endif /* SHIP_H */

