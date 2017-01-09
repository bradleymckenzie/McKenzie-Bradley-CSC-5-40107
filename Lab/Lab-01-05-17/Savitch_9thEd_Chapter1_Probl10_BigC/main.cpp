/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 5, 2017
 Purpose: Big C 
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
    char c; //Variable to build the big c with
    //Input Values
    cout<<"THis program outputs a large C"<<endl;
    cout<<"with a letter the user chooses"<<endl;
    cout<<"What letter would you like?"<<endl;
    cin>>c;
    //Process by mapping inputs to outputs
    cout<<endl<<"A Big C with the Letter "<<c<<endl<<endl;
    cout<<"   "<<c<<" "<<c<<" "<<c<<endl;
    cout<<" "<<c<<"       "<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<" "<<c<<"       "<<c<<endl;
    cout<<"   "<<c<<" "<<c<<" "<<c<<endl;
    //Output Values
    
    //Exit stage right!
    return 0;
}

