/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 3, 2017, 12:15 PM
 Purpose: Calculate the Paycheck
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float hrsWrkd,//Hours worded in (hrs)
          payRate,//Pay  check in $'hr
          payChck;//Pay check in $'s
    //Input Values
    cout<<"This program calculates you paycheck"<<endl;
    cout<<"Your hours worked and pay rate are required"<<endl;
    cout<<"Input your hours worked in hours"<<endl;
    cin>>hrsWrkd;
    cout<<"Input your pay rate in $'s/hr"<<endl;
    cin>>payRate;
    //Process by mapping inputs to outputs
    payChck=payRate*hrsWrkd;
    //Output Values
    cout<<"Your paycheck = $"<<payChck<<endl;
    //Exit stage right!
    return 0;
}

