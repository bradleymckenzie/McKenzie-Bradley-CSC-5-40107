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
    unsigned short score;
    char grade;
    //Input Values
    cout<<"This program takes the score and output the grade."<<endl;
    cout<<"Input the score 0 to 100."<<endl;
    cin>>score;
    //Process by mapping inputs to outputs
    switch(score/10){
        case 11:
        case 10:
        case 9:grade='A';break;
        case 8:grade='B';break;
        case 7:grade='C';break;
        case 6:grade='D';break;
        case 5:grade='F';break;
        default: grade='F';
    }
    //Output Values
    cout<<"\tYour score of "<<score<<" = "<<grade<<endl;
    //Exit stage right!
    return 0;
}

