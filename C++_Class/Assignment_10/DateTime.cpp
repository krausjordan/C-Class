/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DateTime.cpp
 * Author: gunter
 * 
 * Created on April 12, 2017, 12:43 AM
 */

#include "DateTime.h"

DateTime::DateTime() {
}

DateTime::DateTime(const DateTime& orig) {
    *this=orig;
}

DateTime::~DateTime() {
}

// Arg constructor
DateTime::DateTime(Date newDate, unsigned int newHour, unsigned int newMinute, unsigned int newSecond){
    this->date=newDate;
    this->hour=newHour%24;
    this->minute=newMinute%60;
    this->second=newSecond%60;
}

//Converts time of day to seconds since midnight
unsigned int DateTime::convertToSeconds() const{
    unsigned int totalSeconds=this->second;
    totalSeconds+=60*this->minute;
    totalSeconds+=3600*this->hour;
    return totalSeconds;
}

// Overrides less than operator
bool operator<(const DateTime& datetime1, const DateTime& datetime2){
    if(datetime1.date==datetime2.date){//Dates are same, check time of day
        return ( (datetime1.convertToSeconds())<(datetime2.convertToSeconds()) );
    }
    else{//return if date1 was before date2
        return (datetime1.date<datetime2.date);
    }
}

// Overrides greater than operator
bool operator>(const DateTime& datetime1, const DateTime& datetime2){
    if(datetime1.getDate()==datetime2.getDate()){//Dates are same, check time of day
        return ( (datetime1.convertToSeconds())>(datetime2.convertToSeconds()) );
    }
    else{//return if date1 was after date2
        return (datetime1.getDate()>datetime2.date);
    }
}

//Overrides outstream operator
std::ostream& operator<<(std::ostream& os, const DateTime& datetime){
    os<<datetime.date<<" "<<datetime.hour<<":"<<datetime.minute<<":"<<datetime.second;
    return os;
}

// Returns object's hour
unsigned int DateTime::getHour() const{
    return this->hour;
}

// Returns object's minute
unsigned int DateTime::getMinute() const{
    return this->minute;
}

// Returns object's second
unsigned int DateTime::getSecond() const{
    return this->second;
}

// Returns object's date
Date DateTime::getDate() const{
    return this->date;
}
