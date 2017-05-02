/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.h
 * Author: krausjn1
 *
 * Created on May 2, 2017, 12:28 AM
 */

#include "Quadrilateral.h"
#include <iostream>
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public Quadrilateral{
public:
    Rectangle();
    Rectangle(const Rectangle& orig);
    virtual ~Rectangle();
    void draw();
    void show();
private:

};

#endif /* RECTANGLE_H */

