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
    MyArray array2;
    if(true){
        MyArray array1= MyArray(length);
        for(int i=0;i<length;i++){
            array1.set_item(i,i+2);
        }
        array1.print_array();
        array2=array1;
        array2.set_item(5,0);
        array1.print_array();
    }
    array2.print_array();
        
    return 0;
}

