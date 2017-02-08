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
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void filAray(vector<int> &);
void prntAry(vector<int> &, int);
void markSrt(vector<int> &);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const int SIZE=100000;
    int utilize=100000;
    vector<int> array(utilize);
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
    return 0;
}

void filAray(vector<int> &a){
    for(int i=0;i<a.size();i++){
        a[i]=rand()%90+10;
    }
}

void prntAry(vector<int> &a, int perLine){
    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
}

void markSrt(vector<int> &a){
     for(int j=0;j<a.size()-1;j++){
         for(int i=j+1;i<a.size();i++){
             if(a[j]>a[i]){
                 a[j]=a[j]^a[i];
                 a[i]=a[j]^a[i];
                 a[j]=a[j]^a[i];
            }
        }
    }
}