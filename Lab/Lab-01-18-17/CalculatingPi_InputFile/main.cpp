/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 18, 2017
 Purpose: Pi Calculation While
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
    ifstream InFile("c:\\Users\\rcc\\desktop\\pi.txt");
    //Declare Variables
    float pi = 0;
    float term;
    //Input Values
    
    cout << "outputting pi " << endl;
    //if( InFile.bad() ) cout << "Bad file!" << endl;
    //Loop
    while(InFile>>term){
        pi += term;
        //cout<<term<<endl;
    }
        cout<<"pi = "<<pi<<endl;
    //Process by mapping inputs to outputs
     
    //Output Values

    //Exit stage right!
    return 0;
}