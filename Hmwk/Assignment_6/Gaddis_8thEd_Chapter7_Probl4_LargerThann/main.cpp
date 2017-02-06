/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 3, 2017
 Purpose: Display all of the numbers in the array that are greater than the 
          number n.
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
void arrayFunction(int[], int, int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int n;
    const int SIZE = 30;
    int arrayNumbers[SIZE] = 
    {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,26,27,28,29,30};
    //Input Values                        
    cout<<"  ---------------"<<endl;
    cout<<"   Larger Than n"<<endl;
    cout<<"  ---------------"<<endl;
    cout<<"  Enter Value: ";
    cin>>n;
    //Process by mapping inputs to outputs
    
    //Output Values
    cout<<" -----------------"<<endl;
    arrayFunction(arrayNumbers, SIZE, n);
    cout<<" -----------------"<<endl;
    //Exit stage right!
    return 0;
}

void arrayFunction(int arrayN[], int arrayS, int number)
{
    for (int i=0; i<arrayS; i++){
        if (arrayN[i] > number){
            cout<<" "<<arrayN[i];
            if(arrayN[i] % 6 == 0){
                cout<<endl;
            }
        }
    }    
}

