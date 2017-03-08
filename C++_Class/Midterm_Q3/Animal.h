/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Animal.h
 * Author: gunter
 *
 * Created on March 7, 2017, 7:57 PM
 */

#ifndef ANIMAL_H
#define ANIMAL_H

//#include "Sounds.h"
#include "DrawableSounds.h"
#include <iostream>
#include <string>

class Animal: public DrawableSounds{
public:
    Animal();
    Animal(const Animal& orig);
    virtual ~Animal();
    Animal(std::string newName);
    void playSound();
    void drawObject();
    void rotateObject();
    std::string getName() const;
    void setName(std::string newName);
private:
    std::string name;
};

#endif /* ANIMAL_H */

