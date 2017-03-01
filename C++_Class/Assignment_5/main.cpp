/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gunter
 *
 * Created on February 28, 2017, 7:06 PM
 */

#include <cstdlib>
#include "Date.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    
    Date x = Date(2,2,2);
    Date y = Date(1,1,1);
    std::cout<<y<<std::endl;
    
    std::cin>>y;
    
    std::cout<<y<<std::endl;
    
    return 0;
}

