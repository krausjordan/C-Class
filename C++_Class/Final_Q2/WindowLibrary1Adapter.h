/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WindowLibrary1Adapter.h
 * Author: krausjn1
 *
 * Created on May 1, 2017, 11:26 PM
 */

#include "Window.h"
#include "WindowLibrary1.h"

#ifndef WINDOWLIBRARY1ADAPTER_H
#define WINDOWLIBRARY1ADAPTER_H

class WindowLibrary1Adapter : public Window{
public:
    void open(){window.openWin();};
    void close(){window.closeWin();};
    void move(){window.moveWin();};
private:
    WindowLibrary1 window;
};
#endif /* WINDOWLIBRARY1ADAPTER_H */

