/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DrawableSounds.h
 * Author: gunter
 *
 * Created on March 7, 2017, 8:12 PM
 */

#ifndef DRAWABLESOUNDS_H
#define DRAWABLESOUNDS_H

#include "Drawable.h"
#include "Sounds.h"

// This interface class inherits from drawable and sounds so that derived objects
//    can polymorphically use both drawable and sounds functions.

class DrawableSounds: public Drawable, public Sounds {
public:
    
private:

};


#endif /* DRAWABLESOUNDS_H */

