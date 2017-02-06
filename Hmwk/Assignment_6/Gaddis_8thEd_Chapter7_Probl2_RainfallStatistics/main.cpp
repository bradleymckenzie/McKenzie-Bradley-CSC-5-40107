/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 2, 2017
 Purpose: Rainfall Statistics for 12 months
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
    float rainfall[12],sum=0,avg,highest=0,lowest;
    int highestMonth,lowestMonth;
    //Input Values
    cout<<" ----------------------------------------------"<<endl;
    cout<<"             Rainfall Statistics"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    for(int i=0;i<=11;i++){
        cout<<"Please Enter the Total Rainfall for Month "<<i+1<<": ";
        cin>>rainfall[i];
    while(rainfall[i]<0){
    cout<<"Error: Enter a positive number."<<endl;
    cout<<"Please Enter the Total Rainfall for Month "<<i+1<<": ";
    cin>>rainfall[i];
    }
    sum+=rainfall[i];
    }
    cout<<fixed<<setprecision(2);
    cout<<"    --------------------------------------"<<endl;
    cout<<"      Total Rainfall is: "<<sum<<endl;
    avg=sum/12.0;
    cout<<"      Average Monthly Rainfall is: "<<avg<<endl;
    cout<<"    --------------------------------------"<<endl;
    
    for(int x=0;x<11;x++){
        if(highest<rainfall[x]){
            highest=rainfall[x];
            highestMonth=x+1;
        }
    }
    lowest=rainfall[0];
    for(int y=0;y<11;y++){
        if(lowest>rainfall[y]){
            lowest=rainfall[y];
            lowestMonth=y+1;
        }
    }
    cout<<"  ------------------------------------------"<<endl;
    cout<<"    Month with Highest Rainfall is Month "<<highestMonth<<endl;
    cout<<"    Month with Lowest Rainfall is Month "<<lowestMonth<<endl;
    cout<<"  ------------------------------------------"<<endl;
    //Process by mapping inputs to outputs
    
    //Output Values
    
    //Exit stage right!
    return 0;
}

