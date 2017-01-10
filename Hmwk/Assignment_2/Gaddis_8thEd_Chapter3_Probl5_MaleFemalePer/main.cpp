/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 10, 2017
 Purpose: Male and Female Percentages in a Class
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
    float female,male;     //number of female and male students
    float perFmle, perMle; //percentage of female and male students
    
    //Input Values
    cout<<"This is a program calculates the percentage of male and female"<<endl;
    cout<<"registered in a class."<<endl;
    cout<<"Enter the number of female students in the class."<<endl;
    cin>>female;
    cout<<"Enter the number of male students in the class"<<endl;
    cin>>male;
    //Process by mapping inputs to outputs
    perFmle = ((female)/(female+male))*100;
    perMle = ((male)/(female+male))*100;
    //Output Values
    cout<<"\tThe percentage of females in the class is "<<perFmle<<"%"<<endl;
    cout<<"\tThe percentage of males in the class is "<<perFmle<<"%"<<endl;
    //Exit stage right!
    return 0;
}

