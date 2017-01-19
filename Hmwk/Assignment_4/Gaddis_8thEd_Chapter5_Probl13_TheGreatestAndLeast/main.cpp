/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 18, 2017
 Purpose: Display the largest and smallest numbers entered in order.
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
    int greatest = 0;
    int smallest = 0;
    int value = 0;
    //Input Values
    cout<<"This program displays the largest and smallest numbers in order"<<endl;
    cout<<"with integers entered by the user. If you would like to stop the"<<endl;
    cout<<"string enter -99"<<endl;
    //Loop
    while (value != -99)
    {
        cout<<"\t  Enter a integer: ";
        cin>>value;
        if (value > greatest && value != -99)
        {
            greatest = value;
        }
        if (value < smallest && value != -99)
        {
            smallest = value;
        }
    }
    //Process by mapping inputs to outputs
     
    //Output Values
    cout<<" --------------------------------------"<<endl;
    cout<<"  The greatest value entered was: "<<greatest<<endl;
    cout<<"  The smallest value entered was: "<<smallest<<endl;
    cout<<" --------------------------------------"<<endl;
    //Exit stage right!
    return 0;
}