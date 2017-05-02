/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: krausjn1
 *
 * Created on May 1, 2017, 6:18 PM
 */

#include <cstdlib>
#include <iostream>
#include "Window.h"
#include "WindowLibrary1Adapter.h"
#include "WindowLibrary2Adapter.h"
#include "WindowLibraryOld.h"
#include <list>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int length=3;
    Window* windows[length];
    
    windows[0]=new WindowLibraryOld();
    windows[1]=new WindowLibrary1Adapter();
    windows[2]=new WindowLibrary2Adapter();
    
    for(int i=0; i<length; i++){
        windows[i]->open();
        windows[i]->move();
        windows[i]->close();
    }
    
    
    
    
    
    
    return 0;
}

