/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 17, 2017
 Purpose: Menu to be used for Homework
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

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    //Loop on the menu
    do{
        //Input Values
        cout<<"Choice from the list"<<endl;
        cout<<"Type 1 for Problem with Do-While"<<endl;
        cout<<"Type 2 for Problem with While"<<endl;
        cout<<"Type 3 for Problem wit For"<<endl;
        cin>>choice;
        //Switch to determine the Problem
        switch(choice){
            case '1':{
                    //Set the random number seed
                    srand(static_cast<unsigned int>(time(0)));
                    //Declare Variables
                    unsigned short average=0;
                    char numStd=20,student=1;
                    //Input Values
                    cout<<"This program assigns the score and output the grade for"
                            <<static_cast<int>(numStd)<<" students "<<endl;
                    //Loop for each student
                    do{
                        //Assign a grade
                        unsigned short score=rand()%50+50;
                        average+=score;
                         //Process by mapping inputs to outputs
                          char grade=(score>=90)?'A':
                               (score>=80)?'B':
                               (score>=70)?'C':
                               (score>=60)?'D':'F';
                    //Output Values
                    cout<<"Student "<<setw(2)<<static_cast<int>(student)
                            <<" has score"<<score<<" = "<<grade<<endl;
                }while(++student<=numStd);
                    //Calculate and output the average
                    average/=numStd;
                    cout<<"The average test score = "<<average<<endl;
                break;
            }
            case '2':{
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));
                //Declare Variables
                unsigned short average=0;
                char numStd=20,student=0;
                //Input Values
                cout<<"This program assigns the score and output the grade for"
                        <<static_cast<int>(numStd)<<" students "<<endl;
                //Loop for each student
                while(++student<=numStd){
                    //Assign a grade and add to the average
                    //score and grade are local to the while loop
                    unsigned short score=rand()%50+50;
                    average+=score;
                     //Process by mapping inputs to outputs
                      char grade=(score>=90)?'A':
                           (score>=80)?'B':
                           (score>=70)?'C':
                           (score>=60)?'D':'F';
                //Output Values
                cout<<"Student "<<setw(2)<<static_cast<int>(student)
                        <<" has score"<<score<<" = "<<grade<<endl;
            }
                //Calculate and output the average
                average/=numStd;
                cout<<"The average test score = "<<average<<endl;
                break;
            }
            case '3':{
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));
                //Declare Variables
                char numStd=20;
                unsigned short average=0;
                //Input Values
                cout<<"This program assigns the score and output the grade for "
                        <<static_cast<int>(numStd)<<" students "<<endl;
                //Loop for each student
                for(char student=1;student<=numStd;student++){
                    //Assign a grade and add to the average
                    //score and grade are local to the while loop
                    unsigned short score=rand()%50+50;
                    average+=score;
                     //Process by mapping inputs to outputs
                     char grade=(score>=90)?'A':
                          (score>=80)?'B':
                          (score>=70)?'C':
                          (score>=60)?'D':'F';
                //Output Values
                cout<<"Student "<<setw(2)<<static_cast<int>(student)
                        <<" has score "<<score<<" = "<<grade<<endl;
            }
                //Calculate and output the average
                average/=numStd;
                cout<<"The average test score = "<<average<<endl;
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }//end of switch
    }while(choice>='1'&& choice<='3');
    //Output Values
    
    //Exit stage right!
    return 0;
    }

