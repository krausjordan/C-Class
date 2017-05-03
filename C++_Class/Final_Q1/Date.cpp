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

//Copy constructor
Date::Date(const Date& orig) {
    *this=orig;
}

Date::~Date() {
}

//Arg constructor
Date::Date(int month, int day, int year){
    this->month=month;
    this->day=day;
    this->year=year;
}

//Returns day
int Date::get_Day(){
    return this->day;
}

//Returns month
int Date::get_Month(){
    return this->month;
}

//Returns year
int Date::get_Year(){
    return this->year;
}

//Sets new date
int Date::set_Date(int new_month, int new_day, int new_year){
    this->month=new_month;
    this->day=new_day;
    this->year=new_year;
}

//Sets objects day
int Date::set_Day(int new_day){
    if(new_day>0 && new_day<32){
        this->day=new_day;
    }
    else{ return -1;}
}

//Sets objects month
int Date::set_Month(int new_month){
    if(new_month>0 && new_month<13){
        this->month=new_month;
    }
    else{return -1;}
}

//Sets objects year
int Date::set_Year(int new_year){
    year=new_year;
    
}

//Prints out date
int Date::print_Date(){  
    std::cout<<this->month<<"/"<<this->day<<"/"<<this->year<<std::endl;
    return 0;
}

int Date::print_Date(Date date){
    date.print_Date();
    return 0;
}

//Converts date to string
std::string Date::date_to_string(){
    std::string date="";
    date.append((std::to_string)(this->get_Month()));
    date.append("/");
    date.append((std::to_string)(this->get_Day()));
    date.append("/");
    date.append((std::to_string)(this->get_Year()));
    
    return date;
}

// Override the << operator to print out the date in MM/DD/YYYY format
std::ostream& operator<<(std::ostream& os, const Date& date){
    
    os<<date.month<<"/"<<date.day<<"/"<<date.year;
    return os;
}

// Override the >> operator to 
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

// Overrides the == operator
bool operator==(const Date& date1, const Date& date2){
    if(date1.year==date2.year && date1.month==date2.month && date1.day==date2.day)
        return true;
    else
        return false;
            
}

// Overrides the less than operator
bool operator<(const Date& date1, const Date& date2){
    if(date1.year==date2.year) {
        if(date1.month==date2.month){//base comparison on day
            return date1.day<date2.day;
        }
        else//base comparison on month
            return date1.month<date2.month;
    }
    else//base comparison on year
        return date1.year<date2.year;
            
}

// Overrides the greater than operator
bool operator>(const Date& date1, const Date& date2){
    if(date1.year==date2.year) {
        if(date1.month==date2.month){//base comparison on day
            return date1.day>date2.day;
        }
        else//base comparison on month
            return date1.month>date2.month;
    }
    else//base comparison on year
        return date1.year>date2.year;
            
}

// Checks if a date object day is and odd number
bool Date::is_Odd(){
    return ((this->day)%2);
}

// Checks if a date object is odd when passing in a Date
bool Date::is_Odd(Date date){
    return date.is_Odd();
}