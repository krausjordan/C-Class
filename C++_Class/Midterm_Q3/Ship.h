/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ship.h
 * Author: gunter
 *
 * Created on March 7, 2017, 8:36 PM
 */

#ifndef SHIP_H
#define SHIP_H

#include "Vehicle.h"

class Ship : public Vehicle {
public:
    Ship();
    Ship(const Ship& orig);
    Ship(float newLength, float newDraft, std::string newName, int newAge);
    virtual ~Ship();
    float getLength() const;
    float getDraft() const;
    void setLength(float newLength);
    void setDraft(float newDraft);
    void playSound();
    void drawObject();
    void rotateObject();
private:
    float length;
    float draft;
};

#endif /* SHIP_H */

