/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 18, 2017
 Purpose: Display the ocean’s level for next 25 years if it rises at 
          1.5 millimeters per year.
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
    int years = 25;//max value to display
    float milli = 1.5;//rising level
    //Input Values
    cout<<"This program displays ocean level is rising 1.5 millimeter"<<endl;
    cout<<"per year for the next 25 years."<<endl;
    //Loop for
    for(float counter = 1;counter <= years;counter++){
        cout<<"For year "<<setw(2)<<counter<<" "<<"the ocean level will be "
                <<(counter * milli)<<" millimeter."<<endl;
    }
    //Process by mapping inputs to outputs
     
    //Output Values
    
    //Exit stage right!
    return 0;
}