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
#include "State.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    //Make priority queue and ships
    priority_queue<Ship, vector<Ship>, Cmp> port;
    Ship f(3,2322,"jaeger",DateTime(Date(12,25,1911),8,45,00));
    Ship a(1,555,"bob",DateTime(Date(12,25,1911),8,44,00));
    Ship b(2,222,"chris",DateTime(Date(12,25,1911),8,43,00));
    Ship c(10,333,"Jordan",DateTime(Date(12,25,1911),8,45,00));
    Ship d(8,223,"Drys",DateTime(Date(12,25,1911),8,45,00));
    Ship e(8,224,"Grey goose",DateTime(Date(12,25,1911),8,45,01));
    Ship g(8,224,"Black Label",DateTime(Date(12,24,1911),49,44,11));
    
    //Add ships to priority queue
    port.push(e);
    port.push(b);
    port.push(c);
    port.push(d);
    port.push(a);
    port.push(f);
    port.push(g);
    
    //Print out ship queue and empty list
    while( !port.empty()){
        cout<< port.top() << endl;
        port.pop();
    }
    
    
    cout<<endl;
    
    // Make set queue of states and then print them out
    set<State> states;

    states.insert(State("Illinois", "Springfield"));
    states.insert(State("Wisconsin", "Madison"));
    states.insert(State("California", "Sacremento"));
    states.insert(State("New York", "Albany"));
    states.insert(State("Alaska", "Juneau"));

    set<State>::iterator p = states.begin();

    // Print out list of states and capitals   
    for(set<State>::iterator p=states.begin();p!=states.end();p++){
        cout<< p->getName() << "\t" << p->getCapital() << endl;
    }
    
    
    return 0;
}

