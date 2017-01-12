/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 12, 2017
 Purpose: Identifies which rectangle has the greater area and or if the areas are the same.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float area1,rect1w,rect1l,area2,rect2w,rect2l;//rectangle area, width, and length
    string same,greater1,greater2;
    //Input Values
    cout<<"This is a program identifies which of two rectangles has the greater"<<endl;
    cout<<"area and or if the areas are the same."<<endl;
    cout<<"Enter Rectangle One's Width"<<endl;
    cin>>rect1w;
    cout<<"Enter Rectangle One's Length"<<endl;
    cin>>rect1l;
    cout<<"Enter Rectangle Two's Width"<<endl;
    cin>>rect2w;
    cout<<"Enter Rectangle Two's Length"<<endl;
    cin>>rect2l;
    //Process by mapping inputs to outputs
    area1=rect1w*rect1l;
    area2=rect2w*rect2l;
    
    if(area1==area2){
        same="The Rectangles' area are the same.";
    }
    else if(area1>area2){
        greater1="Rectangle one has a greater area.";
    }
    else if(area1<area2){
        greater2="Rectangle two has a greater area.";
    }
    //Output Values
    cout<<"\t-------------------------------------"<<endl;
    cout<<"\t  "<<same<<greater1<<greater2<<endl;
    cout<<"\t-------------------------------------"<<endl;
    
    //Exit stage right!
    return 0;
}

