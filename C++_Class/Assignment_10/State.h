/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   State.h
 * Author: gunter
 *
 * Created on April 12, 2017, 9:59 PM
 */

#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <string>
using namespace std;
#include <set>

class State{
public:
    State(string stateName) { name=stateName; capital="";}
    State(string stateName, string capitalName) { name=stateName; capital=capitalName;}
    string getName() const { return name;}
    string getCapital() const { return capital;}
    friend bool operator<(const State& state1, const State& state2){
        return state1.getName()< state2.getName();
    }

private:
    string name;
    string capital;
};


#endif /* STATE_H */

