/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 6, 2017
 Purpose: Project 2
 */

//System Libraries
#include <iostream> //Standard library
#include <cstdlib>  //Random Numbers
#include <ctime>    //Time to set the seed
#include <fstream>  //File stream library
#include <iomanip>  //Format library
#include <string>   //String library
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another
const int PERCENT=100;//Calculate Wins and Losses Percentages
const int HUNDRDS=100;//Limit Number of Games 100's
const int TENS=10;//Limit Number of Games 10's
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
     float bet;//Bet Amount
     float payout;//Pay Out Result
     float wins=0;//Number of Wins
     float losses=0;//Number of Losses
     string bcolor;//Bet Color
     string rcolor;//Result Color
     unsigned int nGames=3;//Standard Number of Games
    //Input Values
     cout<<"\tDouble or Nothing\n"<<"   A Game By Bradley McKenzie\n"<<endl;
     while(in>>nGames);//Loop to end
     nGames=nGames>HUNDRDS?TENS:nGames;//Limit the number of games
     for(int game=1;game<=nGames;game++){//Loop the Game
     cout<<"Enter the Amount of Your Bet: $";
     cin>>bet;//Bet amount input
     if(bet<=0){//Not allow bet to negative or 0
         cout<<" Invalid: Bet Must be Greater Than $0."<<endl;
         cout<<" Enter the Amount of Your Bet: $";
         cin>>bet;//Bet amount input
     }
     cout<<"Place Bet On (Red or Blue): ";
     cin>>bcolor;//Bet color input
     if(bcolor != "Red" && bcolor !="red" && bcolor !="red" && bcolor !="Blue" 
        && bcolor !="blue" && bcolor !="BLUE"){
         cout<<" Invalid: Bet Color Must be (Red or Blue)"<<endl;
         cout<<" Place Bet On (Red or Blue): ";
         cin>>bcolor;//Bet color input
     }
    //Process by mapping inputs to outputs
    //Last line will be number of games from file
    //Call random number generator for the color landed on
     int lcolor=rand()%26+1;//Value from 1 to 26 //Spin Wheel
      if(lcolor % 2 == 0){//Land on Red
          if(bcolor=="Red"||bcolor=="red"||bcolor=="RED"){//Bet Won
               rcolor="Red";
               payout=bet*2;
               wins++;//Add plus one win
          }
          else if(bcolor=="Blue"||bcolor=="blue"||bcolor=="BLUE"){//Bet Loss
               rcolor="Red";
               payout=-bet;
               losses++;//Add plus one loss
          }
          else{//Invalid Input
               rcolor="Invalid: Bet Color";
          }
          //Output Game Result
          cout<<fixed<<setprecision(2);
          cout<<"  The spinner landed on: "<<rcolor<<endl;
          cout<<"  Your pay out is: $"<<payout<<endl<<endl;
          out<<"  The spinner landed on: "<<rcolor<<endl;
          out<<"  Your pay out is: $"<<payout<<endl<<endl;
      }
      else{//Land on Blue
          if(bcolor=="Blue"||bcolor=="blue"||bcolor=="BLUE"){//Bet Won
               rcolor="Blue";
               payout=bet*2;
               wins++;//Add plus one win
          }
          else if(bcolor=="Red"||bcolor=="red"||bcolor=="RED"){//Bet Loss
               rcolor="Blue";
               payout=-bet;
               losses++;//Add plus one loss
          }
          else{//Invalid Input
               rcolor="Invalid Bet Color";
               payout=0;
          }
          //Output Game Result
          cout<<fixed<<setprecision(2);
          cout<<"  The spinner landed on: "<<rcolor<<endl;
          cout<<"  Your pay out is: $"<<payout<<endl<<endl;
          out<<"  The spinner landed on: "<<rcolor<<endl;
          out<<"  Your pay out is: $"<<payout<<endl<<endl;
      }
     }
    //Output Percentage of Wins and Losses
     cout<<fixed<<setprecision(0);
     cout<<" -----------------------------"<<endl;
     cout<<"  Percentage Wins of = "
            <<static_cast<float>(PERCENT)*wins/nGames<<"%"<<endl;
     cout<<"  Percentage of Losses = "
            <<static_cast<float>(PERCENT)*losses/nGames<<"%"<<endl;
     cout<<" -----------------------------"<<endl;
     out<<" -----------------------------"<<endl;
     out<<"  Percentage of Wins = "
            <<static_cast<float>(PERCENT)*wins/nGames<<"%"<<endl;
     out<<"  Percentage of Losses = "
            <<static_cast<float>(PERCENT)*losses/nGames<<"%"<<endl;
     out<<" -----------------------------"<<endl;
    //Close Files and Exit stage right!
    in.close();
    out.close();
    return 0;
}

