/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gunter
 *
 * Created on March 8, 2017, 7:35 PM
 */

#include <cstdlib>
#include "Listener.h"
#include "ATM.h"
#include "Publisher.h"
#include "Manager.h"
#include "TransactionLogger.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ATM atm1= ATM(1,1000); //concrete publisher
    ATM atm2= ATM(2,500); //concrete publisher
    
    Listener* manager= new Manager();//concrete listener
    Listener* logger= new TransactionLogger();//concrete listener
    
    //Attach Listeners to the ATMs
    atm1.attach(manager);
    atm1.attach(logger);
    atm2.attach(manager);
    atm2.attach(logger);
    
    //Start withdrawing money to trigger a notify
    atm1.subtractMoney(900);
    atm2.subtractMoney(350);
    
    //Add more money to ATM
    atm1.addMoney(300);
    atm2.addMoney(400);
    
    //Withdraw more money to trigger a notify
    atm1.subtractMoney(360);
    atm2.subtractMoney(230);//Doesn't trigger notify
    atm2.subtractMoney(200);
    
    return 0;
}

