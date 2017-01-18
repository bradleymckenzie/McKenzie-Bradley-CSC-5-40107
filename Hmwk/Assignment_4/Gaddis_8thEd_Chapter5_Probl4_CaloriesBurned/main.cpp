/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 18, 2017
 Purpose: a program that uses a loop to display the number of calories burned 
          after 5, 10, 15, 20, 25, and 30 minutes.
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
    int minutes = 30;//max time on treadmill
    float cal = 3.6;//calories burned per minute
    //Input Values
    cout<<"This program displays the number of calories burned on the treadmill"<<endl;
    cout<<"for the following times."<<endl;
    cout<<"\t-----------------------------------------"<<endl;
    //Loop for each minute 
    for(float counter = 1;counter <= minutes;counter++){
        cout<<"\tFor "<<setw(2)<<counter<<" minutes you burned "
                <<(counter * cal)<<" calories."<<endl;
    }
    //Process by mapping inputs to outputs
     
    //Output Values
    cout<<"\t-----------------------------------------"<<endl;
    //Exit stage right!
    return 0;
}