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
int percRes(float, float);
void respond(float);
bool wnta(float);
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
     float sum = 0;//Total Winnings
     float pwings = 0;//Possible Wins
     float wins=0;//Number of Wins
     float losses=0;//Number of Losses
     string passwrd;//Password
     string usrname;//Username
     string bcolor;//Bet Color
     string rcolor;//Result Color
     unsigned int nGames=3;//Standard Number of Games
     
    //Input Values
     cout<<"\tDouble or Nothing"<<endl;
     cout<<"   A Game By Bradley McKenzie"<<endl<<endl;
     cout<<"Enter Username: ";
     getline(cin,usrname);//Get Username
     cout<<"Enter Password: ";
     getline(cin,passwrd);//Get Correct Password
     do{
         cout<<" Incorrect Password, Please Try Again: ";
         getline(cin, passwrd);
     }while(passwrd!="password");cout<<endl;
     
     while(in>>nGames);//Loop to end
     nGames=nGames>HUNDRDS?TENS:nGames;//Limit the number of games
     
     for(int game=1;game<=nGames;game++){//Loop the Game
         cout<<"Enter the Amount of Your Bet: $";
         cin>>bet;//Bet amount input
        while(bet<=0){//Not allow bet to negative or 0
             cout<<" Invalid: Bet Must be Greater Than $0."<<endl;
             cout<<" Enter the Amount of Your Bet: $";
             cin>>bet;//Bet amount input
         }
         cout<<"Place Bet On (Red or Blue): ";
         cin>>bcolor;//Bet color input
         if(bcolor!="Red" && bcolor!="red" && bcolor!="RED" && bcolor!="r" 
                 && bcolor != "Blue" && bcolor != "blue" && bcolor != "BLUE" 
                 && bcolor!="b"){//Validate Bet Color
             cout<<" Invalid: Bet Color Must be (Red or Blue)"<<endl;
             cout<<" Place Bet On (Red or Blue): ";
             cin>>bcolor;//Bet color input
         }
        //Process by mapping inputs to outputs
        //Last line will be number of games from file
        //Call random number generator for the color landed on
         int lcolor=rand()%26+1;//Value from 1 to 26 //Spin Wheel
          if(lcolor % 2 == 0){//Land on Red
              if(bcolor=="Red"||bcolor=="red"||bcolor=="RED"||bcolor=="r")
              {//Bet Won
                   rcolor="Red";
                   payout=bet*2;//Double Bet
                   wins++;//Add plus one win
              }
              else if(bcolor=="Blue"||bcolor=="blue"||bcolor=="BLUE"
                      ||bcolor=="b")
              {//Bet Loss
                   rcolor="Red";
                   payout=-bet;//Minus Bet
                   losses++;//Add plus one loss
              }
              else{//Invalid Input
                   rcolor="Invalid: Bet Color";
                   payout=0;
              }
              //Output Game Result for Land on Red
              cout<<fixed<<setprecision(2);
              cout<<"  The spinner landed on: "<<rcolor<<endl;
              cout<<"  Your pay out is: $"<<payout<<endl;
              out<<"  The spinner landed on: "<<rcolor<<endl;
              out<<"  Your pay out is: $"<<payout<<endl;
          }
          else{//Land on Blue
              if(bcolor=="Blue"||bcolor=="blue"||bcolor=="BLUE"||bcolor=="b"){//Bet Won
                   rcolor="Blue";
                   payout=bet*2;//Double bet
                   wins++;//Add plus one win
              }
              else if(bcolor=="Red"||bcolor=="red"||bcolor=="RED"||bcolor=="r"){//Bet Loss
                   rcolor="Blue";
                   payout=-bet;//Minus Bet
                   losses++;//Add plus one loss
              }
              else{//Invalid Input
                   rcolor="Invalid Bet Color";
                   payout=0;
              }
              
              //Output Game Result For Land on Blue
              cout<<fixed<<setprecision(2);
              cout<<"  The spinner landed on: "<<rcolor<<endl;
              cout<<"  Your pay out is: $"<<payout<<endl;
              
              out<<"  The spinner landed on: "<<rcolor<<endl;
              out<<"  Your pay out is: $"<<payout<<endl;
          }
         sum += payout;//Get Sum of Pay Out
         pwings += bet*2;//Get Sum of Bet
         cout<<"  Current Winning: $"<<sum<<endl<<endl;//Display Current Winnings
        }
     
    //Output Percentage of Wins and Losses
     cout<<fixed<<setprecision(2);
     out<<fixed<<setprecision(2);
     cout<<" -----------------------------"<<endl;
     cout<<"  Percentage Wins of = "<<percRes(wins,nGames)<<"%"<<endl;//Percent Wins
     cout<<"  Percentage of Losses = "<<percRes(losses,nGames)<<"%"<<endl;//Percent Losses
     cout<<"  Possible Winnings: $"<<pwings<<endl;//Possible Winnings
     cout<<"  Total Winning: $"<<sum<<endl;//Actual Winnings
     cout<<" -----------------------------"<<endl;
     respond(sum);//Output Result Based on Winnings
     wnta(sum);
     
     out<<" -----------------------------"<<endl;
     out<<"  Percentage of Wins = "<<percRes(wins,nGames)<<"%"<<endl;;//Percent Wins
     out<<"  Percentage of Losses = "<<percRes(losses,nGames)<<"%"<<endl;//Percent Losses
     out<<"  Possible Winnings: $"<<pwings<<endl;//Possible Winnings
     out<<"  Total Winning: $"<<sum<<endl;//Actual Winnings
     out<<" -----------------------------"<<endl;
     //out<<" "<<respond(sum)<<endl;//Output Result Based on Winnings
     
    //Close Files and Exit stage right!
     in.close();
     out.close();
     return 0;
}

int percRes(float wl, float nGames){//Calculate Wins and Loss Percentage
    return (int)(((float)PERCENT)*wl/nGames);
}

void respond(float n){
    if(n<=0){
        cout<<"    Better Luck Next Time."<<endl;
    }
    else if(5000000>n && n>0){
        cout<<"\t   Nice Job!"<<endl;
    }
    else if(n>=5000000){
        cout<<"      Quitting Your Job?"<<endl;
    }
}

bool wnta(float n){
    if(n<0){
        cout<<"Why Not Try Again?"<<endl;
    }
    return true;
}