/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 8, 2017
 Purpose: Mark Sorting with Dyn Memory Allocation
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include "MyArray.h"
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void filAray(Array &);
void prntAry(Array &, int);
void markSrt(Array &);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const int SIZE=1000000;
    int utilize=100000;;
    Array array;
    array.SIZE=utilize;
    array.data=new int[SIZE];
    //Input Values
    cout<<"-----------------------------"<<endl;
    cout<<"       Sorting Program"<<endl;
    cout<<"-----------------------------";
    filAray(array);
    prntAry(array,10);
    cout<<"-----------------------------";
    //Process by mapping inputs to outputs
    markSrt(array);
    
    //Output Values
    prntAry(array,10);
    cout<<"-----------------------------";
    //Exit stage right!
    delete []array.data;
    return 0;
}

void filAray(Array &a){
    for(int i=0;i<a.SIZE;i++){
        a.data[i]=rand()%90+10;
    }
}

void prntAry(Array &a, int perLine){
    cout<<endl;
    for(int i=0;i<a.SIZE;i++){
        cout<<a.data[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
}

void markSrt(Array &a){
     for(int j=0;j<a.SIZE-1;j++){
         for(int i=j+1;i<a.SIZE;i++){
             if(a.data[j]>a.data[i]){
                 a.data[j]=a.data[j]^a.data[i];
                 a.data[i]=a.data[j]^a.data[i];
                 a.data[j]=a.data[j]^a.data[i];
            }
        }
    }
}