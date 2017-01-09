/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 9, 2017
 Purpose: Stadium Seating Program
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float classA = 15, //Seating categories cost in $
          classB = 12,
          classC = 9,
          tkSldA,
          tkSldB,
          tkSldC,
          totIncm;
    //Input Values
    cout<<fixed<<setprecision(2);
    cout<<"This is a program calculates income generate from ticket sales."<<endl;
    cout<<"Input number of Class A tickets sold."<<endl;
    cin>>tkSldA;
    cout<<"Input number of Class B tickets sold."<<endl;
    cin>>tkSldB;
    cout<<"Input number of Class C tickets sold."<<endl;
    cin>>tkSldC;
    //Process by mapping inputs to outputs
    totIncm = (tkSldA*classA) + (tkSldB*classB) + (tkSldC*classC);
    //Output Values
    cout<<"\tTotal amount of income generated = $"<<totIncm<<endl;
    //Exit stage right!
    return 0;
}

