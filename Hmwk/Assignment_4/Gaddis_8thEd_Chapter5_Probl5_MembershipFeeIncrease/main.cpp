/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 18, 2017
 Purpose: a program that uses a loop to display the cost of a country club
          membership for the next six years when increase by 4% each year.
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
    int years = 6;//max time on treadmill
    float memship = 2500; //current price
    float incrse = .04;//calories burned per minute
    //Input Values
    cout<<"This program displays cost of the membership of country club"<<endl;
    cout<<"for the next six years if the membership cost is increase by"<<endl;
    cout<<"4% each year."<<endl;
    cout<<" ------------------------------------------------------------------"<<endl<<endl;
    //Loop for each minute 
    cout<<fixed<<setprecision(2);
    for(int i = 1;i <= years;i++){
        memship = memship + (memship * incrse);
        cout<<"    For year"<<setw(2)<<i<<" the price of the country "
                <<"club membership will be:"<<endl;
        cout<<"\t$"<<memship<<" dollars."<<endl<<endl;
    }
    //Process by mapping inputs to outputs
     
    //Output Values
    cout<<" -----------------------------------------------------------------"<<endl;
    //Exit stage right!
    return 0;
}