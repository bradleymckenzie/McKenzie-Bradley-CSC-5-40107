/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 1, 2017
 Purpose: Calculate Bank Saving per year
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
    const int SIZE=100;
    int nYears=SIZE/2+1;
    int year[SIZE]={};//Initialize the entire array to 0
    float balance[SIZE]={};
    //Input Values
    float intRate=0.06f;
    float gift=1.0e4f;
    //Process by mapping inputs to outputs
    savings(year,balance,gift,intRate,nYears);
    //Output Values
    prntAry(year,balance,nYears);
    //Exit stage right!
    return 0;
}

void savings(int y[],float b[],float p,float intRate,int nYears){
    //Initialize the array
    y[0]=0;
    b[0]=p;
    //Loop each year to fill the array
    for(int year=1;year<=nYears;year++){
        y[year]=year;
        b[year]=b[year-1]*(1+intRate);
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