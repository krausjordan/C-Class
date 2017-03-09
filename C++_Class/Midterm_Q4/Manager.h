/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Manager.h
 * Author: gunter
 *
 * Created on March 8, 2017, 7:36 PM
 */

#ifndef MANAGER_H
#define MANAGER_H

#include "Listener.h"
#include <iostream>
using namespace std;

class Manager : public Listener{
public:
    Manager();
    Manager(const Manager& orig);
    virtual ~Manager();
    void update(int id, float currentBalance);
private:

};

#endif /* MANAGER_H */

