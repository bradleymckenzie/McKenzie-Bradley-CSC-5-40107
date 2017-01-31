/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 30, 2017
 Purpose: Template to be used in all programming projects!
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
    int SIZE=1000;
    int array[SIZE]={};//Initialize the array
    int series=22,cnt=1;//Initialize the series and the counter
   
    //Process by mapping inputs to outputs
    array[cnt-1]=series;//Initialize the first position in the array
    cout<<series<<" ";
    do{
        if(series%2){
            series=1+series+(series<<1);//3n+1
        }else{
            series>>=1;
        }
        cout<<series<<" ";
        cnt++;
        array[cnt-1]=series;
    }while(series>1);
    cout<<endl<<"Length of the series = "<<cnt<<endl;
    //Output Values
    cout<<"Output with a for-loop"<<endl;
    for(int i=0;i<cnt;i++){
        cout<<array[i]<<" ";
    }
    //Exit stage right!
    return 0;
}

