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
    int print_Date(Date date);
    std::string date_to_string();
    bool is_Odd();
    bool is_Odd(Date date);
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
    friend std::istream& operator>>(std::istream& is, Date& date);
    friend bool operator==(const Date& date1, const Date& date2);
    friend bool operator<(const Date& date1, const Date& date2);
    friend bool operator>(const Date& date1, const Date& date2);
private:
    int month;
    int day;
    int year;
};

// Unary function template
template <class Argument, class Result>
struct unary_function
{
    typedef Argument argument_type;
    typedef Result result_type;
};

// Unary function to check if a date has an odd day
class isOdd : public unary_function<Date, bool>
{
public:     
    result_type operator()(argument_type i){
        //std::cout<<i<<std::endl;
        return (result_type)((i.get_Day())%2);
    }
};

// Unary Function to display the date
class displayDate : public unary_function<Date, bool>
{
public:     
    result_type operator()(argument_type i){
        std::cout<<i<<std::endl;
        return true;
    }
};

// Compare operator for Dates
class Cmp{
public: bool operator()(const Date &x, const Date &y){
    return x>y;
}
};

#endif /* DATE_H */

