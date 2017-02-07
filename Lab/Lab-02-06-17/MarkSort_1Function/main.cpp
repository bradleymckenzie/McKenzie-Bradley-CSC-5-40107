/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 6, 2017
 Purpose: Mark Sorting One Function
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
void markSrt(int[], int);
void swap(int &, int &);
void smalst(int[], int, int);
void mrkSrt3(int[], int);
void copy(int[], int[], int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const int SIZE=10000;
    const int utilize=SIZE/2;
    int array[utilize]={};
    int brray[utilize]={};
    //Input Values
    cout<<"-----------------------------"<<endl;
    cout<<"       Sorting Program"<<endl;
    cout<<"-----------------------------";
    filAray(array, utilize);
    copy(array, brray, utilize);
    prntAry(array, utilize,10);
    prntAry(brray, utilize,10);
    cout<<"-----------------------------"<<endl;
    //Process by mapping inputs to outputs
    unsigned int bega=static_cast<unsigned int>(time(0));
    markSrt(array,utilize);
    unsigned int enda=static_cast<unsigned int>(time(0));
    cout<<"     One Function Sort"<<endl;
    cout<<"     Total Time = "<<enda-bega<<" sec."<<endl;
    //Process by mapping inputs to outputs
    unsigned int begb=static_cast<unsigned int>(time(0));
    mrkSrt3(brray,utilize);
    unsigned int endb=static_cast<unsigned int>(time(0));
    cout<<"-----------------------------"<<endl;
    cout<<"     Three Function Sort"<<endl;
    cout<<"     Total Time = "<<endb-begb<<" sec."<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"     Time saving is = "<<(1.0f*(endb-begb)/(enda-bega)-1)*100<<"%"
            <<endl;
    //Output Values
    prntAry(array, utilize,10);
    prntAry(brray, utilize,10);
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

void markSrt(int a[], int n){
     for(int j=0;j<n-1;j++){
         for(int i=j+1;i<n;i++){
             if(a[j]>a[i]){
                 a[j]=a[j]^a[i];
                 a[i]=a[j]^a[i];
                 a[j]=a[j]^a[i];
            }
        }
    }
}

void swap(int &a, int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void smalst(int a[], int n, int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

void mrkSrt3(int a[], int n){
     for(int i=0;i<n-1;i++){
        smalst(a,n,i);
    }
}

void copy(int a[], int b[], int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}