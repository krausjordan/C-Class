/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Listener.h
 * Author: gunter
 *
 * Created on March 8, 2017, 7:37 PM
 */

#ifndef LISTENER_H
#define LISTENER_H

#include <list>

class Listener{
public:
    virtual void update(int id, float currentBalance)=0;
};

#endif /* LISTENER_H */

