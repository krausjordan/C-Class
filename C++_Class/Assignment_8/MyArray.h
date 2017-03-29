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

template <class T> class MyArray {
public:
    //MyArray();
    MyArray <T>(const MyArray& orig){cout<<"Copy Constructor"<<endl;
        arrayElements= new T[orig.size];
        size= orig.size;
        memcpy(arrayElements,orig.arrayElements,sizeof(T)*size);
    }
    
    virtual ~MyArray <T>(){
        std::cout<<"Destructor"<<std::endl;
        if(size>0){
            delete[] arrayElements;
        }
        std::cout<<"Destructor end"<<std::endl;
    }
    
    MyArray <T>(long sz){ 
        cout<<"Parametarized Constructor"<<endl;
        if(sz<1){
            cout<<"Cannot create an Array with a size less than 1. Setting size to 1"<<endl;
            sz=1;
        }
        arrayElements= new T[sz];
        size= sz;
    }   
    
    
    T get_item(int index){
        return arrayElements[index];
    }
    
    
    int set_item(int index, T value){
        arrayElements[index]= value;   
        return 0;
    }
    
    
    long get_size(){
        return this->size;
    }
    
    int print_array(){
        for(int i=0;i<size;i++){
            cout<<this->get_item(i)<<", ";
        }
        cout<<endl;
    }
    
private:
    T* arrayElements;		// Array of type T
    long size;		// Size of array

    
};

#endif /* MYARRAY_H */

