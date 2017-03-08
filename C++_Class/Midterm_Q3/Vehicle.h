/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vehicle.h
 * Author: gunter
 *
 * Created on March 7, 2017, 8:06 PM
 */

#ifndef VEHICLE_H
#define VEHICLE_H

//#include "Sounds.h"
#include "DrawableSounds.h"
#include <iostream>
#include <string>

class Vehicle : public DrawableSounds{
public:
    Vehicle();
    Vehicle(const Vehicle& orig);
    virtual ~Vehicle();
    Vehicle(std::string newName, int newAge);
    void playSound();
    void drawObject();
    void rotateObject();
    std::string getName() const;
    int getAge() const;
    void setName(std::string newName);
    void setAge(int newAge);
private:
    std::string name;
    int age;
};

#endif /* VEHICLE_H */

