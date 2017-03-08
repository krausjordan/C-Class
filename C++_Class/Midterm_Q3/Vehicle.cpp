/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vehicle.cpp
 * Author: gunter
 * 
 * Created on March 7, 2017, 8:06 PM
 */

#include "Vehicle.h"
#include "Animal.h"

Vehicle::Vehicle() {
    this->name="";
    this->age=0;
}

Vehicle::Vehicle(const Vehicle& orig) {
    *this=orig;
}

Vehicle::~Vehicle() {
}

//Vehicle constructor with name and age args
Vehicle::Vehicle(std::string newName, int newAge){
    this->name=newName;
    this->age=newAge;
}

//Override the drawObject function to be unique for Vehicle objects
void Vehicle::drawObject(){
    std::cout<<"Drawing a Vehicle"<<std::endl;
}

//Override the playSound function to be unique for Vehicle objects
void Vehicle::playSound(){
    std::cout<<"Vehicle Sound"<<std::endl;
}

//Override the rotateObject function to be unique for Vehicle objects
void Vehicle::rotateObject(){
    std::cout<<"Rotating a Vehicle"<<std::endl;
}

//Return the objects name
std::string Vehicle::getName() const {
    return name;
}

//Return the objects age
int Vehicle::getAge() const{
    return age;
}

//Set the objects name
void Vehicle::setName(std::string newName){
    name=newName;
}

//Set the objects age
void Vehicle::setAge(int newAge){
    age=newAge;
}
                                           