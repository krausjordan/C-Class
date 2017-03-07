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

RectangularSolid::RectangularSolid(float newWidth, float newHeight, float newLength){
    this->width=newWidth;
    this->height=newHeight;
    this->length=newLength;
}

float RectangularSolid::getHeight() const {
    return this->height;
}

float RectangularSolid::getLength() const {
    return this->length;
}

float RectangularSolid::getWidth() const {
    return this->width;
}

float RectangularSolid::getSurfaceArea() const {
    float surfArea= 2*(height*width+height*length+width*length);
    return surfArea;
}

int RectangularSolid::setHeight(float newHeight){
    this->height=newHeight;
    return 0;
}

int RectangularSolid::setLength(float newLength){
    this->length=newLength;
    return 0;
}

int RectangularSolid::setWidth(float newWidth){
    this->width=newWidth;
    return 0;
}

float RectangularSolid::getVolume() const {
    return (width*height*length);
}