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
    float gallon = 375;
    float miles = 15;
    float mlsPGal = gallon/miles;
    //Input Values
    cout<<"This is a program calculates the miles per gallon."<<endl;
    cout<<"If a car can holds 15 gallons of gasoline and can travel"<<endl;
    cout<<"375 miles before refueling."<<endl<<endl;;
    //Process by mapping inputs to outputs
    
    //Output Values
    cout<<"\tThe miles per gallon is equal to "<<mlsPGal<<"."<<endl;
    //Exit stage right!
    return 0;
}

