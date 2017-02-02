/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 2, 2017
 Purpose: Calculate Inflation Rate
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void savings(int [],float [],float,float,int);
void prntAry(int [],float[],int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=102;
    int nYears=SIZE/2+1;
    int year[SIZE]={};//Initialize the entire array to 0
    float balance[SIZE]={};
    //Input Values
    float infRate=0.0522f;//Inflation Rate
    float item=10e4f;
    //Process by mapping inputs to outputs
    savings(year,balance,item,infRate,nYears);
    //Output Values
    prntAry(year,balance,nYears);
    //Exit stage right!
    return 0;
}

void savings(int y[],float b[],float p,float infRate,int nYears){
    //Initialize the array
    y[0]=0;
    b[0]=p;
    //Loop each year to fill the array
    for(int year=1;year<=nYears;year++){
        y[year]=year;
        b[year]=b[year-1]*(1+infRate);
    }
}

void prntAry(int year[],float balance[],int n){
    cout<<" Year   Balance"<<endl;
    cout<<fixed<<setprecision(2);
    for(int i=0;i<n;i++){
        cout<<setw(3)<<year[i]<<"    $"<<setw(5)<<balance[i]<<endl;
    }
    cout<<endl;
}