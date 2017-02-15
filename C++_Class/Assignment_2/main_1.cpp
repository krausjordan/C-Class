/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main_1.cpp
 * Author: gunter
 *
 * Created on February 7, 2017, 11:36 AM
 */

#include <cstdlib>
#include "Date.h"
#include "Employee.h"
#include <iostream>
#include <chrono>

using namespace std;

float calc_plusplus_time(int operations=10000){
    int counter=0;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<operations;i++){
        counter++;
    }
    auto end = chrono::high_resolution_clock::now();

    auto ns= std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    float exec_time=(ns/(float)operations);
    //cout<<ns<<"ns"<<endl;
    cout<<"ns per ++ operation: "<<exec_time<<"ns"<<endl;
    return exec_time;
}

float calc_plusplus_long_time(int operations=10000){
    int counter=0;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<operations;i++){
        counter= counter+1;
    }
    auto end = chrono::high_resolution_clock::now();

    auto ns= std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    float exec_time=(ns/(float)operations);
    //cout<<ns<<"ns"<<endl;
    cout<<"ns per x=x+1 operation: "<<exec_time<<"ns"<<endl;
    return exec_time;
}

float calc_minusminus_time(int operations=10000){
    int counter=operations;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<operations;i++){
        counter--;
    }
    auto end = chrono::high_resolution_clock::now();

    auto ns= std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    float exec_time=(ns/(float)operations);
    //cout<<ns<<"ns"<<endl;
    cout<<"ns per -- operation: "<<exec_time<<"ns"<<endl;
    return exec_time;
}

float calc_plusequal_time(int operations=10000){
    int counter=0;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<operations;i++){
        counter+=1;
    }
    auto end = chrono::high_resolution_clock::now();

    auto ns= std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    float exec_time=(ns/(float)operations);
    //cout<<ns<<"ns"<<endl;
    cout<<"ns per += operation: "<<exec_time<<"ns"<<endl;
    return exec_time;
}

float calc_minusequal_time(int operations=10000){
    int counter=operations;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<operations;i++){
        counter-=1;
    }
    auto end = chrono::high_resolution_clock::now();

    auto ns= std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    float exec_time=(ns/(float)operations);
    //cout<<ns<<"ns"<<endl;
    cout<<"ns per -= operation: "<<exec_time<<"ns"<<endl;
    return exec_time;
}

float calc_minusequal_long_time(int operations=10000){
    int counter=operations;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<operations;i++){
        counter=counter-1;
    }
    auto end = chrono::high_resolution_clock::now();

    auto ns= std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    float exec_time=(ns/(float)operations);
    //cout<<ns<<"ns"<<endl;
    cout<<"ns per x=x-1 operation: "<<exec_time<<"ns"<<endl;
    return exec_time;
}

float calc_productequal_time(int operations=10000){
    int counter=operations;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<operations;i++){
        counter*=1;
    }
    auto end = chrono::high_resolution_clock::now();

    auto ns= std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    float exec_time=(ns/(float)operations);
    //cout<<ns<<"ns"<<endl;
    cout<<"ns per *= operation: "<<exec_time<<"ns"<<endl;
    return exec_time;
}

float calc_productequal_long_time(int operations=10000){
    int counter=operations;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<operations;i++){
        counter=counter*1;
    }
    auto end = chrono::high_resolution_clock::now();

    auto ns= std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    float exec_time=(ns/(float)operations);
    //cout<<ns<<"ns"<<endl;
    cout<<"ns per x=x*1 operation: "<<exec_time<<"ns"<<endl;
    return exec_time;
}

float calc_divisionequal_time(int operations=10000){
    int counter=operations;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<operations;i++){
        counter/=1;
    }
    auto end = chrono::high_resolution_clock::now();

    auto ns= std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    float exec_time=(ns/(float)operations);
    //cout<<ns<<"ns"<<endl;
    cout<<"ns per /= operation: "<<exec_time<<"ns"<<endl;
    return exec_time;
}

float calc_divisionequal_long_time(int operations=10000){
    int counter=operations;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<operations;i++){
        counter=counter/1;
    }
    auto end = chrono::high_resolution_clock::now();

    auto ns= std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    float exec_time=(ns/(float)operations);
    //cout<<ns<<"ns"<<endl;
    cout<<"ns per x=x/1 operation: "<<exec_time<<"ns"<<endl;
    return exec_time;
}

float calc_percentequal_time(int operations=10000){
    int counter=operations;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<operations;i++){
        counter%=1;
    }
    auto end = chrono::high_resolution_clock::now();

    auto ns= std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    float exec_time=(ns/(float)operations);
    //cout<<ns<<"ns"<<endl;
    cout<<"ns per %= operation: "<<exec_time<<"ns"<<endl;
    return exec_time;
}

float calc_percentequal_long_time(int operations=10000){
    int counter=operations;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<operations;i++){
        counter=counter%1;
    }
    auto end = chrono::high_resolution_clock::now();

    auto ns= std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    float exec_time=(ns/(float)operations);
    //cout<<ns<<"ns"<<endl;
    cout<<"ns per x=x%1 operation: "<<exec_time<<"ns"<<endl;
    return exec_time;
}

