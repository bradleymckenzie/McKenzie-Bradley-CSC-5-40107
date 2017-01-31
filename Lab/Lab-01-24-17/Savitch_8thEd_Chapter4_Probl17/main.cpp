/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 24, 2017
 Purpose: Query Digit
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
bool qryDigt(int,int);//Query the Digits
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    char digit;//see if you understand why and how this character works
    int number;//number is any random number in the range
    //Input Values
    cout<<"The program find a digit."<<endl;
    cout<<"Input a single digit."<<endl;
    cin>>digit;
    //Generate a random number
    number=rand();
    //Output results
    if(qryDigt(number,digit-48)){//Remember digit is a character ascii
         cout<<digit<<" was found in "<<number<<endl;
    }
    else{
         cout<<digit<<" was not found in "<<number<<endl;
    }
    //Exit stage right!
    return 0;
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//------------------------------------------------------------------------------
//************************Find a Digit in the Number****************************
//Description: Query a number and compare results
//Inputs: number -> 
//Outputs: true -> If the digit is found
//******************************************************************************
bool qryDigt(int number,int digit){
    //Loop unit you find the digit or exit
    do{
        char digCmp=number%10;
        if(digCmp==digit)return true;
        number/=10;
    }while(number!=0);
    return false;
}

