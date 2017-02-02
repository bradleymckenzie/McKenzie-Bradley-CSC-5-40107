/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 31, 2017
 Purpose: Calculate a item’s retail price using a function
 */

//System Libraries
#include <iostream>//Input Output Library
#include <iomanip>//Format Layout
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
float calculateRetail(float,float);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float wsale,markup,totPrce;
    
    //Input Values
    cout<<"This program calculate a item’s retail price, when user to enter"<<endl;
    cout<<"an item’s wholesale cost and its markup percentage."<<endl;
    cout<<"Enter the the item's wholesale cost."<<endl;
    cin>>wsale;
    cout<<"Enter the the item's markup percentage."<<endl;
    cin>>markup;
    //Process by mapping inputs to outputs
    while(wsale < 0 || markup < 0){//Output for when a negative number is inputted
        cout<<"  Please enter non-negative number for the wholesale and the"<<endl;
        cout<<"  markup percentage."<<endl;
        cout<<"Enter the the item's wholesale cost."<<endl;
        cin>>wsale;
        cout<<"Enter the the item's markup percentage."<<endl;
        cin>>markup;
    }
    //Output Values
    cout<<" ---------------------------------------------------------------"<<endl;
    cout<<"  If an item’s wholesale cost is $"<<wsale<<" and its markup percentage"<<endl; 
    cout<<"  is "<<markup<<"%, then the item's retail price is $"<<calculateRetail(wsale,markup)<<"."<<endl;
    cout<<" ---------------------------------------------------------------"<<endl;
    //Exit stage right!
    return 0;
}
float calculateRetail(float cost,float percent){//calculate the retail price.
    float totCost = 0;
    totCost = ((cost/100)*percent) + cost;
    return totCost;
}