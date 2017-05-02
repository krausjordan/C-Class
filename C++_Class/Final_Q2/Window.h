/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Window.h
 * Author: krausjn1
 *
 * Created on May 1, 2017, 11:22 PM
 */

#ifndef WINDOW_H
#define WINDOW_H

class Window{
public:
    virtual void open()=0;
    virtual void close()=0;
    virtual void move()=0;
};


#endif /* WINDOW_H */

