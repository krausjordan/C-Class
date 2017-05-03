/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: krausjn1
 *
 * Created on May 1, 2017, 6:19 PM
 */

#include <cstdlib>
#include <map>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

//Calculates average of a vector of ints
double calcAvg(vector<int> x){
    double total=0;
    for(int i=0;i<x.size();i++){
        total+=x[i];
    }
    return (total/x.size());
}


/*
 * 
 */
int main(int argc, char** argv) {

    //Create a map of the student names and numbers
    map<int, string> studentNames;
    studentNames[1]="Mona Chrome";
    studentNames[2]="Shagga Dellic";
    studentNames[3]="Sim Carder";

    //Create a map of the student numbers and a vector of their grades
    std::map <int, vector<int> > studentGrades;
    studentGrades[1].push_back(60);
    studentGrades[2].push_back(90);
    studentGrades[3].push_back(75);
    studentGrades[1].push_back(90);
    studentGrades[2].push_back(95);
    studentGrades[3].push_back(85);
    studentGrades[1].push_back(85);
    studentGrades[2].push_back(80);
    studentGrades[3].push_back(90);
    studentGrades[1].push_back(60);
    studentGrades[2].push_back(85);
    studentGrades[3].push_back(70);
    
    //vector<int>::iterator result= max_element(studentGrades[1].begin(),studentGrades[1].end());
    
    //cout<< (*result)<<endl;
    
    //Print out Student statistics
    for(int i=1;i<4;i++){
        cout<<studentNames[i]<<" has a max score of "<< (*max_element(studentGrades[i].begin(),studentGrades[i].end())) <<" and a min score of ";
        cout<<(*min_element(studentGrades[i].begin(),studentGrades[i].end()))<<" and an average score of ";
        cout<<calcAvg(studentGrades[i])<<endl;
        
    }
    
    return 0;
}

