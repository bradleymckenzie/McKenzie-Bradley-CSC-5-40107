/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 10, 2017
 Purpose: Federal Budget Calculation
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
    float fedrl,miltry,nasa;  //budgets of each Federal, Military, and NASA
    float perMiltry,perNASA; //percentage of each Military and NASA
    //fb: http://federal-budget.insidegov.com/l/119/2016-Estimate
    //mb: https://en.wikipedia.org/wiki/Military_budget_of_the_United_States
    //nb: https://en.wikipedia.org/wiki/Budget_of_NASA
    //Input Values
    cout<<"This is a program calculates the spending percentage of the "<<endl;
    cout<<"2016 federal budget. (fb is 3.54e12, mb is 609e9, and nb is 19e9)"<<endl;
    cout<<"Enter the current federal budget."<<endl;
    cin>>fedrl;
    cout<<"Enter the current military."<<endl;
    cin>>miltry;
    cout<<"Enter the current NASA budget."<<endl;
    cin>>nasa;
    //Process by mapping inputs to outputs
    perMiltry = (miltry/fedrl)*100;
    perNASA = (nasa/fedrl)*100;
    //Output Values
    cout<<fixed<<setprecision(2);
    cout<<"\tMilitary budget percentage spent within the federal budget "<<perMiltry<<"%"<<endl;
    cout<<"\tNASA budget percentage spent within the federal budget "<<perNASA<<"%"<<endl;
    //Exit stage right!
    return 0;
}

