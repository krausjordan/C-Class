/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyArray.h
 * Author: gunter
 *
 * Created on February 14, 2017, 2:56 PM
 */

#ifndef MYARRAY_H
#define MYARRAY_H

#include <iostream>
#include <string.h>

using namespace std;

class MyArray {
public:
    MyArray();
    MyArray(const MyArray& orig);
    virtual ~MyArray();
    MyArray(int sz);
    int get_item(int index);
    int set_item(int index, int value);
    int get_size();
    int print_array();
private:
    int *data;
    int size;
    
};

#endif /* MYARRAY_H */

