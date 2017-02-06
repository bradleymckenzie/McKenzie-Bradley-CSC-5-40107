/*
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 6, 2017
 Purpose: Payroll
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
    const int SIZE=20;//Constant integer defining array size
    char key[SIZE]={'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D',
        'C','C','A','D','B'};//Answer key
    char answers[SIZE];//Student answers
    int correct=0;
    
    //Input values
    cout<<" --------------------------------------------"<<endl;
    cout<<"            Driver's License Exam"<<endl;
    cout<<" --------------------------------------------"<<endl;
    //Loop to obtain answers
    for(int ans=0;ans<=SIZE-1;ans++){
        cout<<"     Enter Your Answer for Question "<<ans+1<<": ";
        cin>>answers[ans];
        while(answers[ans]!='A'&&answers[ans]!='B'&&answers[ans]!='C'&&
                answers[ans]!='D'){
            cout<<"    Invalid: Enter A, B, C, or D: ";
            cin>>answers[ans];
        }
    }
    //Process by mapping inputs to outputs
    for(int i=0;i<=SIZE-1;i++){
        if(answers[i]==key[i]){
            correct++;
        }
    }
    //Output Values
    cout<<" -----------------------------------------------"<<endl;
    if(correct>=15){
        cout<<"       Your Score: "<<correct<<" Out of 20. You Passed."<<endl;
    }
    else cout<<"      Your Score: "<<correct<<" Out of 20. You Failed."<<endl;
    cout<<" -----------------------------------------------"<<endl;
    //Exit stage right!
    return 0;
}
