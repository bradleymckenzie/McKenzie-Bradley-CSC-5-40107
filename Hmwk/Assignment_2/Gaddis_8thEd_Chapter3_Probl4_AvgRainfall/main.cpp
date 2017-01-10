/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 9, 2017
 Purpose: Test Average
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

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string month1,month2,month3;     //each month of rainfall
    float rnfl1,rnfl2,rnfl3,avgRnfl; //amount of rainfall each month in inches
    
    //Input Values
    cout<<"This is a program calculates the average rainfall for three months."<<endl;
    cout<<"Enter the first month."<<endl;
    cin>>month1;
    cout<<"Enter the first month rainfall in inches."<<endl;
    cin>>rnfl1;
    cout<<"Enter the second month."<<endl;
    cin>>month2;
    cout<<"Enter the second month rainfall in inches."<<endl;
    cin>>rnfl2;
    cout<<"Enter the third month."<<endl;
    cin>>month3;
    cout<<"Enter the third month rainfall in inches."<<endl;
    cin>>rnfl3;
    //Process by mapping inputs to outputs
    avgRnfl = (rnfl1 + rnfl2 + rnfl3)/3;
    //Output Values
    cout<<fixed<<setprecision(2);
    cout<<"\tThe average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<" is "<<avgRnfl<<" inches."<<endl;
    //Exit stage right!
    return 0;
}

