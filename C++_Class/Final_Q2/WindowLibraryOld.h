/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WindowLibraryOld.h
 * Author: krausjn1
 *
 * Created on May 1, 2017, 11:22 PM
 */
#include <iostream>
#include "Window.h"
using namespace std;

#ifndef WINDOWLIBRARYOLD_H
#define WINDOWLIBRARYOLD_H

class WindowLibraryOld : public Window{
public:
    WindowLibraryOld();
    WindowLibraryOld(const WindowLibraryOld& orig);
    virtual ~WindowLibraryOld();
    void open();
    void close();
    void move();
private:

};

#endif /* WINDOWLIBRARYOLD_H */

