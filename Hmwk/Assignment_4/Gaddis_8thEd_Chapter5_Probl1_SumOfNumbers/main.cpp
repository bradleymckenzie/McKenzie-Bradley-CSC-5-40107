/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 17, 2017
 Purpose: A program that asks the user for a positive integer value. 
          The program should use a loop to get the sum of all the 
          integers from 1 up to the number entered.
 */

//System Libraries
#include <iostream>//Input Output Library
#include <iomanip>//Format Layout
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float sum = 0;
    float num;
    
    //Input Values
    cout<<"This program displays all positive integer values"<<endl;
    cout<<"before the inputed value."<<endl;
    cout<<"Enter a number greater than 0."<<endl;
    cin>>num;
    //Loop for
    for(float counter = 0;counter <= num;counter++){
        sum = sum + num;
        counter++;
    }
    if(num < 1){ //identifies a invalid input
        cout<<""<<num<<" is a invalid input."<<endl;
        cout<<"The program will now end."<<endl;
    }
    else //output sum
        cout<<"The sum of numbers 1 - "<<num<<" "<<"is "<<sum<<endl;
    //Process by mapping inputs to outputs
     
    //Output Values
    
    //Exit stage right!
    return 0;
}

