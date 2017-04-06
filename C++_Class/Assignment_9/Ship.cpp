/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ship.cpp
 * Author: gunter
 * 
 * Created on April 4, 2017, 11:46 PM
 */

#include "Ship.h"

//No arg constructor
Ship::Ship() {
    this->name="";
    this->shipNumber=0;
    this->cargoPriority=10;
}

//Arg constructor
Ship::Ship(unsigned int priority, unsigned int number, string newName){
    this->name=newName;
    this->shipNumber=number;
    if(priority<1 || priority>10)
        priority=10;
    this->cargoPriority=priority;
}

//Copy constructor
Ship::Ship(const Ship& orig) {
    *this=orig;
}

Ship::~Ship() {
}

//Returns Ship's priority
unsigned int Ship::getPriority(){
    return this->cargoPriority;
}

//Returns Ship's ID number
unsigned int Ship::getID(){
    return this->shipNumber;
}

//Returns Ship's Name
string Ship::getName(){
    return this->name;
}

//Sets Ship's ID
void Ship::setID(unsigned int newID){
    this->shipNumber=newID;
}

//Sets Ship's Name
void Ship::setName(string newName){
    this->name=newName;
}

//Sets Ship's Priority within valid range
void Ship::setPriority(unsigned int newPriority){
    if(newPriority<1 || newPriority>10)
        cout<<"Error Priority out of range"<<endl;
    else
        this->cargoPriority=newPriority;
}

// Override the << operator to print out the ship's info
std::ostream& operator<<(std::ostream& os, const Ship& ship){
    
    os<<"Priority: "<<ship.cargoPriority<<"  Name: "<<ship.name<<"   ID: "<<ship.shipNumber;
    return os;
}