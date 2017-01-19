/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 18, 2017
 Purpose: Statistics for Craps Version 2
 */

//System Libraries
#include <iostream>//Input Output library
#include <cstdlib> //Random Numbers
#include <ctime>   //Time to set the seed
#include <fstream> //File stream library
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another
const short PERCENT=100;//Percentage conversion
const int MILLION=1e6;
const int HUNTHSD=1e5;
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Instantiate and Open files
    ifstream in;
    ofstream out;
    in.open("NumberOfGames.dat");
    out.open("ResultsOfGames.dat");
    //Declare Variables
    unsigned int nGames=100000; // Number of throws for the pair of dice
    unsigned int wins=0,losses=0,maxThrw=0;
    unsigned int avgThrw=0;
    //Input the number of games
    //Last line will be number of games
    while(in>>nGames);
    nGames=nGames>MILLION?HUNTHSD:nGames;
    //Loop and take Dice statistics
    for(int game=1;game<=nGames;game++){
        //Call random number generator for the dice
        char die1=rand()%6+1;//Value from 1 to 6
        char die2=rand()%6+1;//Value from 1 to 6
        char sum=die1+die2;
        unsigned int cntThrw=1;
        avgThrw++;
        //Now determine wins or losses
        if(sum==2||sum==3||sum==12)losses++;
        else if(sum==7||sum==11)wins++;
        else{
            bool kpThrw=true;
            do{
                 die1=rand()%6+1;//Value from 1 to 6
                 die2=rand()%6+1;//Value from 1 to 6
                 avgThrw++;
                 cntThrw++;
                 char sumAgn=die1+die2;
                 if(sumAgn==7){
                     losses++;
                     kpThrw=false;
                 }else if(sumAgn==sum){
                     wins++;
                     kpThrw=false;
                 }
            }while(kpThrw);
        }
        if(maxThrw<cntThrw)maxThrw=cntThrw;
    }
    //Output Values
    out<<"The total number of Crap games played = "<<nGames<<endl;
    out<<"The total wins = "<<wins<<endl;
    out<<"The total losses = "<<losses<<endl;
    out<<"The total number of Crap games played = "<<wins+losses<<endl;
    out<<"Percentage wins = "
            <<static_cast<float>(PERCENT)*wins/nGames<<"%"<<endl;
    out<<"Percentage losses = "
            <<static_cast<float>(PERCENT)*losses/nGames<<"%"<<endl;
    out<<"Average number of throws per game = "
            <<static_cast<float>(avgThrw)/nGames<<endl;
    out<<"Maximum number of throws in a game = "<<maxThrw<<endl;
    //Exit stage right!
    in.close();
    out.close();
    return 0;
}

