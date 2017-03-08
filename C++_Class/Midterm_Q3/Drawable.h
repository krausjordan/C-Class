/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Drawable.h
 * Author: gunter
 *
 * Created on March 7, 2017, 7:46 PM
 */

#ifndef DRAWABLE_H
#define DRAWABLE_H

class Drawable {
public:
    virtual void drawObject()=0;
    virtual void rotateObject()=0;
private:

};

#endif /* DRAWABLE_H */

