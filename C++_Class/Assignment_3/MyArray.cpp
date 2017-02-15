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

MyArray::MyArray() {
    cout<<"Null Constructor"<<endl;
    //data= new int[0];
}

MyArray::MyArray(int sz){ 
    cout<<"Parametarized Constructor"<<endl;
    data= new int[sz];
    size= sz;
}

MyArray::MyArray(const MyArray& orig) {
    cout<<"Copy Constructor"<<endl;
    data= new int[orig.size];
    size= orig.size;
    memcpy(data,orig.data,sizeof(int)*size);
}

MyArray::~MyArray() {
    std::cout<<"Destructor"<<std::endl;
    delete[] data;
    std::cout<<"Destructor end"<<std::endl;
    //delete(this->size);
}

int MyArray::get_item(int index){
    return data[index];
}

int MyArray::set_item(int index,int value){
    data[index]= value;   
    return 0;
}

int MyArray::get_size(){
    return this->size;
}

int MyArray::append(int value){
    //int size= this->get_size();
    //this=MyArray(size+1);
    
    return 0;
}

int MyArray::print_array(){
    for(int i=0;i<size;i++){
        cout<<this->get_item(i)<<", ";
    }
    cout<<endl;
}