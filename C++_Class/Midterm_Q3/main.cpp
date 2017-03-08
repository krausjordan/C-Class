/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gunter
 *
 * Created on March 7, 2017, 7:45 PM
 */

#include <cstdlib>
#include "Animal.h"
#include "Vehicle.h"
#include "Ship.h"
#include <list>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Test that animal can change it's name
    Animal testAnimal("Hog");
    testAnimal.setName("Not a Hog");
    cout<<testAnimal.getName()<<endl<<endl;
    
    //Test that ship can change it's name, age, etc.
    Ship testShip(2,1,"testShip",3);
    testShip.setName("Not a test Ship");
    cout<<testShip.getName()<<endl<<endl;
    testShip.setAge(332);
    cout<<testShip.getAge()<<endl<<endl;
    
    
    
    //Create list of objects that can be drawn and make sounds
    int length= 5;
    DrawableSounds* list[length];
    list[0]= new Animal("Cat");
    list[1]= new Vehicle("Moped",2);
    list[2]= new Ship(100.3,15.5,"St. Jane",5);
    list[3]= new Animal("Dog");
    list[4]= new Vehicle("Motorcycle",4);
    
    //Cycle through list and polymorphically use the overridden functions
    for(int i=0;i<length;i++){
        list[i]->drawObject();
        list[i]->rotateObject();
        list[i]->playSound();
        cout<<"------------------"<<endl;
    }
    cout<<"Done printing stuff"<<std::endl;
    
    return 0;
}

