/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jordan Kraus
 *
 * Created on January 30, 2017, 5:01 AM
 */

#include <stdlib.h>
#include <stdio.h>
#include <climits>
#include <iostream>

using namespace std;

// Swaps the pointer arguments if arg1>arg2
int pointer_swap(int *arg1, int *arg2){
    if(*arg1>*arg2){
        int temp=*arg1;
        *arg1=*arg2;
        *arg2=temp;
    }
    return 0;
}

// Swaps the reference arguments if arg1>arg2
int reference_swap(int &arg1, int &arg2){
    if(arg1>arg2){
        int temp=arg1;
        arg1=arg2;
        arg2=temp;
    }
    return 0;
}


// prints climits variable type limits and sizes
int print_climit_values(){
    std::cout<< "Minimum Value of char: CHAR_MIN="<< CHAR_MIN <<std::endl;
    std::cout<< "Maximum Value of char: CHAR_MAX="<< CHAR_MAX <<std::endl;
    std::cout<< "Number of bits in a char: CHAR_BIT="<< CHAR_BIT <<std::endl;
    std::cout<< "size of char: "<<sizeof(char)<< " bytes" << std::endl;
    std::cout<< "Minimum Value of signed char: SCHAR_MIN="<< SCHAR_MIN <<std::endl;
    std::cout<< "Maximum Value of signed char: SCHAR_MAX="<< SCHAR_MAX <<std::endl;
    std::cout<< "Size of unsigned char: "<<sizeof(signed char)<<" bytes" << std::endl;
    std::cout<< "Maximum Value of unsigned char: UCHAR_MAX="<< UCHAR_MAX <<std::endl;
    std::cout<< "Size of signed char: "<<sizeof(unsigned char)<<" bytes" << std::endl;
    std::cout<< "Maximum number of bytes in multibyte character: MB_LEN_MAX="<< MB_LEN_MAX <<std::endl;
    std::cout<< "Minimum Value of short: SHRT_MIN="<< SHRT_MIN <<std::endl;
    std::cout<< "Maximum Value of short: SHRT_MAX="<< SHRT_MAX <<std::endl;
    std::cout<< "Size of short: "<<sizeof(short)<<" bytes" << std::endl;
    std::cout<< "Maximum Value of unsigned short: USHRT_MAX="<< USHRT_MAX <<std::endl;
    std::cout<< "Size of unsigned short:"<< sizeof(unsigned short)<<" bytes" << std::endl;
    std::cout<< "Minimum Value of int: INT_MIN="<< INT_MIN <<std::endl;
    std::cout<< "Maximum Value of int: INT_MAX="<< INT_MAX <<std::endl;
    std::cout<< "Size of int:"<<sizeof(int)<<" bytes" << std::endl;
    std::cout<< "Maximum Value of unsigned int: UINT_MAX="<< UINT_MAX <<std::endl;
    std::cout<< "Minimum Value of long int: LONG_MIN="<< LONG_MIN <<std::endl;
    std::cout<< "Maximum Value of long int: LONG_MAX="<< LONG_MAX <<std::endl;
    std::cout<< "Size of long: "<<sizeof(long)<<" bytes" << std::endl;
    std::cout<< "Maximum Value of unsigned long int: ULONG_MAX="<< ULONG_MAX <<std::endl;
    std::cout<< "Minimum Value of long long int: LLONG_MIN="<< LLONG_MIN <<std::endl;
    std::cout<< "Maximum Value of long long int: LLONG_MAX="<< LLONG_MAX <<std::endl;
    std::cout<< "Maximum Value of unsigned long long int: ULLONG_MAX="<< ULLONG_MAX <<std::endl;
    std::cout<< "Size of long long int: " <<sizeof(long long)<<" bytes" << std::endl;
}

/*
 * Test pointer swap and reference swap. Print climit values.
 */
int main(int argc, char** argv) {
    
    // Verify pointer swap swaps if arg1>arg2
    int arg1= 300;
    int * a = &arg1;
    int arg2=250;
    int * b = &arg2;
    std::cout<< "Before pointer switch, arg1="<< *a<<" and arg2="<<*b<< std::endl;
    pointer_swap(a,b);
    std::cout<< "After pointer switch, arg1="<< *a <<" and arg2="<< *b << std::endl;
    std::cout<<std::endl;
    
    // Verify pointer swap doesn't swap if arg1<arg2
    int arg3= 300;
    int * c = &arg3;
    int arg4=350;
    int * d = &arg4;
    std::cout<< "Before pointer switch, arg3="<< *c<<" and arg4="<<*d<< std::endl;
    pointer_swap(c,d);
    std::cout<< "After pointer switch, arg3="<< *c <<" and arg4="<< *d << std::endl;
    std::cout<<std::endl;
    
    // Verify reference swap swaps if arg1>arg2
    int arg5= 40;
    int & e = arg5;
    int arg6=15;
    int & f = arg6;
    std::cout<< "Before reference switch, arg5="<< e<<" and arg6="<< f<< std::endl;
    reference_swap(e,f);
    std::cout<< "After reference switch, arg5="<< e <<" and arg6="<< f << std::endl;
    std::cout<<std::endl;
    
    // Verify reference swap doesn't swap if arg1<arg2
    int arg7= 100;
    int & g = arg7;
    int arg8=450;
    int & h = arg8;
    std::cout<< "Before reference switch, arg7="<< g<<" and arg8="<< h << std::endl;
    reference_swap(g,h);
    std::cout<< "After reference switch, arg7="<< g <<" and arg8="<< h << std::endl;
    
    // print white space buffer 
    std::cout<<std::endl<<std::endl<<std::endl;
    
    //Call function to print climit values
    print_climit_values();
    
    return (0);
}

