/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.cpp
 * Author: gunter
 * 
 * Created on February 7, 2017, 11:42 AM
 */

#include "Employee.h"
#include <iostream>

Employee::Employee() {
    idNumber=-1;
    employeeName="No Name";
    hireDate.set_Date(0,0,0);
}
 
Employee::Employee(const Employee& orig) {
}

Employee::~Employee() {
}


Employee::Employee(int idNum, std::string name, Date hiredate) {
    //idNumber:idNum;
    this->idNumber=idNum;
    this->employeeName=name;
    int month=hiredate.get_Month();
    int day=hiredate.get_Day();
    int year=hiredate.get_Year();
    this->hireDate.set_Date(month,day,year);
}
int Employee::get_ID_Number(){
    return this->idNumber;
}
std::string Employee::get_Name(){
    return this->employeeName;
}
Date Employee::get_Hire_Date(){
    Date z=hireDate;
    //std::cout<<z.get_Day()<<"aaaa"<<std::endl;
    return z; // For some reason this only returns garbage, despite this->hireDate having the proper info at this point.
    //return Date(hireDate.get_Month(),hireDate.get_Day(),hireDate.get_Year());
}