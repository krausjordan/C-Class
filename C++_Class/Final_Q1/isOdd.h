/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   isOdd.h
 * Author: krausjn1
 *
 * Created on May 1, 2017, 7:31 PM
 */
#include "unary_function.h"
#include "Date.h"

#ifndef ISODD_H
#define ISODD_H

class isOdd : public unary_function<int, bool>
{
public:     
    result_type operator()(argument_type i){
        return (result_type)(i%2);
    }
};


#endif /* ISODD_H */

