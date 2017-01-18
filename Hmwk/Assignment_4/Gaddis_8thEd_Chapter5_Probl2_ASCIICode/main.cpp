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

    //Input Values
    cout<<"This program displays ASCII Code from 32 to 127."<<endl;
    //for loop print 32 to 127
	for (int i = 32; i < 127; i++)
	{
		cout<<(char)i<<" ";
		if (i % 16 == 0)
		cout<<endl;
	}
    //Process by mapping inputs to outputs
     
    //Output Values
    
    //Exit stage right!
    return 0;
}

