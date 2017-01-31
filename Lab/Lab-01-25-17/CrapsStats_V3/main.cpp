/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 25, 2017
 Purpose: Statistics for Craps Version 3 -Final Version
 */

//System Libraries
#include <iostream>//Input Output library
#include <cstdlib>  //Random Numbers
#include <ctime>    //Time to set the seed
#include <fstream>  //File stream library
#include <iomanip>  //Formate library
using namespace std;//Namespace std of system libraries

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another
const short PERCENT=100;//Percentage conversion
const int MILLION=1e6;
const int HUNTHSD=1e5;
//Function Prototypes

//Main -> Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Instantiate and Open files
    ifstream in;
    ofstream out;
    in.open("NumberOfGames.dat");
    out.open("ResultsOfGames.dat");
    //Declare Variables and Initialize
    unsigned int nGames=100000; //Number of throws for the pair of dice
    unsigned int wins=0,losses=0,maxThrw=0;//Counter/indicators
    unsigned int avgThrw=0;//Average number of Throws per game
    //Input the number of games
    //Last line will be number of games from file
    while(in>>nGames);//Loop to end
    nGames=nGames>MILLION?HUNTHSD:nGames;//Limit the number of games
    //Play the game by -> Looping and take Dice statistics
    for(int game=1;game<=nGames;game++){
        //Call random number generator for the dice
        char die1=rand()%6+1;//Value from 1 to 6
        char die2=rand()%6+1;//Value from 1 to 6
        char sum=die1+die2;  //Sum the dice
        unsigned int cntThrw=1;//Initialize the game throw count
        avgThrw++;//Increment the average throw counter
        //Now determine wins or losses
        if(sum==2||sum==3||sum==12)losses++;//2,3,12 is a win
        else if(sum==7||sum==11)wins++;//7,11 is a loss
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
    out<<fixed<<setprecision(2)<<showpoint;
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

