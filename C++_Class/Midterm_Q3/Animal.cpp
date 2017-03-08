/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Animal.cpp
 * Author: gunter
 * 
 * Created on March 7, 2017, 7:57 PM
 */

#include "Animal.h"

Animal::Animal() {
}

Animal::Animal(const Animal& orig) {
    *this=orig;
}

Animal::~Animal() {
}

//Animal constructor with name argument
Animal::Animal(std::string newName){
    this->name=newName;
}

//Override the playSound function to be unique for Animal objects
void Animal::playSound(){
    std::cout<<"Animal Sound"<<std::endl;
}

//Override the drawObject function to be unique for Animal objects
void Animal::drawObject(){
    std::cout<<"Drawing an Animal"<<std::endl;
}

//Override the rotateObject function to be unique for Animal objects
void Animal::rotateObject(){
    std::cout<<"Rotating an Animal"<<std::endl;
}

// Return the name of the object
std::string Animal::getName() const {
    return name;
}

// Set the name of the object
void Animal::setName(std::string newName){
    name=newName;
}