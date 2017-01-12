/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 12, 2017
 Purpose: Grade Ternary Operator
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
    unsigned short score;
    char grade;
    //Input Values
    cout<<"This program takes the score and output the grade."<<endl;
    cout<<"Input the score 0 to 100."<<endl;
    cin>>score;
    //Process by mapping inputs to outputs
    grade=(score>=90)?'A':
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'F';
    //Output Values
    cout<<"\tYour score of "<<score<<" = "<<grade<<endl;
    //Exit stage right!
    return 0;
}

