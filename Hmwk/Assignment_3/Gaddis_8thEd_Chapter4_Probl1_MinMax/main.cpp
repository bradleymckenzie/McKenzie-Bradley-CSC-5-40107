/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 11, 2017
 Purpose: Determines which number is the smaller and larger of the input by the user.
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
    float number1,
          number2;
    //Input Values
    cout<<"This is a program identifies which of two numbers is"<<endl;
    cout<<"larger and smaller."<<endl;
    cout<<"Enter the first number."<<endl;
    cin>>number1;
    cout<<"Enter the second number."<<endl;
    cin>>number2;
    //Process by mapping inputs to outputs
    if(number1>number2)
    {
        cout<<"\t---------------------------------"<<endl;   
        cout<<"\t    The larger number is: "<<number1<<endl;
        cout<<"\t    The smaller number is: "<<number2<<endl;
        cout<<"\t---------------------------------"<<endl;
    }
    else
    {
        cout<<"\t---------------------------------"<<endl;
        cout<<"\t   The larger number is: "<<number2<<endl;
        cout<<"\t   The smaller number is: "<<number1<<endl;
        cout<<"\t---------------------------------"<<endl;
    }
    //Output Values
    
    //Exit stage right!
    return 0;
}

