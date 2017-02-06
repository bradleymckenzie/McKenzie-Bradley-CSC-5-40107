/*
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 5, 2017
 Purpose: Coin Toss
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
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
    int winNums[5];
    int player[5];
    int digit, match = 0;
    //Input Values
    for (int i = 0; i < 5; i++){
        winNums[i] = 0 + rand() % 9;
    } 
    cout<<"Enter Your Five Lottery Picks (0 to 9)."<<endl;
    for (int i = 0; i < 5; i++){
        do{
            cout<<" Number "<<(i + 1)<<": ";
            cin>>digit;
            if (digit < 0 || digit > 9){
                cout<<"\t   Invalid Number"<<endl;
                cout<<"Pick a number in the range of 0 to 9."<<endl;
            }
        }while (digit < 0 || digit > 9);
        player[i] = digit;
    }
    //Process by mapping inputs to outputs
    for (int i = 0; i < 5; i++){
        if (winNums[i] == player[i])
            match++;
    }
    //Output Values
    cout<<"   ----------------------------"<<endl;
    cout<<"     Winning Digits: ";
    for (int i = 0; i < 5; i++){
            cout<<winNums[i]<<" ";
    }
    cout<<endl;
    cout<<"      Player Digits: ";
    for (int i = 0; i < 5; i++){
            cout<<player[i]<<" ";
    }
    cout<<endl;
    cout<<"    Matching Digits: "<<match<<endl;
    cout<<"   ----------------------------"<<endl;
    //Exit stage right!
    return 0;
}
