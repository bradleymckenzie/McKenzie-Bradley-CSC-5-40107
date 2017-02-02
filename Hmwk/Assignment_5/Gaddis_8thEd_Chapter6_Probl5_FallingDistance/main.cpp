/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 2, 2017
 Purpose: Falling Distance Calculator - Time Intervals
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
float fallingDistance(int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Input Values
    cout<<"\t --------------------------------------"<<endl;
    cout<<setw(38)<<"Falling Distance 1-10"<<endl;
    cout<<"\t --------------------------------------"<<endl;
    //Process by mapping inputs to outputs
    
    //Output Values
    cout<<fixed<<setprecision(2);
    cout<<" --------------------------------------------------------"<<endl;
    cout<<setw(23)<<"Time\t   "<<"       Distance"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    for (int t=1;t<=10;t++)
    {
        cout<<"\t      "<<t<<" sec\t"<<setw(15)<<fallingDistance(t)<<" m/s"<<endl;
    }
    cout<<" --------------------------------------------------------"<<endl;
    //Exit stage right!
    return 0;
}
float fallingDistance(int time)
{
	return .5 * 9.8 * pow(time, 2);
}