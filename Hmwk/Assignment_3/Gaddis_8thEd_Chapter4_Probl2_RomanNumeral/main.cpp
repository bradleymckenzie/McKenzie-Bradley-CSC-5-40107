/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 12, 2017
 Purpose: Converts a number from 1-10 to Roman numeral.
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
    unsigned short number;
    string romNum;
    string romNum2;
    //Input Values
    cout<<"This is a program converts a number from 1-10 to a Roman numeral."<<endl;
    cout<<"Enter a number (1-10):"<<endl;
    cin>>number;
    //Process by mapping inputs to outputs
    switch(number){
        case 10:romNum="X";break;
        case 9:romNum="IX";break;
        case 8:romNum="VIII";break;
        case 7:romNum="VII";break;
        case 6:romNum="VI";break;
        case 5:romNum="V";break;
        case 4:romNum="IV";break;
        case 3:romNum="III";break;
        case 2:romNum="II";break;
        case 1:romNum="I";break;
        default :romNum2="You must enter a number between 1-10.";
    }
    //Output Values
    cout<<"\t---------------------"<<endl;
    cout<<"\t   You entered: "<<romNum<<endl;
    cout<<"\t---------------------"<<endl;
    cout<<" "<<romNum2<<endl;
    
    //Exit stage right!
    return 0;
}

