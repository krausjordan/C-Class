/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RectangularSolid.h
 * Author: gunter
 *
 * Created on March 6, 2017, 8:08 PM
 */

#ifndef RECTANGULARSOLID_H
#define RECTANGULARSOLID_H

class RectangularSolid {
public:
    RectangularSolid();
    RectangularSolid(const RectangularSolid& orig);
    virtual ~RectangularSolid();
    RectangularSolid(float newWidth, float newHeight, float newLength);
    float getWidth() const;
    float getHeight() const ;
    float getLength() const ;
    int setWidth(float newWidth);
    int setHeight(float newHeight);
    int setLength(float newLength);
    float getSurfaceArea() const ;
    float getVolume() const;
private:
    float width;
    float height;
    float length;
};

#endif /* RECTANGULARSOLID_H */

