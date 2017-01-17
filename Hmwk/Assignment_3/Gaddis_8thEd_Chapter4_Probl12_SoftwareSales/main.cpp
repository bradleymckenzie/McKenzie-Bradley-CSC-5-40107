/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 12, 2017
 Purpose: Calculates the total cost of the purchase 
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
    float units,subtotal,total;
    //Input Values
    cout<<"This program calculates the total cost of a purchase"<<endl;
    cout<<"with the appropriate discount applied."<<endl;
    cout<<"Enter the number of units sold."<<endl;
    cin>>units;
    //Process by mapping inputs to outputs
    cout<<fixed<<setprecision(2);
    if(units>0 && units<10){
        total=units*99;
        cout<<"\t-----------------------------"<<endl;
        cout<<"\t     The total is $"<<total<<endl;
        cout<<"\t-----------------------------"<<endl;
    }
    else if(units>=10 && units<=19){
        subtotal=(units*99)*.20;
        total=(units*99)-subtotal;
        cout<<"\t-------------------------------"<<endl;
        cout<<"\t     The total is: $"<<total<<endl;
        cout<<"\t-------------------------------"<<endl;
    }
    else if(units>=20 && units<=49){
        subtotal=(units*99)*.30;
        total=(units*99)-subtotal;
        cout<<"\t------------------------------"<<endl;
        cout<<"\t    The total is: $"<<total<<endl;
        cout<<"\t------------------------------"<<endl;
    }
    else if(units>=50 && units<=99){
        subtotal=(units*99)*.40;
        total=(units*99)-subtotal;
        cout<<"\t------------------------------"<<endl;
        cout<<"\t    The total is: $"<<total<<endl;
        cout<<"\t------------------------------"<<endl;
    }
    else if(units>=100){
        subtotal=(units*99)*.50;
        total=(units*99)-subtotal;
        cout<<"\t------------------------------"<<endl;
        cout<<"\t    The total is: $"<<total<<endl;
        cout<<"\t------------------------------"<<endl;
    }
    else if(units<=0){
        cout<<"\t-------------------------------------------------"<<endl;
        cout<<"\t  The number of units has to be greater than 0."<<endl;
        cout<<"\t-------------------------------------------------"<<endl;
    }
    //Output Values
    
    //Exit stage right!
    return 0;
}

