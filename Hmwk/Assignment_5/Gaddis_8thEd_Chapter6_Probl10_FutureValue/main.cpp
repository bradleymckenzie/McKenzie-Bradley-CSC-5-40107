/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 1, 2017
 Purpose: Future Value Calculator
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
float futureValue(float, float, int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float pValue,fValue,mRate;
    int months;
    //Input Values
    cout<<"\t --------------------------------------"<<endl;
    cout<<"\t\tFuture Value Calculator"<<endl;
    cout<<"\t --------------------------------------"<<endl;
    cout<<"What is the present amount you have in the account? ";
    cin>>pValue;
    cout<<"What is your monthly interest rate? ";
    cin>>mRate;
    cout<<"How many months will the money sit in the account? ";
    cin>>months;
    //Process by mapping inputs to outputs
    fValue = futureValue(pValue, mRate, months);
    //Output Values
    cout<<fixed<<setprecision(2);
    cout<<"        ----------------------------------------"<<endl;
    cout<<"         You will have a balance of $"<<fValue<<" in "<<endl;
    cout<<"         "<<months<<" months, if balance now is $"<<pValue<<endl;
    cout<<"        ----------------------------------------"<<endl;
    //Exit stage right!
    return 0;
}
float futureValue(float pValue, float mRate, int months)
{
	return pValue * (pow(1 +(mRate*0.01), months));
}