int compare_operator_times(int operations=10000){
    calc_plusplus_time(operations);
    calc_plusequal_time(operations);
    calc_plusplus_long_time(operations);
    
    calc_minusminus_time(operations);
    calc_minusequal_time(operations);
    calc_minusequal_long_time(operations);
    
    calc_divisionequal_time(operations);
    calc_divisionequal_long_time(operations);
    
    calc_productequal_time(operations);
    calc_productequal_long_time(operations);
    
    calc_percentequal_time(operations);
    calc_percentequal_long_time(operations);
    
    return 0;
}

/*
 * 
 */
int main(int argc, char** argv) {

    Date x= Date(1,2,1993);
    Date y= Date(6,5,2016);
    
    x.set_Month(12);
    y.set_Day(30);
    std::cout<<"Changed date: "<< x.get_Month()<<std::endl;
    std::cout<<"Changed date: "<< y.get_Day()<<std::endl;
    std::cout<<std::endl<<std::endl;
    
    //Make NFL Employees
    cout<<"NFL Employees"<<endl;
    //Patriots
    Employee Tom = Employee(12,"Tom Brady",Date(8,3,1977));
    Employee Bob = Employee(1,"Robert Craft",Date(6,5,1941));
    Employee Edelman = Employee(11,"Julian Edelman",Date(5,22,1986));
    
    //Steelers
    Employee Ben = Employee(7,"Ben Roethlisberger",Date(3,2,1982));
    Employee Brown = Employee(84,"Antonio Brown",Date(7,10,1988));
    Employee Bell = Employee(26,"LeVeon Bell",Date(2,18,1992));
    
    //Chokers
    Employee Matt = Employee(2,"Matt Ryan",Date(5,7,1985));
    Employee Julio = Employee(11,"Julio Jones",Date(2,8,1989));
    
    //Print out Employee info
    cout<<"Steelers Employees"<<endl;
    cout<<Ben.get_Name()<<" is Number: "<<Ben.get_ID_Number()<<" was Hired: "<<Ben.get_Hire_Date().date_to_string()<<endl;
    cout<<Brown.get_Name()<<" is Number: "<<Brown.get_ID_Number()<<" was Hired: "<<Brown.get_Hire_Date().date_to_string()<<endl;
    cout<<Bell.get_Name()<<" is Number: "<<Bell.get_ID_Number()<<" was Hired: "<<Bell.get_Hire_Date().date_to_string()<<endl;
    
    cout<<"Patriots Employees"<<endl;
    cout<<Tom.get_Name()<<" is Number: "<<Tom.get_ID_Number()<<" was Hired: "<<Tom.get_Hire_Date().date_to_string()<<endl;
    cout<<Bob.get_Name()<<" is Number: "<<Bob.get_ID_Number()<<" was Hired: "<<Bob.get_Hire_Date().date_to_string()<<endl;
    cout<<Edelman.get_Name()<<" is Number: "<<Edelman.get_ID_Number()<<" was Hired: "<<Edelman.get_Hire_Date().date_to_string()<<endl;
    
    cout<<"Falcons Employees"<<endl;
    cout<<Matt.get_Name()<<" is Number: "<<Matt.get_ID_Number()<<" was Hired: "<<Matt.get_Hire_Date().date_to_string()<<endl;
    cout<<Julio.get_Name()<<" is Number: "<<Julio.get_ID_Number()<<" was Hired: "<<Julio.get_Hire_Date().date_to_string()<<endl;
    
    
    cout<<endl<<endl;
    
    //Print out operator times
    cout<<"Over 10000 runs, average operation times are:"<<endl;
    compare_operator_times(10000);
    
    
    
    /*  // Run the operator calculations multiple times
    float numRuns=1;
    
    float plusplus_avg=0;
    for(int i=0;i<numRuns;i++){
        float plusplus=calc_plusplus_time();
        plusplus_avg += plusplus;
    }
    cout<<"++ avg after "<<numRuns<<" runs: "<<(plusplus_avg/numRuns)<<endl;
    
    
    float minusminus_avg=0;
    for(int i=0;i<numRuns;i++){
        float minusminus=calc_minusminus_time();
        minusminus_avg+=minusminus;
    }
    cout<<"-- avg after "<<numRuns<<" runs: "<<(minusminus_avg/numRuns)<<endl;
    
    
    float plusequal_avg=0;
    for(int i=0; i<numRuns; i++){
        float plusequal = calc_plusequal_time();
        plusequal_avg+=plusequal;
    }
    cout<<"+= avg after "<<numRuns<<" runs: "<<(plusequal_avg/numRuns)<<endl;
    
    
    float minusequal_avg =0;
    for(int i=0; i<numRuns; i++){
        float minusequal = calc_minusequal_time();
        minusequal_avg +=minusequal;
    }
    cout<<"-= avg after "<<numRuns<<" runs: "<<(minusequal_avg/numRuns)<<endl;
    */
    
    return 0;
}

