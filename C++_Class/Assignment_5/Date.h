/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.h
 * Author: gunter
 *
 * Created on February 7, 2017, 11:40 AM
 */

#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>
//#include <ostream>

class Date {
public:
    Date();
    Date(const Date& orig);
    virtual ~Date();
    Date(int Month, int Day, int Year);
    int get_Day();
    int get_Month();
    int get_Year();
    int set_Day(int new_day);
    int set_Month(int new_month);
    int set_Year(int new_year);
    int set_Date(int new_month, int new_day, int new_year);
    int print_Date();
    std::string date_to_string();
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
    friend std::istream& operator>>(std::istream& is, Date& date);
private:
    int month;
    int day;
    int year;
};

#endif /* DATE_H */

