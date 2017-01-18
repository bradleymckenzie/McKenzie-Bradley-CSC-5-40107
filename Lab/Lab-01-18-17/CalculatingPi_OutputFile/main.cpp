/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 18, 2017
 Purpose: Pi Calculation
 */

//System Libraries
#include <iostream>//Input Output Library
#include <iomanip>//Format Layout
#include <cmath>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Open output file
    ofstream PiFile("c:\\Users\\rcc\\desktop\\pi.txt");
    //Declare Variables
    const unsigned int NUM_TERMS = 10000;
    float pi = 0.0;
    int ipi=0;
    //Input Values
    
    //Loop
    for(int n = 0;n <NUM_TERMS;++n){
        float term = 4 * pow(-1,n)/(2*n +1);
        pi += term;
        PiFile<<term<<endl;
    }
    //Process by mapping inputs to outputs
     
    //Output Values
    cout<<"pi = "<<pi<<endl;
    //Exit stage right!
    return 0;
}