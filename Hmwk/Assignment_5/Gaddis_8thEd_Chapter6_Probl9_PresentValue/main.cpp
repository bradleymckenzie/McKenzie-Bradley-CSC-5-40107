/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 1, 2017
 Purpose: Present Value Calculator
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
float presentValue(float, float, int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float pValue,fValue,aiRate;
    int years;
    //Input Values
    cout<<"\t --------------------------------------"<<endl;
    cout<<"\t\tPresent Value Calculator"<<endl;
    cout<<"\t --------------------------------------"<<endl;
    cout<<"What is the future amount you want in the account? ";
    cin>>fValue;
    cout<<"What is your annual interest rate? ";
    cin>>aiRate;
    cout<<"How many years do you plan to let the money sit in the account? ";
    cin>>years;
    //Process by mapping inputs to outputs
    pValue = presentValue(fValue, aiRate, years);
    //Output Values
    cout<<fixed<<setprecision(2);
    cout<<"    -------------------------------------------------"<<endl;
    cout<<"     You need to deposit $"<<pValue<<" to have a balance"<<endl;
    cout<<"     of $"<<fValue<<" in "<<years<<" years."<<endl;
    cout<<"    -------------------------------------------------"<<endl;
    //Exit stage right!
    return 0;
}
float presentValue(float fValue, float aiRate, int years)
{
	return fValue / (pow(1 +(aiRate*0.01), years));
}