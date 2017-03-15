/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Publisher.h
 * Author: gunter
 *
 * Created on March 8, 2017, 7:37 PM
 */

#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <list>
#include "Listener.h"

class Publisher {
public:
    Publisher();
    Publisher(const Publisher& orig);
    virtual ~Publisher();
    void attach(Listener *newListener);
    void detach(Listener *oldListener); 
    void notify(int id, float currentBalance);
private:
    std::list<Listener *> listeners;
};

#endif /* PUBLISHER_H */

