/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 12, 2017
 Purpose: Grade Switch - Case
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
    float score;
    char grade;
    //Input Values
    cout<<"This program takes the score and output the grade."<<endl;
    cout<<"Input the score 0 to 100."<<endl;
    cin>>score;
    //Process by mapping inputs to outputs
    switch(score>94){
        case true: grade='A';break;
        default: switch(score>86){
                case true: grade='B';break;
                default: switch(score>79){
                        case true: grade='C';break;
                        default: switch(score>74){
                              case true: grade='D';break;
                               default: grade='F';
                        }
                }
        }
    }
    //Output Values
    cout<<"\tYour score of "<<score<<" = "<<grade<<endl;
    //Exit stage right!
    return 0;
}

