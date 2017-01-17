/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 12, 2017
 Purpose: Calculates weight of an object after the user input the mass.
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
    float weight,mass;
    string heavy,light,perf;
    //Input Values
    cout<<"This is a program calculates the weight of an object's weight"<<endl;
    cout<<"after you input the mass."<<endl;
    cout<<"Enter the mass of the object in kilograms."<<endl;
    cin>>mass;
    //Process by mapping inputs to outputs
    weight=mass*9.8;
    if(weight>1000){
        heavy="The object is too heavy.";
    }
    else if(weight<10){
        light="The object is too light.";
    }
    else if(weight>10 && weight<1000){
        perf="The object is fine.";
    }
    //Output Values
    cout<<fixed<<setprecision(0);
    cout<<"\t------------------------------"<<endl;
    cout<<"\t  The mass is: "<<weight<<" newtons."<<endl;
    cout<<"\t------------------------------"<<endl;

    cout<<"\t------------------------------"<<endl;
    cout<<"\t   "<<heavy;
    cout<<""<<light;
    cout<<"  "<<perf<<endl;
    cout<<"\t------------------------------"<<endl;
    //Exit stage right!
    return 0;
}

