/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gunter
 *
 * Created on April 4, 2017, 11:36 PM
 */

#include <cstdlib>
#include "Ship.h"
#include <queue>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Make priority queue and ships
    priority_queue<Ship, vector<Ship>, Cmp> port;
    Ship f(3,2322,"jaeger");
    Ship a(1,555,"bob");
    Ship b(2,222,"chris");
    Ship c(10,333,"Jordan");
    Ship d(8,223,"Drys");
    Ship e(8,224,"Grey goose");
    
    //Add ships to priority queue
    port.push(e);
    port.push(b);
    port.push(c);
    port.push(d);
    port.push(a);
    port.push(f);
    
    //Print out ship queue and empty list
    while( !port.empty()){
        cout<< port.top() << endl;
        port.pop();
    }
    
    
    return 0;
}

