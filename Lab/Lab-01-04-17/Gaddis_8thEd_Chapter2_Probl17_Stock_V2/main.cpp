/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 4, 2017
 Purpose: Stock Calculation
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char stkPrce=35;   //Units of $'s/share
    unsigned short nShares=750; //Number of Shares
    float comishn=2.0e-2f;      //Percent Commission
    unsigned short stkPaid,comPaid,totPaid;
    
    //Process by mapping inputs to outputs
    stkPaid=stkPrce*nShares;  //Amount Paid for the Stock Purchase $'s
    comPaid=stkPaid*comishn;//Commission o n Stock Purchase $'s
    totPaid=stkPaid+comPaid;//Total Paid $'s
    //Output Values
    cout<<"StickPrice/Share = $"<<static_cast<int>(stkPrce)<<"/share"<<endl;
    cout<<"Number of Shares    "<<nShares<<" shares"<<endl;
    cout<<"Commission          "<<comishn<<endl;
    cout<<"Stock Price Paid = $"<<stkPaid<<endl;
    cout<<"Commission Paid =  $"<<comPaid<<endl;
    cout<<"Total Paid =       $"<<totPaid<<endl;
    //Exit stage right!
    return 0;
}

