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
int binSrch(int [], int, int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const int SIZE=200;
    const int utilize=SIZE/2;
    int array[utilize]={};
    //Input Values
    cout<<"       Binear Program"<<endl;
    cout<<"-----------------------------";
    filAray(array, utilize);
    prntAry(array, utilize,10);
    cout<<"-----------------------------";
    //Process by mapping inputs to outputs
    markSrt(array,utilize);
    //Find the Element
    int find;
    cout<<"-----------------------------"<<endl;
    cout<<"What Value to Find? Type a Number Between 10 and 99: ";
    cin>>find;
    cout<<find<<" was found at "<<binSrch(array,utilize,find)<<endl;
    //Output Values
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
void markSrt(int a[], int n){
     for(int i=0;i<n-1;i++){
        smalst(a,n,i);
    }
}
int binSrch(int a[], int n, int val){
    //Declare Variables
    int beg=0,middle,end=n-1;
    //Loop Until Found
    do{
        middle=(beg+end)/2;
        if(a[middle]==val)return middle;
        if(a[middle]<val){
            beg=middle+1;
        }else{
            end=middle-1;
        }
    }while(beg<=end);
    return -1;
}