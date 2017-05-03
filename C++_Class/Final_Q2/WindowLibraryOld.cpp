/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WindowLibraryOld.cpp
 * Author: krausjn1
 * 
 * Created on May 1, 2017, 11:22 PM
 */

#include "WindowLibraryOld.h"

WindowLibraryOld::WindowLibraryOld() {
}

WindowLibraryOld::WindowLibraryOld(const WindowLibraryOld& orig) {
}

WindowLibraryOld::~WindowLibraryOld() {
}

//Prints close output
void WindowLibraryOld::close(){
    cout<<"Original Window Library Close window"<<endl;
}

//Prints open output
void WindowLibraryOld::open(){
    cout<<"Original Window Library Open window"<<endl;
}

//Prints move output
void WindowLibraryOld::move(){
    cout<<"Original Window Library Move window"<<endl;
}