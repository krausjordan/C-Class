/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Caller.h
 * Author: gunter
 *
 * Created on April 25, 2017, 12:20 AM
 */

#ifndef CALLER_H
#define CALLER_H

class Caller {
public:
    Caller();
    Caller(const Caller& orig);
    virtual ~Caller();
    Caller(bool subscriptionStatus, double newArrivalTime);
    bool getSubscriptionStatus();
    double getArrivalTime();
private:
    bool paidSubscription;
    double arrivalTime;
    
};

//Order Callers by priority with paid service status then arrival time
class Cmp{
public: bool operator()(Caller &x, Caller &y){
    if(x.getSubscriptionStatus() == y.getSubscriptionStatus()){//both have same priority level
        return x.getArrivalTime()< y.getArrivalTime(); // Make judgement on arrival time
    }
    else{//one pays for subscription and one doesn't
        return x.getSubscriptionStatus();
    }
}


};

#endif /* CALLER_H */

