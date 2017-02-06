/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 6, 2017
 Purpose: Assignment 6 Menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <iomanip>//Format Layout
#include <cstdlib>//Random number generator
#include <ctime> //Set seed time
#include <fstream>//File Input/Output
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
//Problem's Function Prototypes
int gTotal(int [], int);
int pSmall(int [], int);
int pLarge(int [], int);
void arrayFunction(int[], int, int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    //Loop on the menu
    do{
        //Input Values
        cout<<"Gaddis 8th Edition Chapter 7 Problems"<<endl;
        cout<<"  Type 1 for Problem 1"<<endl;
        cout<<"  Type 2 for Problem 2"<<endl;
        cout<<"  Type 3 for Problem 3"<<endl;
        cout<<"  Type 4 for Problem 4"<<endl;
        cout<<"  Type 5 for Problem 5"<<endl;
        cout<<"  Type 6 for Problem 6"<<endl;
        cout<<"  Type 7 for Problem 7"<<endl;
        cout<<"  Type 8 for Problem 10"<<endl;
        cout<<"  Type 9 for Problem 14"<<endl;
        cout<<"  Go to Number: ";
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
//Description: Largest and Smallest Number Identifier
//Inputs:  Ten Numbers
//Outputs: Switch Number is the Largest and Smallest
//******************************************************************************
void prob1(){
    cout<<"\t     You are in Problem 1"<<endl;
    //Declare Variables
    int numbers[10],smallest=0,largest=0;
    //Input Values
    cout<<" ----------------------------------------------"<<endl;
    cout<<"     Largest and Smallest Number Identifier"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    for(int i=0; i<10; i++){
        cout<<"Please Enter Number "<<i+1<<": "<<endl;;
        cin>>numbers[i];
    }
    smallest = numbers[0];
    largest = numbers[0];
    
    for(int i = 1; i<10; i++){
        if(numbers[i] < smallest)
            smallest = numbers[i];
        if(numbers[i] > largest)
            largest = numbers[i];
    }
    cout<<"      ------------------------------"<<endl;
    cout<<"         Largest number is: "<<largest<<endl;
    cout<<"         Smallest number is: "<<smallest<<endl;
    cout<<"      ------------------------------"<<endl;
}

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 2 **********************************
//Description: Rainfall Statistics Using an Array
//Inputs:  Rainfall for Each Month
//Outputs: Total Rainfall, Average Rainfall, Lowest Month, and Highest Month
//******************************************************************************

void prob2(){
    cout<<"\t    1 You are in Problem 2"<<endl;
    //Declare Variables
    float rainfall[12],sum=0,avg,highest=0,lowest;
    int highestMonth,lowestMonth;
    //Input Values
    cout<<" ----------------------------------------------"<<endl;
    cout<<"             Rainfall Statistics"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    for(int i=0;i<=11;i++){
        cout<<"Please Enter the Total Rainfall for Month "<<i+1<<": ";
        cin>>rainfall[i];
    while(rainfall[i]<0){
    cout<<"Error: Enter a positive number."<<endl;
    cout<<"Please Enter the Total Rainfall for Month "<<i+1<<": ";
    cin>>rainfall[i];
    }
    sum+=rainfall[i];
    }
    cout<<fixed<<setprecision(2);
    cout<<"    --------------------------------------"<<endl;
    cout<<"      Total Rainfall is: "<<sum<<endl;
    avg=sum/12.0;
    cout<<"      Average Monthly Rainfall is: "<<avg<<endl;
    cout<<"    --------------------------------------"<<endl;
    
    for(int x=0;x<11;x++){
        if(highest<rainfall[x]){
            highest=rainfall[x];
            highestMonth=x+1;
        }
    }
    lowest=rainfall[0];
    for(int y=0;y<11;y++){
        if(lowest>rainfall[y]){
            lowest=rainfall[y];
            lowestMonth=y+1;
        }
    }
    cout<<"  ------------------------------------------"<<endl;
    cout<<"    Month with Highest Rainfall is Month "<<highestMonth<<endl;
    cout<<"    Month with Lowest Rainfall is Month "<<lowestMonth<<endl;
    cout<<"  ------------------------------------------"<<endl;
}

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 3 **********************************
//Description: What is the process, i.e. mapping from inputs to outputs
//Inputs:  Datatype, Range/Validity, Units, Description
//Outputs: Datatype, Range/Validity, Units, Description
//******************************************************************************
void prob3(){
    //Declare Variables 
    int sales[5];
    string name[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int totlSld,hiSls,loSls;
    //Input Values
    cout<<" --------------------------------------------"<<endl;
    cout<<"                Chips & Salsa "<<endl;
    cout<<" --------------------------------------------"<<endl;
    for (int type = 0; type < 5; type++){
        cout<<"    Jars sold last month of "<<name[type]<<": ";
      	cin>>sales[type];
            while (sales[type] < 0){
                cout<<"  Jars sold must greater or equal to 0, Renter: ";
                cin>>sales[type];
		}
	}
    //Process by mapping inputs to outputs
    totlSld  = gTotal(sales, 5);
    loSls = pSmall(sales, 5);
    hiSls = pLarge(sales, 5);
    //Output Values
    cout<<"        ----------------------------"<<endl;
    cout<<"                   Report"<<endl<<endl;
    cout<<"         Name of Salsa    Jars Sold"<<endl;
    cout<<"        ----------------------------"<<endl;
    cout<<setw(13)<<name[0]<<"               "<<sales[0]<<endl;
    cout<<setw(15)<<name[1]<<"             "<<sales[1]<<endl;
    cout<<setw(14)<<name[2]<<"              "<<sales[2]<<endl;
    cout<<setw(12)<<name[3]<<"                "<<sales[3]<<endl;
    cout<<setw(14)<<name[4]<<"              "<<sales[4]<<endl;   
    cout<<" --------------------------------------------"<<endl;
    cout<<"    Total Sales:"<<setw(15)<<totlSld<<endl;
    cout<<"    High Seller: "<<name[hiSls]<<endl;
    cout<<"     Low Seller: "<<name[loSls]<<endl;  
    cout<<" --------------------------------------------"<<endl;
}
    int gTotal (int array[], int num){
    int total = 0;
	for (int type = 0; type < num; type++)
            total += array[type];
	return total;
}
    int pLarge(int array[], int num){
    int indexOfLargest = 0;
    for (int pos = 1; pos < num; pos++){
        if (array[pos] > array[indexOfLargest])
            indexOfLargest = pos;
    }
	return indexOfLargest;
}

int pSmall(int array[], int num){
    int indexOfSmallest = 0;
    for (int pos = 1; pos < num; pos++){
        if (array[pos] < array[indexOfSmallest])
            indexOfSmallest = pos;
	}		
	return indexOfSmallest;
}

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 4 **********************************
//Description: Larger Than n
//Inputs:  n
//Outputs: Numbers Large Than n
//******************************************************************************
void prob4(){
    cout<<"You are in Problem 4"<<endl;
    //Declare Variables
    int n;
    const int SIZE = 30;
    int arrayNumbers[SIZE] = 
    {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,26,
     27,28,29,30};
    //Input Values                        
    cout<<"  ---------------"<<endl;
    cout<<"   Larger Than n"<<endl;
    cout<<"  Must Be 1 to 30"<<endl;
    cout<<"  ---------------"<<endl;
    cout<<"  Enter Value: ";
    cin>>n;
    //Process by mapping inputs to outputs
    
    //Output Values
    cout<<" -----------------"<<endl;
    arrayFunction(arrayNumbers, SIZE, n);
    cout<<" -----------------"<<endl;
}

void arrayFunction(int arrayN[], int arrayS, int number)
{
    for (int i=0; i<arrayS; i++){
        if (arrayN[i] > number){
            cout<<" "<<arrayN[i];
            if(arrayN[i] % 6 == 0){
                cout<<endl;
            }
        }
    }    
}

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 5 **********************************
//Description: Monkey Business: Calculate Food Eaten Each Day
//Inputs:  Pounds of Food per Day per Monkey
//Outputs: Average Eaten per Day, Least Eaten and Most Eaten per Day
//******************************************************************************
void prob5(){
    cout<<"\t     You are in Problem 5"<<endl;
    //Declare Variables
    int mkys = 3,days = 5,food[mkys][days];
    float pounds,least,most,sum = 0;
    //Input Values
    cout<<" ----------------------------------------------"<<endl;
    cout<<"               Monkey Business"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    cout<<" Enter the Amount of Pounds of Food Each Monkey"<<endl;
    cout<<" Ate Each Day."<<endl<<endl;
    for (int row = 0; row < mkys; row++){
        for (int col = 0; col < days; col++){
            do{
                cout<<" Monkey #"<<(row + 1)<<" on day "<<(col + 1)<<" ate: ";
                cin>>pounds;
                if (pounds < 0){
                    cout<<" Error: Number of Pounds Must be Greater Than 0."
                        <<endl;
                }
            }while (pounds < 0);
            food[row][col] = pounds;
            sum += pounds;
            }
            cout << endl;
	}
    least = most = food[0][0];
	for (int row = 0; row < mkys; row++){
            for (int col = 0; col < days; col++){
                if (food[row][col] < least){
                    least = food[row][col];
                }
                if (food[row][col] > most){
                    most = food[row][col];
                }
            }
        }
    cout<<fixed<<setprecision(1);
    cout<<" --------------------------------------------------"<<endl;
    cout<<" Average Amount of Food Eaten per Day: "<<sum/15.0<<" pounds."<<endl;
    cout<<" Least Amount of Food Eaten: "<<least<<" pounds."<<endl;
    cout<<" Greatest Amount of Food Eaten: "<<most<<" pounds."<<endl;
    cout<<" --------------------------------------------------"<<endl;
}

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 6 **********************************
//Description: Rain Or Shine
//Inputs:  Read RainOrShine.dat File
//Outputs: Total for Each Sunny, Rainy, Cloudy, Month with Most Rain
//******************************************************************************
void prob6(){
    cout<<"\t    You are in Problem 6"<<endl;
   //Declare Variables
    int month = 3,day = 30;
    char weather[month][day];
    int Sun,Rain,Cloudy,totSun = 0,totRain = 0,totCloudy = 0,lrgstRain = 0;
    //Open File
    ifstream in;
    in.open("RainOrShine.dat");
    if (!in)
        cout<<"Error: Opening Data File Fail.";
	else{
        for (int row = 0; row < month; row++){
            for (int col = 0; col < day; col++){
                in>>weather[row][col];
            }
        }
        }
    //Input Values
    cout<<" ----------------------------------------------"<<endl;
    cout<<"               Rain or Shine"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    //Process by mapping inputs to outputs
	cout << "         Three Month Weather Report"<<endl;
	cout<< "------------------------------------------------"<<endl;
	for (int row = 0; row < month; row++){
            Sun = Rain = Cloudy = 0;
            for (int col = 0; col < day; col++){
                switch (weather[row][col]){
                    case 'S' : Sun++;break;
                    case 'R' : Rain++;break;
                    case 'C' : Cloudy++;break;
                }
            }
            // Display month numbers
            cout<<"     ----------------------------------"<<endl;
            cout<<"      For the month of ";
            if (row == 0)
                cout << "June:"<<endl;
            else if (row == 1)
                cout << "July:"<<endl;
		else if (row == 2)
                    cout << "August:"<<endl;
		cout<<"      Rainy: "<<Rain<<endl;
                cout<<"      Sunny: "<<Sun<<endl;
		cout<<"      Cloudy: "<<Cloudy<<endl;
                cout<<"     ----------------------------------"<<endl;
		//totals
                totSun += Sun;
		totRain += Rain;
		totCloudy += Cloudy;
                //Month with Most Rain
		if(lrgstRain > Rain)
                    lrgstRain = row;
	}
    //Output Values
    cout<<"     ----------------------------------"<<endl;
	cout<<"      For the whole three-month period"<<endl;
        cout<<"       Rainy: "<<totRain<<endl;
        cout<<"       Sunny: "<<totSun<<endl;
        cout<<"      Cloudy: "<<totCloudy<<endl;
    cout<<"     ----------------------------------"<<endl;
    cout<< " ------------------------------------------"<<endl;
    cout<<"   Month with the Largest Number of Rainy"<<endl;
    if (lrgstRain == 0)
        cout<<"   Days is June."<<endl;
    else if (lrgstRain == 1)
        cout<<"   Days is July."<<endl;
    else if (lrgstRain == 2)
        cout<<"   Days is August."<<endl;
    cout<< " ------------------------------------------"<<endl;
    //Close and Exit stage right!
    in.close();
}
//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 7 **********************************
//Description: Employee Payroll
//Inputs:  Hours and Pay Rate for Each Employee
//Outputs: Gross Pay for Each Employee
//******************************************************************************
void prob7(){
    cout<<"\t\tYou are in Problem 7"<<endl;
    //Declare Variables
    const int SIZE=7;
    int empId[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours[SIZE];
    float payRate[SIZE];
    float wages[SIZE];
    //Input Values
    cout<<"   --------------------------------------------"<<endl;
    cout<<"                 Employee Payroll"<<endl;
    cout<<"   --------------------------------------------"<<endl;
    for(int i=0;i<SIZE;i++){//get employee
    cout<<"Enter the Number of Hours Worked by ID "<<empId[i]<<": ";
    cin>>hours[i];
    cout<<endl;
    while(hours[i]<0){//Invalid Input
        cout<<"Error: Invalid ID, Reenter: ";
        cin>>hours[i];
        cout<<endl;
    }
    cout<<"Enter the Hourly Pay Rate of ID "<<empId[i]<<": $";//get the pay rate
    cin>>payRate[i];
    cout<<endl;
    if(payRate[i]<15){
        cout<<"Error: Must be Greater than $15, Reenter: ";
        cin>>payRate[i];
        cout<<endl;
    }
    while(payRate[i]<0){
        cout<<"Error: Must be a Positive Number, Reenter: ";
        cin>>hours[i];
    }
    wages[i]=hours[i]*payRate[i];
    }
    //Process by mapping inputs to outputs

    //Output Values
    cout<<"-------------------------------------------------"<<endl;
    for(int x=0;x<SIZE;x++){
        cout<<"Employee: "<<empId[x]<<" Hours: "<<hours[x]<<" Gross Wages: $";
                cout<<fixed<<setprecision(2);
               cout<<wages[x]<<endl;
}
    cout<<"-------------------------------------------------"<<endl;
}

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 10 **********************************
//Description: Driver's License Exam
//Inputs:  User's Answers
//Outputs: Pass or Failed
//******************************************************************************
void prob8(){
    cout<<"\t     You are in Problem 10"<<endl;
     //Declare Variables
    const int SIZE=20;//Constant integer defining array size
    char key[SIZE]={'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D',
        'C','C','A','D','B'};//Answer key
    char answers[SIZE];//Student answers
    int correct=0;
    
    //Input values
    cout<<" --------------------------------------------"<<endl;
    cout<<"            Driver's License Exam"<<endl;
    cout<<" --------------------------------------------"<<endl;
    //Loop to obtain answers
    for(int ans=0;ans<=SIZE-1;ans++){
        cout<<"     Enter Your Answer for Question "<<ans+1<<": ";
        cin>>answers[ans];
        while(answers[ans]!='A'&&answers[ans]!='B'&&answers[ans]!='C'&&
                answers[ans]!='D'){
            cout<<"    Invalid: Enter A, B, C, or D: ";
            cin>>answers[ans];
        }
    }
    //Process by mapping inputs to outputs
    for(int i=0;i<=SIZE-1;i++){
        if(answers[i]==key[i]){
            correct++;
        }
    }
    //Output Values
    cout<<" -----------------------------------------------"<<endl;
    if(correct>=15){
        cout<<"       Your Score: "<<correct<<" Out of 20. You Passed."<<endl;
    }
    else cout<<"      Your Score: "<<correct<<" Out of 20. You Failed."<<endl;
    cout<<" -----------------------------------------------"<<endl;
}

//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
//********************************* Problem 14 **********************************
//Description: What is the process, i.e. mapping from inputs to outputs
//Inputs:  Datatype, Range/Validity, Units, Description
//Outputs: Datatype, Range/Validity, Units, Description
//******************************************************************************
void prob9(){
    cout<<"\t  You are in Problem 14"<<endl;
    cout<<"------------------------------------------"<<endl;
    //Set the random number seed
     srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int winNums[5];
    int player[5];
    int digit, match = 0;
    //Input Values
    for (int i = 0; i < 5; i++){
        winNums[i] = 0 + rand() % 9;
    } 
    cout<<"Enter Your Five Lottery Picks (0 to 9)."<<endl;
    for (int i = 0; i < 5; i++){
        do{
            cout<<" Number "<<(i + 1)<<": ";
            cin>>digit;
            if (digit < 0 || digit > 9){
                cout<<"\t   Invalid Number"<<endl;
                cout<<"Pick a number in the range of 0 to 9."<<endl;
            }
        }while (digit < 0 || digit > 9);
        player[i] = digit;
    }
    //Process by mapping inputs to outputs
    for (int i = 0; i < 5; i++){
        if (winNums[i] == player[i])
            match++;
    }
    //Output Values
    cout<<"   ----------------------------"<<endl;
    cout<<"     Winning Digits: ";
    for (int i = 0; i < 5; i++){
            cout<<winNums[i]<<" ";
    }
    cout<<endl;
    cout<<"      Player Digits: ";
    for (int i = 0; i < 5; i++){
            cout<<player[i]<<" ";
    }
    cout<<endl;
    cout<<"    Matching Digits: "<<match<<endl;
    cout<<"   ----------------------------"<<endl;
}