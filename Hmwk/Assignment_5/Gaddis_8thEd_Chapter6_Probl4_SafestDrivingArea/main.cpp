/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 1, 2017
 Purpose: Determines which of five geographic regions within a major city
 (north, south, east, west, and central) had the fewest reported automobile 
 accidents last year.
 */

//System Libraries
#include <iostream>//Input Output Library
#include <iomanip>//Format Layout
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
float getNumAccidents();
void findLowest(float, float, float, float, float);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float north,south,east,west,centrl;
    //Input Values
    
    //Process by mapping inputs to outputs
  
    //Output Values
    cout<<" ----------------------------------------------------"<<endl;
    cout<<"\t Fewest Reported Automobile Accidents"<<endl;
    cout<<" ----------------------------------------------------"<<endl;
    cout<<"North Region: "<<endl;
    north=getNumAccidents();
    cout<<"South Region: "<<endl;
    south=getNumAccidents();
    cout<<"East Region: "<<endl;
    east=getNumAccidents();
    cout<<"West Region: "<<endl;
    west=getNumAccidents();
    cout<<"Central Region: "<<endl;
    centrl=getNumAccidents();
    findLowest(north,south,east,west,centrl);
    //Exit stage right!
    return 0;
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