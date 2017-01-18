/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 18, 2017
 Purpose: a program that asks the user for the speed of a vehicle 
          (in miles per hour) and how many hours it has traveled. 
          Then the program should then use a loop to display the
          distance the vehicle has traveled for each hour of that 
          time period.
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
    float speed;//speed of car
    float hours;//hours travel
                 //distance travel each hour
    //Input Values
    cout<<"This program calculates the distance travel each hour"<<endl;
    cout<<"when inputed travel speed and the numbers of hours traveled."<<endl;
    cout<<"4% each year."<<endl;
    cout<<"What is the speed of the vehicle in mph?"<<endl;
    cin>>speed;
    cout<<"How many hours has it traveled?"<<endl;
    cin>>hours;;
    //Loop for each minute 
    cout<<fixed<<setprecision(0);
    cout<<"    ----------------------------"<<endl;
    cout<<"     Hours    Distance Traveled"<<endl;
    for(int i = 1;i <= hours;i++){
       cout << setw(8) << i << setw(16) << i*speed << endl;
     }
    //Process by mapping inputs to outputs
     
    //Output Value
    //Exit stage right!
    return 0;
}