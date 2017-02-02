/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 2, 2017
 Purpose: Display the largest and smallest values stored in the array.
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
    int numbers[10],smallest=0,largest=0,temp;
    //Input Values
    cout<<" ----------------------------------------------"<<endl;
    cout<<"     Largest and Smallest Number Identifier"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    for(int i=0; i<10; i++){
        cout<<"Please Enter Number "<<i+1<<": "<<endl;;
        cin>>numbers[i];
    }
    smallest = numbers[0];
    largest = numbers[0];
    
    for(int i = 1; i<10; i++){
        temp = numbers[i];
        if(temp < smallest)
            smallest = temp;
        if(temp > largest)
            largest = temp;
    }
    cout<<"      ------------------------------"<<endl;
    cout<<"         Largest number is: "<<largest<<endl;
    cout<<"         Smallest number is: "<<smallest<<endl;
    cout<<"      ------------------------------"<<endl;
    //Process by mapping inputs to outputs
    
    //Output Values
    
    //Exit stage right!
    return 0;
}

