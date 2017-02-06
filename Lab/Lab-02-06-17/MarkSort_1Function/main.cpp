/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 6, 2017
 Purpose: Mark Sorting
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
void swap(int &, int &);
void smalst(int[], int, int);
void markSrt(int[], int);
void mark(int[], int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const int SIZE=200;
    const int utilize=SIZE/2;
    int array[utilize]={};
    //Input Values
    cout<<"       Sorting Program"<<endl;
    cout<<"-----------------------------";
    //Process by mapping inputs to outputs
    //Output Values
    mark(array,utilize);
    cout<<"-----------------------------";
    //Exit stage right!
    return 0;
}
void mark(int a[], int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
    int b;
    int c;
    int pos;
    for(int i=0;i<n-1;i++){
        for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])(c=c^b,b=c^b,c=c^b)(c[pos],c[i]);
        }
    }
}