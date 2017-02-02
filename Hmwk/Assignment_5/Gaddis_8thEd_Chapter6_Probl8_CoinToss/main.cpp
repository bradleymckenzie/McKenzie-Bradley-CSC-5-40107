/*
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 1, 2017
 Purpose: Coin Toss
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
int coinToss();
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
     srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
     int flips,land;
     string result;
    //Input Values
     cout<<"How many times the coin should be tossed?"<<endl;
     cin>>flips;
     cout<<"The coin landed on:"<<endl;
     for(int i=1;i<=flips;i++){
     land=coinToss();
     if(land==1){
         result="- heads";
     }
     else if(land==2){
        result="- tails";
     }
     cout<<" "<<result<<endl;
   }
    //Process by mapping inputs to outputs
    
    //Output Values
    
    //Exit stage right!
    return 0;
}

int coinToss(){ 
//Declare Variable
unsigned int flip;
//Flip coin
    flip=rand()%2+1;
//Return
    return flip;
}
