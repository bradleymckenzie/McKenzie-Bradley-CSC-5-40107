/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 6, 2017
 Purpose: Linear Search
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
void filAray(int[], int);
void prntAry(int[], int, int);
int linSrch(int[], int, int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const int SIZE=200;
    const int utilize=SIZE/2;
    int array[utilize]={};
    //Input Values
    cout<<"\t\t  Linear Search"<<endl;
    filAray(array, utilize);
    cout<<"---------------------------";
    //Find the Element
    int find;
    cout<<"----------------------------"<<endl;
    cout<<"What Value to Find? Type a Number Between 10 and 99: ";
    cin>>find;
    cout<<find<<" was found at "<<linSrch(array,utilize,find)<<endl;
    //Output Values
    cout<<"-----------------------------";
    prntAry(array,utilize,10);
    cout<<"-----------------------------";
    //Exit stage right!
    return 0;
}

void filAray(int a[], int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}

void prntAry(int a[], int n, int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
}

int linSrch(int a[], int n, int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}
