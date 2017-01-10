/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 10, 2017
 Purpose: Federal Debt to Person
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
     float fddbt08 = 9.19e12, //https://treasurydirect.gov/NP/debt/search?startMonth=01&startDay=01&startYear=2008&endMonth=12&endDay=31&endYear=2016
           fddbt16 = 19.9e12, //https://treasurydirect.gov/NP/debt/search?startMonth=01&startDay=01&startYear=2008&endMonth=12&endDay=31&endYear=2016
           ppul08 = 304.1e6,  //https://www.google.com/publicdata/explore?ds=kf7tgg1uo9ude_&met_y=population&idim=country:US&hl=en&dl=en
           ppul16 = 324.3e6;  //http://www.census.gov/popclock/
    
    //Input Values
    cout<<"  * * * * * * * * * * * * * * * * * * * * * * ** * * * * * * * * * * * * * * "<<endl;
    cout<<"* ------------------------------------------------------------------------- *"<<endl;
    cout<<"* \t   This is a program calculates the Federal Debt to Person          *"<<endl;
    cout<<"* \t           in the United States in 2008 and 2016.                   *"<<endl;
    cout<<"* ------------------------------------------------------------------------- *"<<endl;
    cout<<"* In 2008 the Federal Debt was ("<<fddbt08<<") with the population of "<<ppul08<<"  *"<<endl;
    cout<<"*    which factors to ($"<<(fddbt08/ppul08)<<") per person                                 *"<<endl;
    cout<<"* In 2016 the Federal Debt was ("<<fddbt16<<") with the population of "<<ppul16<<"  *"<<endl;
    cout<<"*    which factors to ($"<<(fddbt16/ppul16)<<") per person                                 *"<<endl;
    cout<<"  * * * * * * * * * * * * * * * * * * * * * * ** * * * * * * * * * * * * * *"<<endl;
    //Process by mapping inputs to outputs
    
    //Output Values
}

