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
using namespace std;

class Ship {
public:
    Ship();
    Ship(unsigned int priority, unsigned int number, string newName);
    Ship(const Ship& orig);
    virtual ~Ship();
    unsigned int getPriority();
    unsigned int getID();
    string getName();
    void setPriority(unsigned int newPriority);
    void setID(unsigned int newID);
    void setName(string newName);
    friend std::ostream& operator<<(std::ostream& os, const Ship& ship);
private:
    unsigned int cargoPriority;
    unsigned int shipNumber;
    string name;
    

};

//Order Ships by priority with lowest int value first
class Cmp{
public: bool operator()(Ship &x, Ship &y){return x.getPriority() > y.getPriority();}
};

#endif /* SHIP_H */

