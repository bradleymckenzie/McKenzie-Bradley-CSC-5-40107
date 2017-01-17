/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 12, 2017
 Purpose: Math Tutor program using the random function.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    float number1,number2,sum,answer;
    number1 = 100 + rand() % 999;
    number2 = 100 + rand() % 999;
    sum = number1 + number2;
    //Input Values
    cout<<"This is program gives you a random math problem and your job is to"<<endl;
    cout<<"input the answer, and then it will tell you if you got the correct"<<endl;
    cout<<"answer or not."<<endl;
    cout<<setw(18)<<"  "<<number1<<endl;
    cout<<setw(18)<<"+ "<<number2<<endl;
    cout<<setw(21)<<"   -----"<<endl;
    cout<<"Enter the answer: ";
    cin>>answer;
    //Process by mapping inputs to outputs
    if(answer == sum){
        cout<<"\t------------------------------------------"<<endl;
        cout<<"\t Congratulations, your answer is correct!"<<endl;
        cout<<"\t------------------------------------------"<<endl;
    }
    else{
        cout<<"\t-------------------------------------------------------"<<endl;
        cout<<"\t That answer is incorrect. The correct answer is: "<<sum<<endl;
        cout<<"\t-------------------------------------------------------"<<endl;
    }
    //Output Values
    //Exit stage right!
    return 0;
}

