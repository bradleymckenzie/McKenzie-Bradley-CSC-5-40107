/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 1, 2017
 Purpose: Calculate the Average of the Highest Four Scores
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void getScore(int &);
void calcAverage(int[5]);
int findLowest(int[5]);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int score[5];
    //Input Values
    cout<<"\t --------------------------------------"<<endl;
    cout<<"\t\t   Lowest Score Drop"<<endl;
    cout<<"\t --------------------------------------"<<endl;
    //Call getScore function for each of the five scores
    getScore(score[0]);
    getScore(score[1]);
    getScore(score[2]);
    getScore(score[3]);
    getScore(score[4]);
    //Process by mapping inputs to outputs

    //Output Values
    cout<<fixed<<setprecision(0);
    cout<<"    -------------------------------------------------"<<endl;
    calcAverage(score);
    cout<<"    -------------------------------------------------"<<endl;
    //Exit stage right!
    return 0;
}
void getScore(int &score)
{
    do{
        cout<<"                 Enter a test score: ";
        cin>>score;
        if (score < 0 || score > 100){
            cout<<"Invalid test score!"<<endl;
            cout<<"Test score must be greater than 0 and less than 100."<<endl;
        }
    }while(score < 0 || score > 100);
}

void calcAverage(int score[5])
{
    unsigned int lowest;//Lowest test score
    float Avg;// Average of the four highest test scores
    float amount=0;
    // Call function findLowest
    lowest = findLowest(score);

    // Calculate average of four highest test scores
    for(int i=0;i<5;i++){
        amount+=score[i];
    }
    //Drop lowest
    amount-=score[lowest];
    //Display average
    Avg=amount/4;
    cout<<"      The average of the four highest scores is "<<Avg<<"%"<<endl;
}

int findLowest(int score[5]){
    int lowestIndex=0;
    for(int i=0;i<5;i++){
        if(score[i]<score[lowestIndex]){
        lowestIndex=i;
        }
    }
    return lowestIndex;
}