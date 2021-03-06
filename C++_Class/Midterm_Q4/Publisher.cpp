/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Publisher.cpp
 * Author: gunter
 * 
 * Created on March 8, 2017, 7:37 PM
 */

#include "Publisher.h"

Publisher::Publisher() {
}

Publisher::Publisher(const Publisher& orig) {
    *this=orig;
}

Publisher::~Publisher() {
}

//Adds a listener pointer to the list
void Publisher::attach(Listener* newListener){
    this->listeners.push_back( newListener );
}

//Removes a listener pointer from the list
void Publisher::detach(Listener* oldListener){
    this->listeners.remove( oldListener );
}

//Notifies all listeners of the update
void Publisher::notify(int id, float currentBalance){
    std::list<Listener *>::iterator i;
    for( i = listeners.begin(); i != listeners.end(); i++ ){
        (*i)->update(id,currentBalance);
    }
}

