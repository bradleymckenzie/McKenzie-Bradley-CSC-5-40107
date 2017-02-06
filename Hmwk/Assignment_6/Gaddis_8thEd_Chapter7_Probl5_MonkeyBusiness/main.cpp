/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 3, 2017
 Purpose: Display Average, Most, and Least Amount of Food Eaten per Day.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
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
                cout<<" Monkey #"<<(row + 1)<<" on day #"<<(col + 1)<<" ate: ";
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

    //Process by mapping inputs to outputs
    
    //Output Values
    
    //Exit stage right!
    return 0;
}

