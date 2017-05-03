/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WindowLibrary2Adapter.h
 * Author: krausjn1
 *
 * Created on May 1, 2017, 11:26 PM
 */

#include "Window.h"
#include "WindowLibrary2.h"

#ifndef WINDOWLIBRARY2ADAPTER_H
#define WINDOWLIBRARY2ADAPTER_H

class WindowLibrary2Adapter : public Window{
public:
    // Adapter functions that call new window library functions
    void open(){window.winOpen();};
    void close(){window.winClose();};
    void move(){window.winMove();};
private:
    WindowLibrary2 window;
            
};

#endif /* WINDOWLIBRARY2ADAPTER_H */

