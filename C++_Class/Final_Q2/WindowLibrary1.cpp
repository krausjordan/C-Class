/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WindowLibrary1.cpp
 * Author: krausjn1
 * 
 * Created on May 1, 2017, 11:06 PM
 */

#include "WindowLibrary1.h"

WindowLibrary1::WindowLibrary1() {
}

WindowLibrary1::WindowLibrary1(const WindowLibrary1& orig) {
}

WindowLibrary1::~WindowLibrary1() {
}

// Prints library 1 close output
void WindowLibrary1::closeWin(){
    cout<<"New Window Library 1 Close window"<<endl;
}

// Prints library 1 move output
void WindowLibrary1::moveWin(){
    cout<<"New Window Library 1 Move window"<<endl;
}

// Prints library 1 open output
void WindowLibrary1::openWin(){
    cout<<"New Window Library 1 Open window"<<endl;
}
