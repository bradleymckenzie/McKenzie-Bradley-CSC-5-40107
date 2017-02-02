/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 2, 2017
 Purpose: Kinetic Energy Calculator
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
float kineticEnergy(float,float);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float mass,velo;//Mass and Velocity
    float answer;
    //Input Values
    cout<<"\t --------------------------------------"<<endl;
    cout<<"\t\tKinetic Energy Calculator"<<endl;
    cout<<"\t --------------------------------------"<<endl;
    cout<<"  Enter the object's mass (in kilograms): ";
    cin>>mass;
    cout<<"  Enter the object's velocity (in meters per second): ";
    cin>>velo;
    //Process by mapping inputs to outputs
    answer = kineticEnergy(mass,velo);
    //Output Values
    cout<<fixed<<setprecision(2);
    cout<<" --------------------------------------------------------"<<endl;
    cout<<"  The kinetic energy of this object is: "<<answer<<" joules."<<endl;
    cout<<" --------------------------------------------------------"<<endl;
    //Exit stage right!
    return 0;
}
float kineticEnergy(float mass, float velo)
{   
	return .5 * mass * pow(velo, 2);
}