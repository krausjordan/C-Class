/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RectangularSolid.cpp
 * Author: gunter
 * 
 * Created on March 6, 2017, 8:08 PM
 */

#include "RectangularSolid.h"

// Null constructor sets all values to zero
RectangularSolid::RectangularSolid() {
    this->width=1.0;
    this->length=1.0;
    this->height=1.0;
}

RectangularSolid::RectangularSolid(const RectangularSolid& orig) {
    *this=orig;
}

RectangularSolid::~RectangularSolid() {
}

// Arg constructor 
RectangularSolid::RectangularSolid(float newWidth, float newHeight, float newLength){
    this->width=newWidth;
    this->height=newHeight;
    this->length=newLength;
}

// Returns the object's height
float RectangularSolid::getHeight() const {
    return this->height;
}

// Returns the objects length
float RectangularSolid::getLength() const {
    return this->length;
}

// Returns the object's width
float RectangularSolid::getWidth() const {
    return this->width;
}

// Returns the object's surface Area
float RectangularSolid::getSurfaceArea() const {
    float surfArea= 2*(height*width+height*length+width*length);
    return surfArea;
}

// Sets the object's height
int RectangularSolid::setHeight(float newHeight){
    if(newHeight>0)
        this->height=newHeight;
    else
        std::cout<<newHeight<<" is not a valid Height"<<std::endl;
    return 0;
}

// Sets the object's length
int RectangularSolid::setLength(float newLength){
    if(newLength>0)
        this->length=newLength;
    else
        std::cout<<newLength<<" is not a valid Length"<<std::endl;
    return 0;
}

// Sets the object's width
int RectangularSolid::setWidth(float newWidth){
    if(newWidth>0)
        this->width=newWidth;
    else
        std::cout<<newWidth<<" is not a valid Height"<<std::endl;
    return 0;
}

// Returns the object's Volume
float RectangularSolid::getVolume() const {
    return (width*height*length);
}