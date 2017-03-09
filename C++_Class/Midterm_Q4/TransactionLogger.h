/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TransactionLogger.h
 * Author: gunter
 *
 * Created on March 8, 2017, 7:36 PM
 */

#ifndef TRANSACTIONLOGGER_H
#define TRANSACTIONLOGGER_H

#include "Listener.h"
#include <iostream>
using namespace std;
#include <time.h>

class TransactionLogger : public Listener{
public:
    TransactionLogger();
    TransactionLogger(const TransactionLogger& orig);
    virtual ~TransactionLogger();
    void update(int id, float currentBalance);
    std::string getCurrentDateTime();
private:
    int counter;
};

#endif /* TRANSACTIONLOGGER_H */

