/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 12, 2017
 Purpose: Identifies if a date inputed month and day equal to the year.
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
    unsigned short month,date,year;
    string magic,nonmag;
    //Input Values
    cout<<"This is a program identifies if a date is magic or not."<<endl;
    cout<<"Enter a date in the format of: 2 2 42"<<endl;
    cin>>month>>date>>year;
    //Process by mapping inputs to outputs
    switch(month*date==year){
        case true:magic="magic";break;
        default :nonmag="not magic";
    }
    //Output Values
    cout<<"\t-------------------------"<<endl;
    cout<<"\t  This Date is "<<magic<<nonmag<<endl;
    cout<<"\t-------------------------"<<endl;
    
    //Exit stage right!
    return 0;
}

