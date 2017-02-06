/*
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 6, 2017
 Purpose: Payroll
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
    const int SIZE=7;
    int empId[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours[SIZE];
    float payRate[SIZE];
    float wages[SIZE];
    //Input Values
    cout<<"   --------------------------------------------"<<endl;
    cout<<"                 Employee Payroll"<<endl;
    cout<<"   --------------------------------------------"<<endl;
    for(int i=0;i<SIZE;i++){//get employee
    cout<<"Enter the Number of Hours Worked by ID "<<empId[i]<<": ";
    cin>>hours[i];
    cout<<endl;
    while(hours[i]<0){//Invalid Input
        cout<<"Error: Invalid ID, Reenter: ";
        cin>>hours[i];
        cout<<endl;
    }
    cout<<"Enter the Hourly Pay Rate of ID "<<empId[i]<<": $";//get the pay rate
    cin>>payRate[i];
    cout<<endl;
    if(payRate[i]<15){
        cout<<"Error: Must be Greater than $15, Reenter: ";
        cin>>payRate[i];
        cout<<endl;
    }
    while(payRate[i]<0){
        cout<<"Error: Must be a Positive Number, Reenter: ";
        cin>>hours[i];
    }
    wages[i]=hours[i]*payRate[i];
    }
    //Process by mapping inputs to outputs

    //Output Values
    cout<<"-------------------------------------------------"<<endl;
    for(int x=0;x<SIZE;x++){
        cout<<"Employee: "<<empId[x]<<" Hours: "<<hours[x]<<" Gross Wages: $";
                cout<<fixed<<setprecision(2);
               cout<<wages[x]<<endl;
}
    cout<<"-------------------------------------------------"<<endl;
    //Exit stage right!
    return 0;
}
