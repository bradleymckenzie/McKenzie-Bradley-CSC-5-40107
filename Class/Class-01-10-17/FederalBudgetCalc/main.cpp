/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 10, 2017
 Purpose: Federal Budget Calculation
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
    int fedrl,miltry,nasa;  //budgets of each Federal, Military, and NASA
    int perMiltry, perNASA; //percentage of each Military and NASA
    
    //Input Values
    cout<<"This is a program calculates the spending percentage"<<endl;
    cout<<"of federal budget."<<endl;
    cout<<"Enter the federal budget."<<endl;
    cin>>fedrl;
    cout<<"Enter the Military."<<endl;
    cin>>miltry;
    cout<<"Enter the NASA."<<endl;
    cin>>nasa;
    //Process by mapping inputs to outputs
    perMiltry = (miltry/fedrl)*100;
    perNASA = (nasa/fedrl)*100;
    //Output Values
    cout<<"\tMilitary budget percentage spent within the federal budget "<<perMiltry<<"%"<<endl;
    cout<<"\tNASA budget percentage spent within the federal budget "<<perNASA<<"%"<<endl;
    //Exit stage right!
    return 0;
}

