/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 17, 2017
 Purpose: Assignment 4 Menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <iomanip>//Format Layout
#include <cstdlib>//Random number generator
#include <ctime> //Set seed time
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    //Loop on the menu
    do{
        //Input Values
        cout<<"Gaddis 8th Edition Chapter 5 Problems"<<endl;
        cout<<"  Type 1 for Problem 1"<<endl;
        cout<<"  Type 2 for Problem 2"<<endl;
        cout<<"  Type 3 for Problem 3"<<endl;
        cout<<"  Type 4 for Problem 4"<<endl;
        cout<<"  Type 5 for Problem 5"<<endl;
        cout<<"  Type 6 for Problem 6"<<endl;
        cout<<"  Type 7 for Problem 7"<<endl;
        cout<<"  Type 8 for Problem 13"<<endl;
        cout<<"  Type 9 for Problem 23"<<endl;
        cin>>choice;
        //Switch to determine the Problem
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob2();break;}
            case '3':{prob3();break;}
            case '4':{prob4();break;}
            case '5':{prob5();break;}
            case '6':{prob6();break;}
            case '7':{prob7();break;}
            case '8':{prob8();break;}
            case '9':{prob9();break;}
            default:
                cout<<"You are exiting the program"<<endl;
        }//end of switch
    }while(choice>='1'&& choice<='9');
    //Output Values
    
    //Exit stage right!
    return 0;
    }
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 1 **********************************
//Description: What is the process, i.e. mapping from inputs to outputs
//Inputs:  Datatype, Range/Validity, Units, Description
//Outputs: Datatype, Range/Validity, Units, Description
//******************************************************************************
void prob1(){
    cout<<"\t\tYou are in Problem 1"<<endl;
    //Declare Variables
    float sum = 0;
    float num;
    
    //Input Values
    cout<<"This program will calculate the sum of all positive integers"<<endl;
    cout<<"to the inputed number."<<endl;
    cout<<"Enter a number greater than 0."<<endl;
    cin>>num;
    //Loop for
    for(float counter = 0;counter <= num;counter++){
        sum = sum + num;
        counter++;
    }
    if(num < 1){ //identifies a invalid input
        cout<<num<<" is a invalid input."<<endl;
        cout<<"The program will now end."<<endl<<endl;
    }
    else //output sum
        cout<<"\tThe sum of numbers 1 - "<<num<<" "<<"is "<<sum<<endl<<endl;
}

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 2 **********************************
//Description: What is the process, i.e. mapping from inputs to outputs
//Inputs:  Datatype, Range/Validity, Units, Description
//Outputs: Datatype, Range/Validity, Units, Description
//******************************************************************************

