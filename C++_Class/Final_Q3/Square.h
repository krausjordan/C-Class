/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.h
 * Author: krausjn1
 *
 * Created on May 2, 2017, 12:28 AM
 */

#include "Quadrilateral.h"
#include <iostream>
using namespace std;

#ifndef SQUARE_H
#define SQUARE_H

class Square : public Quadrilateral {
public:
    Square();
    Square(const Square& orig);
    virtual ~Square();
    void draw();
    void show();
private:

};

#endif /* SQUARE_H */

