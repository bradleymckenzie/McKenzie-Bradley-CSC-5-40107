/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 18, 2017
 Purpose: a calculate how much a person would earn over a period of time 
          if their salary is one penny the first day and then two pennies
          the second day for 31 days. Version 2.0
 */

//System Libraries
#include <iostream>//Input Output Library
#include <iomanip>//Format Layout 
#include <cmath>//Math Library for power
using namespace std;
//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int salary=1,totPay=0,maxDays=31;
    //Input Values
    cout<<"This program calculates much a person would earn over a period"<<endl;
    cout<<"of time if a person's salary is one penny the first day and then"<<endl;
    cout<<"two pennies the second day and continues to double each day."<<endl<<endl;
    //Process by mapping inputs to outputs
    for(int day=1;day<=maxDays;day++,salary*=2){//multiply salary by 2
        int cents=salary%100;//2 digits less for dollars
        int dollars=(salary-cents)/100;//Last 2 digits for pennies
        //Format the output for dollars and cents
        cout<<"  Salary for day "<<day<<" = $"<<dollars<<"."
                <<(cents<10?'0':'\0')<<cents<<endl;
        totPay+=salary;//sum salary
        cents=totPay%100;
        dollars=(totPay-cents)/100;
        cout<<"  Total pay for day "<<day<<" = $"<<dollars<<"."
                 <<(cents<10?'0':'\0')<<cents<<endl<<endl;
    }
    //Predicting the result
    double salLDay=(pow(2,maxDays-1))/100;//Results in dollars
    double totLDay=(pow(2,maxDays)-1)/100;//Results in dollars
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Final Salary predicted = $"<<salLDay<<endl;
    cout<<"Final Total Pay predicted = $"<<totLDay<<endl;
    //Output Value
    
    //Exit stage right!
    return 0;
}