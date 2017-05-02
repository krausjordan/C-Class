/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WindowLibrary1.h
 * Author: krausjn1
 *
 * Created on May 1, 2017, 11:06 PM
 */
#include <iostream>
using namespace std;

#ifndef WINDOWLIBRARY1_H
#define WINDOWLIBRARY1_H

class WindowLibrary1 {
public:
    WindowLibrary1();
    WindowLibrary1(const WindowLibrary1& orig);
    virtual ~WindowLibrary1();
    void openWin();
    void closeWin();
    void moveWin();
private:

};

#endif /* WINDOWLIBRARY1_H */

