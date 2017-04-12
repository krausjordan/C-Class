/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DateTime.h
 * Author: gunter
 *
 * Created on April 12, 2017, 12:43 AM
 */

#ifndef DATETIME_H
#define DATETIME_H

#include "Date.h"

class DateTime {
public:
    DateTime();
    DateTime(const DateTime& orig);
    DateTime(Date newDate, unsigned int newHour, unsigned int newMinute, unsigned int newSecond);
    virtual ~DateTime();
    unsigned int convertToSeconds() const;
    friend std::ostream& operator<<(std::ostream& os, const DateTime& datetime);
    friend bool operator<(const DateTime& datetime1, const DateTime& datetime2);
    friend bool operator>(const DateTime& datetime1, const DateTime& datetime2);
    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;
    Date getDate() const;
private:
    Date date;
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

#endif /* DATETIME_H */

