/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 18, 2017
 Purpose: Statistics for Throwing 2 Dice
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random Numbers
#include <ctime>   //Time to set the seed
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
    unsigned int nThrows=36000; // Number of throws for the pair of dice
    unsigned int n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n10=0,n11=0,n12=0;
    //Loop and take Dice statistics
    for(int toss=1;toss<=nThrows;toss++){
        //Call random number generator for the dice
        char die1=rand()%6+1;//Value from 1 to 6
        char die2=rand()%6+1;//Value from 1 to 6
        char sum=die1+die2;
        switch(sum){
            case 2:n2++;break;
            case 3:n3++;break;
            case 4:n4++;break;
            case 5:n5++;break;
            case 6:n6++;break;
            case 7:n7++;break;
            case 8:n8++;break;
            case 9:n9++;break;
            case 10:n10++;break;
            case 11:n11++;break;
            case 12:n12++;break;
            default: cout<<"You are in error"<<endl;
        }
    }
    //Output Values
    cout<<"\t----- Dice Statistics -----"<<endl;
    cout<<"\t  2 was throw "<<n2<<" time"<<endl;
    cout<<"\t  3 was throw "<<n3<<" time"<<endl;
    cout<<"\t  4 was throw "<<n4<<" time"<<endl;
    cout<<"\t  5 was throw "<<n5<<" time"<<endl;
    cout<<"\t  6 was throw "<<n6<<" time"<<endl;
    cout<<"\t  7 was throw "<<n7<<" time"<<endl;
    cout<<"\t  8 was throw "<<n8<<" time"<<endl;
    cout<<"\t  9 was throw "<<n9<<" time"<<endl;
    cout<<"\t  10 was throw "<<n10<<" time"<<endl;
    cout<<"\t  11 was throw "<<n11<<" time"<<endl;
    cout<<"\t  12 was throw "<<n12<<" time"<<endl;
    cout<<"\t The total throws = "<<(n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12)<<endl;
    cout<<"\t The total throws = "<<nThrows<<endl;
    //Exit stage right!
    return 0;
}

