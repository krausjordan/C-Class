/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gunter
 *
 * Created on March 6, 2017, 8:57 PM
 */

#include <cstdlib>
#include "A.h"
#include "D.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    // Create a class A object
    A classAObj;
    // Point to class A object
    A *ptr = &classAObj;
    ptr->setB(1);
    ptr->setC(1);
    // Point to a class D object
    ptr = new D;
    ptr->setB(2);
    ptr->setC(2);
    delete ptr;
    
    return 0;
}

