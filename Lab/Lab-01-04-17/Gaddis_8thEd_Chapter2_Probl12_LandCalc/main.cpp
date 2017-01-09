/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 4, 2017
 Purpose: Land Calculation
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another
const int CNVACFT=43560; //Conversion Acres to Feet
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int nAcres,nFt2;
    
    //Input Values
    cout<<"This is a conversion program"<<endl;
    cout<<"from number of Acres to Feet squared"<<endl;
    cout<<"Input Number of Acres"<<endl;
    cin>>nAcres;
    //Process by mapping inputs to outputs
    nFt2=nAcres*CNVACFT;
    //Output Values
    cout<<"The number of Acres input = "<<nAcres<<endl;
    cout<<"Equivalent to "<<nFt2<<"(ft^2)"<<endl;
    //Exit stage right!
    return 0;
}

