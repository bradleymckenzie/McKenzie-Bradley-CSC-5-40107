/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 12, 2017
 Purpose: A game where users enter coins values that add up to one dollar using pennies, nickels, dimes, and quarters.
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
    float pennies,nickels,dimes,quarters,total;
    string dollar,less,more;
    //Input Values
    cout<<"Change for a Dollar Game"<<endl;
    cout<<"Player must enter the correct amount of pennies, nickels,"<<endl;
    cout<<"dimes, and quarters to to make exactly one dollar."<<endl;
    cout<<"you have optimal weight, underweight, or overweight."<<endl;
    cout<<"Enter the number of pennies."<<endl;
    cin>>pennies;
    cout<<"Enter the number of nickels."<<endl;
    cin>>nickels;
    cout<<"Enter the number of dimes."<<endl;
    cin>>dimes;
    cout<<"Enter the number of quarters."<<endl;
    cin>>quarters;
    //Process by mapping inputs to outputs
    total=(pennies*0.01)+(nickels*0.05)+(dimes*0.10)+(quarters*0.25);
    if(total==1.00){
        dollar="You Won! You entered exactly one dollar!";
    }
    else if(total<1.00){
        less="Sorry you entered less than one dollar. Try again.";
    }
    else if(total>1.00){
        more="Sorry you entered more than one dollar. Try again.";
    }
    //Output Values
    cout<<"\t--------------------------------------------------"<<endl;
    cout<<"\t"<<less<<more;
    cout<<"     "<<dollar<<endl;
    cout<<"\t--------------------------------------------------"<<endl;
    
    //Exit stage right!
    return 0;
}

