/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.cpp
 * Author: gunter
 * 
 * Created on February 7, 2017, 11:40 AM
 */

#include "Date.h"
#include <stdlib.h>
#include <stdio.h>
#include <climits>
#include <iostream>

Date::Date() {
    
}

Date::Date(const Date& orig) {
    *this=orig;
}

Date::~Date() {
}

Date::Date(int month, int day, int year){
    this->month=month;
    this->day=day;
    this->year=year;
}

int Date::get_Day(){
    return this->day;
}

int Date::get_Month(){
    return this->month;
}

int Date::get_Year(){
    return this->year;
}

int Date::set_Date(int new_month, int new_day, int new_year){
    this->month=new_month;
    this->day=new_day;
    this->year=new_year;
}

int Date::set_Day(int new_day){
    if(new_day>0 && new_day<32){
        this->day=new_day;
    }
    else{ return -1;}
}

int Date::set_Month(int new_month){
    if(new_month>0 && new_month<13){
        this->month=new_month;
    }
    else{return -1;}
}

int Date::set_Year(int new_year){
    year=new_year;
    
}

int Date::print_Date(){  
    std::cout<<this->month<<"/"<<this->day<<"/"<<this->year<<std::endl;
    return 0;
}

std::string Date::date_to_string(){
    std::string date="";
    date.append((std::to_string)(this->get_Month()));
    date.append("/");
    date.append((std::to_string)(this->get_Day()));
    date.append("/");
    date.append((std::to_string)(this->get_Year()));
    
    return date;
}

std::ostream& operator<<(std::ostream& os, const Date& date){
    
    os<<date.month<<"/"<<date.day<<"/"<<date.year;
    return os;
}

std::istream& operator>>(std::istream& is, Date& date){
    
    int newMonth, newDay, newYear;
    char ch1, ch2;

    std::cout<<"Enter new date in MM/DD/YYYY format"<<std::endl;
    
    if(is>> newMonth >>ch1 >> newDay >> ch2 >> newYear)
    {
        if(ch1== '/' && ch2=='/'){
            date.set_Date(newMonth, newDay, newYear);
        }
        else{
            std::cout<<"Invalid date format. Date not set."<<std::endl;
        }
    }
    else{
        std::cout<<"Invalid date format. Date not set."<<std::endl;
    }

    return is;
}
