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

Date::Date(Date& orig) {
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
