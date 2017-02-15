/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: gunter
 *
 * Created on February 7, 2017, 11:42 AM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"

class Employee {
public:
    Employee();
    Employee(const Employee& orig);
    Employee(int idNum, std::string name, Date hiredate);
    virtual ~Employee();
    int get_ID_Number();
    std::string get_Name();
    Date get_Hire_Date();
private:
    int  idNumber;
    std::string employeeName;
    Date hireDate;
    
};

#endif /* EMPLOYEE_H */