void prob2(){
    cout<<"\t\tYou are in Problem 2"<<endl;
    //Input Values
    cout<<"This program displays ASCII Code from 32 to 127."<<endl;
    //for loop print 32 to 127
	for (int i = 32; i < 127; i++)
	{
		cout<<(char)i<<" ";
		if (i % 16 == 0)
		cout<<endl;
	}
    cout<<endl<<endl;
}
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 3 **********************************
//Description: What is the process, i.e. mapping from inputs to outputs
//Inputs:  Datatype, Range/Validity, Units, Description
//Outputs: Datatype, Range/Validity, Units, Description
//******************************************************************************
void prob3(){
    cout<<"\t\tYou are in Problem 3"<<endl;
    //Declare Variables
    int years = 25;//max value to display
    float milli = 1.5;//rising level
    //Input Values
    cout<<"This program displays ocean level is rising 1.5 millimeter"<<endl;
    cout<<"per year for the next 25 years."<<endl<<endl;
    //Loop for
    for(float counter = 1;counter <= years;counter++){
        cout<<"   For year "<<setw(2)<<counter<<" "<<"the ocean level will be "
                <<(counter * milli)<<" millimeter."<<endl;
    }
    cout<<endl;
}
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 4 **********************************
//Description: What is the process, i.e. mapping from inputs to outputs
//Inputs:  Datatype, Range/Validity, Units, Description
//Outputs: Datatype, Range/Validity, Units, Description
//******************************************************************************
void prob4(){
    cout<<"\t\tYou are in Problem 4"<<endl;
     //Declare Variables
    int minutes = 30;//max time on treadmill
    float cal = 3.6;//calories burned per minute
    //Input Values
    cout<<"This program displays the number of calories burned on the treadmill"<<endl;
    cout<<"for the following times."<<endl;
    cout<<"\t-----------------------------------------"<<endl;
    //Loop for each minute 
    for(float counter = 1;counter <= minutes;counter++){
        cout<<"\tFor "<<setw(2)<<counter<<" minutes you burned "
                <<(counter * cal)<<" calories."<<endl;
    }
    //Process by mapping inputs to outputs
     
    //Output Values
    cout<<"\t-----------------------------------------"<<endl<<endl;
}
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 5 **********************************
//Description: What is the process, i.e. mapping from inputs to outputs
//Inputs:  Datatype, Range/Validity, Units, Description
//Outputs: Datatype, Range/Validity, Units, Description
//******************************************************************************
void prob5(){
    cout<<"\t\tYou are in Problem 5"<<endl;
     //Declare Variables
    int years = 6;//max time on treadmill
    float memship = 2500; //current price
    float incrse = .04;//calories burned per minute
    //Input Values
    cout<<"This program displays cost of the membership of country club"<<endl;
    cout<<"for the next six years if the membership cost is increase by"<<endl;
    cout<<"4% each year."<<endl;
    cout<<" ------------------------------------------------------------------"<<endl<<endl;
    //Loop for each minute 
    cout<<fixed<<setprecision(2);
    for(int i = 1;i <= years;i++){
        memship = memship + (memship * incrse);
        cout<<"    For year"<<setw(2)<<i<<" the price of the country "
                <<"club membership will be:"<<endl;
        cout<<"\t$"<<memship<<" dollars."<<endl<<endl;
    }
    //Process by mapping inputs to outputs
     
    //Output Values
    cout<<" -----------------------------------------------------------------"
            <<endl<<endl;
}
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 6 **********************************
//Description: What is the process, i.e. mapping from inputs to outputs
//Inputs:  Datatype, Range/Validity, Units, Description
//Outputs: Datatype, Range/Validity, Units, Description
//******************************************************************************
void prob6(){
    cout<<"\t\tYou are in Problem 6"<<endl;
    //Declare Variables
    float speed;//speed of car
    float hours;//hours travel
                 //distance travel each hour
    //Input Values
    cout<<"This program calculates the distance travel each hour"<<endl;
    cout<<"when inputed travel speed and the numbers of hours traveled."<<endl;
    cout<<"4% each year."<<endl;
    cout<<"What is the speed of the vehicle in mph?"<<endl;
    cin>>speed;
    cout<<"How many hours has it traveled?"<<endl;
    cin>>hours;;
    //Loop for each minute 
    cout<<fixed<<setprecision(0);
    cout<<"    ----------------------------"<<endl;
    cout<<"     Hours    Distance Traveled"<<endl;
    for(int i = 1;i <= hours;i++){
       cout << setw(8) << i << setw(16) << i*speed << endl;
     }
    cout<<endl;
}
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 7 **********************************
//Description: What is the process, i.e. mapping from inputs to outputs
//Inputs:  Datatype, Range/Validity, Units, Description
//Outputs: Datatype, Range/Validity, Units, Description
//******************************************************************************
void prob7(){
    cout<<"\t\tYou are in Problem 7"<<endl;
    //Declare Variables
    int days;//user input
    float money = 1.0;
    float total = 0.0;
    float dayPay = 0.0;
    //Input Values
    cout<<"This program calculates much a person would earn over a period"<<endl;
    cout<<"of time if a person's salary is one penny the first day and then"<<endl;
    cout<<"two pennies the second day and continues to double each day."<<endl;
    cout<<"Enter number of days worked: ";
    cin>>days;
    //Loop for each minute 
    while (days < 1)
    {
             cout<<" The number of days you enter is not valid"<<endl;
             cout<<"Enter number of days worked: ";
             cin>>days;
             days++;
    }
    for (int i = 1; i <= days; i++)
    {   dayPay = money/100;
        cout<<fixed<<setprecision(2);
        cout<<" Day "<<setw(2)<<i<<" you would earn $"<<dayPay<<endl;
        total += dayPay;
        money *= 2;
    }
    cout<<endl;
}
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 8 **********************************
//Description: What is the process, i.e. mapping from inputs to outputs
//Inputs:  Datatype, Range/Validity, Units, Description
//Outputs: Datatype, Range/Validity, Units, Description
//******************************************************************************
void prob8(){
    cout<<"\t\tYou are in Problem 8"<<endl;
    //Declare Variables
    int greatest = 0;
    int smallest = 0;
    int value = 0;
    //Input Values
    cout<<"This program displays the largest and smallest numbers in order"<<endl;
    cout<<"with integers entered by the user. If you would like to stop the"<<endl;
    cout<<"string enter -99"<<endl;
    //Loop
    while (value != -99)
    {
        cout<<"\t  Enter a integer: ";
        cin>>value;
        if (value > greatest && value != -99)
        {
            greatest = value;
        }
        if (value < smallest && value != -99)
        {
            smallest = value;
        }
    }
    //Process by mapping inputs to outputs
     
    //Output Values
    cout<<" --------------------------------------"<<endl;
    cout<<"  The greatest value entered was: "<<greatest<<endl;
    cout<<"  The smallest value entered was: "<<smallest<<endl;
    cout<<" --------------------------------------"<<endl<<endl;
}
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 9 **********************************
//Description: What is the process, i.e. mapping from inputs to outputs
//Inputs:  Datatype, Range/Validity, Units, Description
//Outputs: Datatype, Range/Validity, Units, Description
//******************************************************************************
void prob9(){
    cout<<"\t\tYou are in Problem 9"<<endl;
    //Declare Variables
    
    //Input Values
    cout<<"This program displays two patterns using a loop."<<endl;
    cout<<"-Pattern A"<<endl;
    for(int r = 0; r < 10; r++)//triangle 1
    {
        for(int c = 0; c<=r; c++)
        {
            cout<<"+";
        }
        cout<<endl;
    }
    cout<<"-Pattern B"<<endl;
    
    for(int r = 10; r > 0; r--)//triangle 2
    {
        for(int c = 0; c < r; c++)
        {
            cout<<"+";
        }
        cout<<endl;
    }
}