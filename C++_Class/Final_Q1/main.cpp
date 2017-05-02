/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: krausjn1
 *
 * Created on May 1, 2017, 6:18 PM
 */

#include <cstdlib>
#include "Date.h"
#include <iostream>
#include <vector>
#include <algorithm>
//#include "isOdd.h"
using namespace std;

/*
 * 
 */
void display(vector<Date> &dates){
    //cout<< for_each(dates.begin, dates.end, isOdd())<<endl;
    cout<<"-----Start dates-----"<<endl;
    for_each(dates.begin(),dates.end(),displayDate());
    cout<<"-----End Dates------"<<endl;
}

void count(vector<Date> &dates){
    int counter= count_if(dates.begin(),dates.end(),isOdd());
    cout<<"Number of odd Dates: "<<counter<<endl;
}


int main(int argc, char** argv) {
    
    
    
    Date a(12,12,2012);
    Date b(12,31,2013);
    Date c(10,12,2012);
    Date d(6,18,2013);
    Date e(4,30,2013);
    Date f(9,25,2012);
            
    cout<<f.is_Odd()<<endl;
    
    vector <Date> dates;
    dates.push_back(a);
    dates.push_back(b);
    dates.push_back(c);
    dates.push_back(d);
    dates.push_back(e);
    dates.push_back(f);
    display(dates);
    count(dates);
    
    cout<<endl<<"Sort in descending order"<<endl;
    sort (dates.begin() , dates.end() , Cmp());
    display(dates);
    //std::sort (myvector.begin(), myvector.end(), myobject);

    return 0;
}

