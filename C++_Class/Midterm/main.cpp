/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gunter
 *
 * Created on March 6, 2017, 8:07 PM
 */

#include <cstdlib>
#include <iostream>
#include "RectangularSolid.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    RectangularSolid square;
    RectangularSolid rect(1.0,2.0,5.0);
    std::cout<<rect.getSurfaceArea()<<std::endl;
    cout<<square.getSurfaceArea()<<std::endl;
    
    cout<<"Change Square size"<<endl;
    square.setHeight(3.0);
    square.setLength(3.0);
    square.setWidth(3.0);
    cout<<"Square's new volume is: "<<endl;
    cout<<square.getVolume()<<endl;
    
    cout<<"Square side"<<endl;
    cout<<square.getHeight()<<endl;
    
    return 0;
}

