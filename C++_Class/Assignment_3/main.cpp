/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gunter
 *
 * Created on February 14, 2017, 2:56 PM
 */

#include <cstdlib>
#include <iostream>
#include "MyArray.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int length=10;
    
    // Initialize new array and populate it with values
    MyArray array1= MyArray(length);
    for(int i=0;i<length;i++){
        array1.set_item(i,i);
    }
    
    //Print array1, copy array1 into array2, print array2 to prove it copied properly
    cout<<"array1: ";
    array1.print_array();
    MyArray array2(array1);
    cout<<"array2 = copy of array1: ";
    array2.print_array();
    
    //Change array1
    for(int i=0;i<length;i++){
        array1.set_item(i,10-i);
    }
    
    //Print arrays to prove array1 is changed and array2 is not changed, therefore a deep copy was done.
    cout<<endl<<"Changing array1 doesn't change array2:"<<endl;
    cout<<"array1: ";
    array1.print_array();
    cout<<"array2: ";
    array2.print_array();
    cout<<endl;
    
    
    //Check handling of negative size arrays
    MyArray array3=MyArray(-3);
    
    
    return 0;
}

