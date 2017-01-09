/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 5, 2017
 Purpose: Total Purchase
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

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float itemOne = 15.95, 
          itemTwo = 24.95, 
          itemThree = 6.95, 
          itemFour = 12.95,
          itemFive = 3.95;
    float subtotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
    float tax = subtotal * .07;
    float total = tax + subtotal;
    //Input Values
    cout<<"\t\tWalmart"<<endl;
    cout<<"\t     (951) 653-4849"<<endl;
    cout<<"\t6250 Valley Springs Pkwy"<<endl;
    cout<<"\t  Riverside, CA 92507"<<endl;
    cout<<"    ST# 01413 OP# 03444 TE# 20 TR# 05673"<<endl<<endl;;
    //Process by mapping inputs to outputs
    
    //Output Values
    cout << fixed << setprecision(2)<<endl;
    cout<<"   Price of item 1 = $"<<itemOne<<endl;
    cout<<"   Price of item 2 = $"<<itemTwo<<endl;
    cout<<"   Price of item 3 = $"<<itemThree<<endl;
    cout<<"   Price of item 4 = $"<<itemFour<<endl;
    cout<<"   Price of item 5 = $"<<itemFive<<endl<<endl;
    cout<<"\t\tSubtotal = $"<<subtotal<<endl;
    cout<<"\t\tTax = $"<<tax<<endl;
    cout<<"\t\tTotal = $"<<total<<endl<<endl;
    
    cout<<"\t01/05/17 \t 17:00"<<endl<<endl;;
    cout<<"   Thank You for Shopping at Walmart"<<endl;
    //Exit stage right!
    return 0;
}

