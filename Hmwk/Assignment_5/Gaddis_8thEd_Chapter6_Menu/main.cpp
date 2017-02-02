/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 17, 2017
 Purpose: Menu Sample for Homework
 */

//System Libraries
#include <iostream>//Input Output Library
#include <iomanip>//Format Layout
#include <cstdlib>//Random number generator
#include <ctime> //Set seed time
#include <cmath>//For pow
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void prob1();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();
void prob11();
//Function Prototypes for Each Problem
float calculateRetail(float,float);
float getSales();
void findHighest(float, float, float, float);
float getNumAccidents();
void findLowest(float, float, float, float, float);
float fallingDistance(int);
float kineticEnergy(float,float);
float celsius(float);
int coinToss();
float presentValue(float, float, int);
float futureValue(float, float, int);
void getScore(int &);
void calcAverage(int[5]);
int findLowest(int[5]);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    char choice;
    //Loop on the menu
    do{
        //Input Values
        cout<<"Gaddis 8th Edition Chapter 6 Problems"<<endl;
        cout<<"  Type A for Problem 1"<<endl;
        cout<<"  Type B for Problem 3"<<endl;
        cout<<"  Type C for Problem 4"<<endl;
        cout<<"  Type D for Problem 5"<<endl;
        cout<<"  Type E for Problem 6"<<endl;
        cout<<"  Type F for Problem 7"<<endl;
        cout<<"  Type G for Problem 8"<<endl;
        cout<<"  Type H for Problem 9"<<endl;
        cout<<"  Type I for Problem 10"<<endl;
        cout<<"  Type J for Problem 11"<<endl;
        cin>>choice;
        //Switch to determine the Problem
        switch(choice){
            case 'A': case 'a':{prob1();break;}
            case 'B': case 'b':{prob3();break;}
            case 'C': case 'c':{prob4();break;}
            case 'D': case 'd':{prob5();break;}
            case 'E': case 'e':{prob6();break;}
            case 'F': case 'f':{prob7();break;}
            case 'G': case 'g':{prob8();break;}
            case 'H': case 'h':{prob9();break;}
            case 'I': case 'i':{prob10();break;}
            case 'J': case 'j':{prob11();break;}
            default:
                cout<<"You are exiting the program"<<endl;
        }//end of switch
    }while( (choice>='A'&& choice<='J') || (choice>='a'&& choice<='j') );
    //Output Values
    
    //Exit stage right!
    return 0;
    }
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 1 **********************************
//Description: Calculate a item’s retail price using a function
//Inputs:  Wholesale cost and markup price.
//Outputs: Retail price
//******************************************************************************
void prob1(){
    cout<<"\t\tYou are in Problem 1"<<endl;
    //Declare Variables
    float wsale,markup,totPrce;
    
    //Input Values
    cout<<"This program calculate a item’s retail price, when user to enter"<<endl;
    cout<<"an item’s wholesale cost and its markup percentage."<<endl;
    cout<<"Enter the the item's wholesale cost."<<endl;
    cin>>wsale;
    cout<<"Enter the the item's markup percentage."<<endl;
    cin>>markup;
    //Process by mapping inputs to outputs
    while(wsale < 0 || markup < 0){//Output for when a negative number is inputted
        cout<<"  Please enter non-negative number for the wholesale and the"<<endl;
        cout<<"  markup percentage."<<endl;
        cout<<"Enter the the item's wholesale cost."<<endl;
        cin>>wsale;
        cout<<"Enter the the item's markup percentage."<<endl;
        cin>>markup;
    }
    //Output Values
    cout<<" ---------------------------------------------------------------"<<endl;
    cout<<"  If an item’s wholesale cost is $"<<wsale<<" and its markup percentage"<<endl; 
    cout<<"  is "<<markup<<"%, then the item's retail price is $"<<calculateRetail(wsale,markup)<<"."<<endl;
    cout<<" ---------------------------------------------------------------"<<endl;
    //Exit stage right!
    
}
    float calculateRetail(float cost,float percent){//calculate the retail price.
    float totCost = 0;
    totCost = ((cost/100)*percent) + cost;
    return totCost;
}
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 3 **********************************
//Description:  Determine which of a company’s four divisions had the greatest
//              sales for a quarter.
//Inputs:  Sales for each Division.
//Outputs: Division with the Highest Amount of Sales
//******************************************************************************
void prob3(){
    cout<<"\t    You are in Problem 3"<<endl;
    //Declare Variables
    float ne,se,nw,sw;
    
    //Process by mapping inputs to outputs
  
    //Output Values
    cout<<" -----------------------------------------"<<endl;
    cout<<"\tWinning Division Calculator"<<endl;
    cout<<" -----------------------------------------"<<endl;
    cout<<"Northeast Division: "<<endl;
    ne=getSales();//Input Value
    cout<<"Southeast Division: "<<endl;
    se=getSales();//Input Value
    cout<<"Northwest Division: "<<endl;
    nw=getSales();//Input Value
    cout<<"Southwest Division: "<<endl;
    sw=getSales();//Input Value
    findHighest(ne, se, nw, sw);
}
float getSales(){//get division's quarterly sales figure
    float sales;
	 cout<<" What is the sales for this division? ";
	 cin>>sales;
         cout<<endl;
	 if(sales < 0){
             cout<<" Error: Only enter sale figures above zero" << endl;
             exit(0);
         }
         return sales;
}
void findHighest(float ne,float se,float nw, float sw){//determine which division as the most sales
    cout<<" ------------------------------------------"<<endl;
    cout<<"  The division with the greatest sales for"<<endl;
    
    if (ne > se && ne > nw && ne > sw){
        cout<<"  the quarter is the Northeast division."<<endl;
    }
    else if (se > ne && se > nw && se > sw){
        cout<<"  the quarter is the Southeast division."<<endl;
    }
    else if (nw > ne && nw > se && nw > sw){
        cout<<"  the quarter is the Northwest division."<<endl;
    }
    else if (sw > ne && sw > se && sw > nw){
        cout<<"  the quarter is the Southwest division."<<endl;
    }
    else if(ne==se && ne==sw && ne==nw){
        cout<<"  nobody, it was a tie."<<endl;
    }
    cout<<" ------------------------------------------"<<endl; 
}

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 4 **********************************
//Description:  Determines which of five geographic regions within a major city
//              had the fewest reported automobile accidents last year.
//Inputs:  Number of Accidents for each Region.
//Outputs: How had the Least Amount of Accidents out of the 5.
//******************************************************************************
void prob4(){
    cout<<"\t\t You are in Problem 4"<<endl;
    //Declare Variables
    float north,south,east,west,centrl;
    
    //Process by mapping inputs to outputs
  
    //Output Values
    cout<<" ----------------------------------------------------"<<endl;
    cout<<"\t Fewest Reported Automobile Accidents"<<endl;
    cout<<" ----------------------------------------------------"<<endl;
    cout<<"North Region: "<<endl;
    north=getNumAccidents();//Input Value
    cout<<"South Region: "<<endl;
    south=getNumAccidents();//Input Value
    cout<<"East Region: "<<endl;
    east=getNumAccidents();//Input Value
    cout<<"West Region: "<<endl;
    west=getNumAccidents();//Input Value
    cout<<"Central Region: "<<endl;
    centrl=getNumAccidents();//Input Value
    findLowest(north,south,east,west,centrl);
}
float getNumAccidents(){//get division's quarterly sales figure
    float reports;
        cout<<" How many accidents where reported last year for this region? ";
        cin>>reports;
        cout<<endl;
        if(reports < 0){
            cout<<" Error: Impossible input, must be greater than 0."<<endl;
            exit(0);
         }
        return reports;
}
void findLowest(float north,float south,float east, float west, float centrl){
    cout<<" -----------------------------------------------"<<endl;
    cout<<"  The region with the least amount of accidents"<<endl;
    
    if(north < south && north < west && north < east && north < centrl){
        cout<<"  last year is the North region."<<endl;
    }
    else if(south < north && south < east && south < west && south < centrl){
        cout<<"  last year is the South region."<<endl;
    }
    else if(east < north && east < south && east < west && east < centrl){
        cout<<"  last year is the East region."<<endl;
    }
    else if(west < north && west < south && west < east && west < centrl){
        cout<<"  last year is the West region."<<endl;
    }
    else if(centrl < north && centrl < south && centrl < west && centrl < east){
        cout<<"  last year is the Central region."<<endl;
    }
     else if(centrl == north && centrl == south && west == centrl && centrl == east){
        cout<<"  nobody, it was a tie."<<endl;
    }
    cout<<" -----------------------------------------------"<<endl;
}

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 5 **********************************
//Description: Falling Distance Calculator - Time Intervals
//Inputs:  -
//Outputs: 1 - 20 seconds and the distance for each second.
//******************************************************************************
void prob5(){
    cout<<"\t\t  You are in Problem 5"<<endl;
    //Input Values
    cout<<"\t --------------------------------------"<<endl;
    cout<<setw(38)<<"Falling Distance 1-10"<<endl;
    cout<<"\t --------------------------------------"<<endl;
    //Process by mapping inputs to outputs
    
    //Output Values
    cout<<fixed<<setprecision(2);
    cout<<" --------------------------------------------------------"<<endl;
    cout<<setw(23)<<"Time\t   "<<"       Distance"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    for (int t=1;t<=10;t++)
    {
        cout<<"\t      "<<t<<" sec\t"<<setw(15)<<fallingDistance(t)<<" m/s"<<endl;
    }
    cout<<" --------------------------------------------------------"<<endl;
}
    float fallingDistance(int time)
    {
        return .5 * 9.8 * pow(time, 2);
    }

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 6 **********************************
//Description: Kinetic Energy Calculator
//Inputs:  Mass and Velocity.
//Outputs: Kinetic Energy in joules.
//******************************************************************************
void prob6(){
    cout<<"\t\t  You are in Problem 6"<<endl;
     //Declare Variables
    float mass,velo;//Mass and Velocity
    float answer;
    //Input Values
    cout<<"\t --------------------------------------"<<endl;
    cout<<"\t\tKinetic Energy Calculator"<<endl;
    cout<<"\t --------------------------------------"<<endl;
    cout<<"  Enter the object's mass (in kilograms): ";
    cin>>mass;
    cout<<"  Enter the object's velocity (in meters per second): ";
    cin>>velo;
    //Process by mapping inputs to outputs
    answer = kineticEnergy(mass,velo);
    //Output Values
    cout<<fixed<<setprecision(2);
    cout<<" --------------------------------------------------------"<<endl;
    cout<<"  The kinetic energy of this object is: "<<answer<<" joules."<<endl;
    cout<<" --------------------------------------------------------"<<endl;
}
    float kineticEnergy(float mass, float velo)
    {   
        return .5 * mass * pow(velo, 2);
    }
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 7 **********************************
//Description:  Convert 0 to 20 Fahrenheit to Celsius
//Inputs:  -
//Outputs:  0 to 20 Fahrenheit equal to Celsius.
//******************************************************************************
void prob7(){
    cout<<"\t\t     You are in Problem 7"<<endl;
    //Declare Variables
    float c=0.0f;
    //Input Values
    cout<<"----------------------------------------------------------\n";
    cout<<"\t\t  Celsius Temperature Table"<<endl;
    cout<<"\t\t\t   0 to 20"<<endl;
    cout<<"----------------------------------------------------------\n";
    for(int i=0; i<21; i++){
        c=celsius(i);
        cout<<" "<<setw(2)<<i<<" degrees Fahrenheit equals to "<<c
                <<" degrees Celsius"<<endl;
    }
    cout<<"----------------------------------------------------------\n";
    //Process by mapping inputs to outputs
    
    //Output Values
    
}
    float celsius(float f)
    {
        float c=0.0f;
        c=(5.0/9)*(f-32);
        return c;
    }

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 8 **********************************
//Description: Coin Toss
//Inputs:  Number of Coin Toss.
//Outputs: Head or Tails with nToss.
//******************************************************************************
void prob8(){
    cout<<"\t  You are in Problem 8"<<endl;
    //Declare Variables
     int flips,land;
     string result;
    //Input Values
     cout<<"How many times the coin should be tossed?"<<endl;
     cin>>flips;
     cout<<"The coin landed on:"<<endl;
     for(int i=1;i<=flips;i++){
     land=coinToss();
     if(land==1){
         result="- heads";
     }
     else if(land==2){
        result="- tails";
     }
     cout<<" "<<result<<endl;
   }
    //Process by mapping inputs to outputs
    
    //Output Values
     
}
    int coinToss(){ 
    //Declare Variable
        unsigned int flip;
    //Flip coin
        flip=rand()%2+1;
    //Return
        return flip;
    }

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 9 **********************************
//Description: Present Value Calculator
//Inputs:  Future Amount Wanted, Annual Rate, Years to Save For.
//Outputs: Amount need in Account to Reach your Goal.
//******************************************************************************
void prob9(){
    cout<<"\t\t  You are in Problem 9"<<endl;
    //Declare Variables
    float pValue,fValue,aiRate;
    int years;
    //Input Values
    cout<<"\t --------------------------------------"<<endl;
    cout<<"\t\tPresent Value Calculator"<<endl;
    cout<<"\t --------------------------------------"<<endl;
    cout<<"What is the future amount you want in the account? ";
    cin>>fValue;
    cout<<"What is your annual interest rate? ";
    cin>>aiRate;
    cout<<"How many years do you plan to let the money sit in the account? ";
    cin>>years;
    //Process by mapping inputs to outputs
    pValue = presentValue(fValue, aiRate, years);
    //Output Values
    cout<<fixed<<setprecision(2);
    cout<<"    -------------------------------------------------"<<endl;
    cout<<"     You need to deposit $"<<pValue<<" to have a balance"<<endl;
    cout<<"     of $"<<fValue<<" in "<<years<<" years."<<endl;
    cout<<"    -------------------------------------------------"<<endl;
}
    float presentValue(float fValue, float aiRate, int years)
    {
            return fValue / (pow(1 +(aiRate*0.01), years));
    }
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//******************************** Problem 10 ***********************************
//Description: Future Value Calculator
//Inputs:  float Present Value, Number of Months, Monthly Rate.
//Outputs: Amount Value after Number of Months (Future Value).
//******************************************************************************
void prob10(){
    cout<<"\t\t You are in Problem 10"<<endl;
    //Declare Variables
    float pValue,fValue,mRate;
    int months;
    //Input Values
    cout<<"\t --------------------------------------"<<endl;
    cout<<"\t\tFuture Value Calculator"<<endl;
    cout<<"\t --------------------------------------"<<endl;
    cout<<"What is the present amount you have in the account? ";
    cin>>pValue;
    cout<<"What is your monthly interest rate? ";
    cin>>mRate;
    cout<<"How many months will the money sit in the account? ";
    cin>>months;
    //Process by mapping inputs to outputs
    fValue = futureValue(pValue, mRate, months);
    //Output Values
    cout<<fixed<<setprecision(2);
    cout<<"        ----------------------------------------"<<endl;
    cout<<"         You will have a balance of $"<<fValue<<" in "<<endl;
    cout<<"         "<<months<<" months, if balance now is $"<<pValue<<endl;
    cout<<"        ----------------------------------------"<<endl;
}
    float futureValue(float pValue, float mRate, int months)
    {
        return pValue * (pow(1 +(mRate*0.01), months));
    }

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 11 *********************************
//Description: Calculate the Average of the Highest Four Scores
//Inputs:  5 Test Scores
//Outputs: Average of the Top 4 Scores
//******************************************************************************
void prob11(){
    cout<<"\t\t You are in Problem 11"<<endl;
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