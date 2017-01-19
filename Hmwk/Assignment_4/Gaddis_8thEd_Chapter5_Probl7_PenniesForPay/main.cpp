/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 18, 2017
 Purpose: a calculate how much a person would earn over a period of time 
          if their salary is one penny the first day and then two pennies
          the second day.
 */

//System Libraries
#include <iostream>//Input Output Library
#include <iomanip>//Format Layout
#include <cmath>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int days;//user input
    float money = 1.0;
    float total = 0.0;
    float dayPay = 0.0;
    //Input Values
    cout<<"This program calculates much a person would earn over a period"<<endl;
    cout<<"of time if a person's salary is one penny the first day and then"<<endl;
    cout<<"two pennies the second day and continues to double each day."<<endl;
    cout<<"Enter number of days worked: ";
    cin>>days;
    //Loop for each minute 
    while (days < 1)
    {
             cout<<" The number of days you enter is not valid"<<endl;
             cout<<"Enter number of days worked: ";
             cin>>days;
             days++;
    }
    for (int i = 1; i <= days; i++)
    {   dayPay = money/100;
        cout<<fixed<<setprecision(2);
        cout<<" Day "<<setw(2)<<i<<" you would earn $"<<dayPay<<endl;
        total += dayPay;
        money *= 2;
    }
    //Process by mapping inputs to outputs
     
    //Output Value
    cout<<"\n Total earning are: $"<<total<<endl;
    //Exit stage right!
    return 0;
}