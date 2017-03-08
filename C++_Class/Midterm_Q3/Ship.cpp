/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ship.cpp
 * Author: gunter
 * 
 * Created on March 7, 2017, 8:36 PM
 */

#include "Ship.h"

//Null constructor for Ship
Ship::Ship() {
    this->length=0;
    this->draft=0;
    this->setName("");
    this->setAge(0);
}

Ship::Ship(const Ship& orig) {
    *this=orig;
}

Ship::~Ship() {
}

//Ship constructor with length, draft, name, and age args
Ship::Ship(float newLength, float newDraft, std::string newName, int newAge){
    this->length=newLength;
    this->draft=newDraft;
    this->setName(newName);
    this->setAge(newAge);
}

// Return the objects length
float Ship::getLength() const{
    return length;
}

//Return the objects draft
float Ship::getDraft() const{
    return draft;
}

// Set the objects length
void Ship::setLength(float newLength){
    length=newLength;
}

// Set the objects Draft
void Ship::setDraft(float newDraft){
    draft=newDraft;
}

//Override the playSound function to be unique for Ship objects
void Ship::playSound(){
    std::cout<<"Ship Sound"<<std::endl;
}

//Override the drawObject function to be unique for Ship objects
void Ship::drawObject(){
    std::cout<<"Drawing a Ship"<<std::endl;
}

//Override the rotateObject function to be unique for Ship objects
void Ship::rotateObject(){
    std::cout<<"Rotating a Ship"<<std::endl;
}