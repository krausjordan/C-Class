/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyArray.cpp
 * Author: gunter
 * 
 * Created on February 14, 2017, 2:56 PM
 */

#include "MyArray.h"

/*MyArray::MyArray() {
    cout<<"Null Constructor"<<endl;
    data= new int[0];
    size=0;
}*/

/*MyArray::MyArray <T>(long sz){ 
    cout<<"Parametarized Constructor"<<endl;
    if(sz<1){
        cout<<"Cannot create an Array with a size less than 1. Setting size to 1"<<endl;
        sz=1;
    }
    arrayElements= new T[sz];
    size= sz;
}*/

/*MyArray::MyArray <T>(const MyArray& orig) {
    cout<<"Copy Constructor"<<endl;
    arrayElements= new T[orig.size];
    size= orig.size;
    memcpy(arrayElements,orig.arrayElements,sizeof(T)*size);
}*/

/*MyArray::~MyArray <T>() {
    std::cout<<"Destructor"<<std::endl;
    if(size>0){
        delete[] arrayElements;
    }
    std::cout<<"Destructor end"<<std::endl;
    //delete(this->size);
}*/

/*T MyArray::get_item(int index){
    return arrayElements[index];
}

int MyArray::set_item(int index,T value){
    arrayElements[index]= value;   
    return 0;
}

long MyArray<T>::get_size(){
    return this->size;
}


int MyArray<T>::print_array(){
    for(int i=0;i<size;i++){
        cout<<this->get_item(i)<<", ";
    }
    cout<<endl;
}*/