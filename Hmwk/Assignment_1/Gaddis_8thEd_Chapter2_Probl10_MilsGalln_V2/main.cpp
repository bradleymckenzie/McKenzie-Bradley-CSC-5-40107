/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 7, 2017
 Purpose: Calculating Miles per Gallon
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
    float miles, gallon,mlsPGal;
    
    //Input Values
    cout<<"This is a program calculates the miles per gallon."<<endl;
    cout<<"Input number of gallons of gasoline your car can hold."<<endl;
    cin>>gallon;
    cout<<"Input number miles your can travel before refueling."<<endl;
    cin>>miles;
    //Process by mapping inputs to outputs
    mlsPGal = miles/gallon;
    //Output Values
    cout<<"\tThe miles per gallon is equal to "<<mlsPGal<<"."<<endl;
    //Exit stage right!
    return 0;
}

