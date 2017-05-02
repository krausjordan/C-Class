/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WindowLibrary2.h
 * Author: krausjn1
 *
 * Created on May 1, 2017, 11:06 PM
 */
#include <iostream>
using namespace std;

#ifndef WINDOWLIBRARY2_H
#define WINDOWLIBRARY2_H

class WindowLibrary2 {
public:
    WindowLibrary2();
    WindowLibrary2(const WindowLibrary2& orig);
    virtual ~WindowLibrary2();
    void winOpen();
    void winClose();
    void winMove();
private:

};

#endif /* WINDOWLIBRARY2_H */

