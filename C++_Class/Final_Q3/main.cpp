/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: krausjn1
 *
 * Created on May 1, 2017, 6:19 PM
 */

#include <cstdlib>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include <list>
#include <typeinfo>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int length=2;
    Shape* shapeList[length];
    
    shapeList[0]= new Square();
    shapeList[1]= new Rectangle();
    
    for(int i=0; i<length;i++){
        dynamic_cast<Quadrilateral*>(shapeList[i])->draw();
        dynamic_cast<Quadrilateral*>(shapeList[i])->show();
    }
    

    return 0;
}

