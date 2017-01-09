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
    float test1,
          test2,
          test3,
          test4,
          test5,
          avgTest;
    //Input Values
    cout<<"This is a program calculates the average of five test scores."<<endl;
    cout<<"Input five test scores in the format ex: 86 78 93 89 92"<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    //Process by mapping inputs to outputs
    avgTest = (test1 + test2 + test3 + test4 + test5)/5;
    //Output Values
    cout<<fixed<<setprecision(1);
    cout<<"\tYour average test score is "<<avgTest<<"%"<<endl;
    //Exit stage right!
    return 0;
}

