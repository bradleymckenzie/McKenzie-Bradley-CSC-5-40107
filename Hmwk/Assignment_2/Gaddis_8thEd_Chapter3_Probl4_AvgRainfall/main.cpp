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
    char month1,month2,month3;
    float rnfl1,rnfl2,rnfl3,avgRnfl;
    
    //Input Values
    cout<<"This is a program calculates the average rainfall for three months."<<endl;
    cout<<"Input the first month."<<endl;
    cin>>month1;
    cout<<"Input the first month rainfall."<<endl;
    cin>>rnfl1;
    cout<<"Input the second month."<<endl;
    cin>>month2;
    cout<<"Input the second month rainfall."<<endl;
    cin>>rnfl2;
    cout<<"Input the third month."<<endl;
    cin>>month3;
    cout<<"Input the third month rainfall."<<endl;
    cin>>rnfl3;
    //Process by mapping inputs to outputs
    avgRnfl = (rnfl1 + rnfl2 + rnfl3)/3;
    //Output Values
    cout<<fixed<<setprecision(1);
    cout<<"The average rainfall for"<<rnfl1<<","<<rnfl2<<","<<rnfl3<<"is"<<avgRnfl<<" inches."<<endl;
    //Exit stage right!
    return 0;
}

