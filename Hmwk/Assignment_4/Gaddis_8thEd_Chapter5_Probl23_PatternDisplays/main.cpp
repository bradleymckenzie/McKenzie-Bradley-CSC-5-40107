/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 18, 2017
 Purpose: Display to patterns a and b.
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
    cout<<"-Pattern A"<<endl;
    for(int r = 0; r < 10; r++)//triangle 1
    {
        for(int c = 0; c<=r; c++)
        {
            cout<<"+";
        }
        cout<<endl;
    }
    cout<<"-Pattern B"<<endl;
    
    for(int r = 10; r > 0; r--)//triangle 2
    {
        for(int c = 0; c < r; c++)
        {
            cout<<"+";
        }
        cout<<endl;
    }
    //Process by mapping inputs to outputs
     
    //Output Values
    
    //Exit stage right!
    return 0;
}