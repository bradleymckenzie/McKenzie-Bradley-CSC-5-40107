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
void disHi();
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
     srand(static_cast<unsigned int>(time(0)));
     
    //Instantiate and Open files
     ifstream in;
     ofstream out;
     ofstream hi;
     in.open("NumberOfGames.dat");//Input Number of Games
     out.open("ResultsOfGames.dat");//Output Result of Games
     hi.open("HighScoreOfGames.dat",ios::app);//Output Score to a List
    //Declare Variables
     float bet;//Bet Amount
     float payout;//Pay Out Result
     float sum = 0;//Total Winnings
     float pwings = 0;//Possible Wins
     float wins=0;//Number of Wins
     float losses=0;//Number of Losses
     string van[2][1]={{" Thank You, for Playing"},{"A Game By Bradley McKenzie"}};//Initialize the 2-D Array
     string passwrd;//Password
     string usrname;//Username
     string bcolor;//Bet Color
     string rcolor;//Result Color
     string vcolor[8]={"Red","red","RED","r","Blue","blue", "BLUE","b"};
     
     unsigned int nGames=3;//Standard Number of Games
     
    //Input Values
     cout<<"       Double or Nothing"<<endl;
     cout<<"   A Game By Bradley McKenzie"<<endl<<endl;
     cout<<"Enter Username: ";
     getline(cin,usrname);//Get Username
     do{
         cout<<"Enter Password: ";
         getline(cin,passwrd);//Get Correct Password
         if(passwrd!="password")
           cout<<" Incorrect Password, Please Try Again: ";
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
         //input validation loop
         cout<<"Place Bet On (Red or Blue): ";
         cin>>bcolor;//Bet color input
         bool valid = false;
         for(int i=0;i<8 && !valid ;i++){
             if (bcolor == vcolor[i]) valid = true;
         }
         //if !valid, then output invalid message and get cin>>color again
         if(!valid){//Validate Bet Color
             cout<<" Invalid: Bet Color Must be (Red or Blue)"<<endl;
             cout<<" Place Bet On (Red or Blue): ";
             cin>>bcolor;//Bet color input
         }
         //end input validation loop
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
     if(sum>=0){//Output Username and Total Winnings if Winnings is > 0
         hi<<"Username: "<<usrname<<" || Total Winnings: $"<<sum<<"\r\n";
     }
    hi.close();
    
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
     cout<<"  Show High Score (Y or N): ";
     disHi();
     out<<" -----------------------------"<<endl;
     out<<"  Percentage of Wins = "<<percRes(wins,nGames)<<"%"<<endl;//Percent Wins
     out<<"  Percentage of Losses = "<<percRes(losses,nGames)<<"%"<<endl;//Percent Losses
     out<<"  Possible Winnings: $"<<pwings<<endl;//Possible Winnings
     out<<"  Total Winning: $"<<sum<<endl;//Actual Winnings
     out<<" -----------------------------"<<endl;
     
     for(int row=0; row<2; row++){
         for(int col=0;col<1;col++){
             cout<<"   "<<van[row][col];
         }
         cout<<endl;
     }
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
        cout<<"     Better Luck Next Time."<<endl;
    }
    else if(5000000>n && n>0){
        cout<<"\t   Nice Job!"<<endl;
    }
    else if(n>=5000000){
        cout<<"      Quitting Your Job?"<<endl;
    }
}

bool wnta(float n){
    if(n<=0){
        cout<<"      Why Not Try Again?"<<endl;
    }
    return true;
}
void disHi(){
    string in;
    char openHi;
    cin>>openHi;
    if(openHi=='Y'){
        ifstream inFile("HighScoreOfGames.dat");
        if(inFile){
            while(!inFile.eof() ){
                //inFile>>in;
                getline(inFile, in);
                cout<<in<<endl;
            }
        }
    }
    else{
        exit(0);
    }
}