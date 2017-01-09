/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 5, 2017
 Purpose: Free Fall
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another
const float GRAVITY = 3.2174e1f; //Gravity on the earth sea level ft/sec^2
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float time,    //Time in seconds
          distnce; //Distance in feet
    int rndOff;    //What decimal place to roundoff to
    //Input Values
    cout<<"This Problem solves the distance traveled"<<endl;
    cout<<"in free-fall under earth gravity"<<endl;
    cout<<"Input the time during free-fall in seconds"<<endl;
    cin>>time;
    cout<<"How many decimal place 0, 1, 2, or 3 for the answer"<<endl;
    cin>>rndOff;
    //Process by mapping inputs to outputs
    distnce=GRAVITY*time*time/2;
    int id=distnce*pow(10,rndOff)+0.5; //Rounding to roundoff decimals
    distnce=id/pow(10,rndOff);
    //Output Values
    cout<<"The distance fallen = "<<distnce<<" ft"<<endl;    
    //Exit stage right!
    return 0;
}

