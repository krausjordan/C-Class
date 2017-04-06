/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gunter
 *
 * Created on March 28, 2017, 11:25 PM
 */

#include <cstdlib>
#include "MyArray.h"
#include "Date.h"
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Int array
    cout<<"Int array"<<endl;
    MyArray<int> intarray(5);
    intarray.set_item(0,1);
    intarray.set_item(1,5134);
    intarray.set_item(2,123);
    intarray.set_item(3,4214);
    intarray.set_item(4,3512);
    intarray.print_array();
    
    //Float array
    cout<<"Float array"<<endl;
    MyArray<float> floatarray(4);
    floatarray.set_item(0,123.213);
    floatarray.set_item(1,412.12414);
    floatarray.set_item(2,5315.12);
    floatarray.set_item(3,3838383.33);
    floatarray.print_array();
    
    //String array
    cout<<"String array"<<endl;
    MyArray<string> stringarray(3);
    stringarray.set_item(0,"Hello");
    stringarray.set_item(1,"This is a");
    stringarray.set_item(2,"String array");
    stringarray.print_array();
    
    //Date array
    cout<<"Date array"<<endl;
    MyArray<Date> datearray(4);
    datearray.set_item(0,Date(3,29,2017));
    datearray.set_item(1,Date(4,4,2013));
    datearray.set_item(2,Date(1,2,2123));
    datearray.set_item(3,Date(12,31,1999));
    datearray.print_array();
    
    datearray.set_item(0,Date(0,0,0001));
    datearray.get_item(0).print_Date();
    datearray.print_array();
    
    return 0;
}

