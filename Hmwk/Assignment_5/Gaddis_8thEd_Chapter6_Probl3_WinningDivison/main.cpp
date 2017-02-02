/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 23, 2017
 Purpose: Determine which of a company’s four divisions had the greatest sales 
          for a quarter.
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
float getSales();
void findHighest(float, float, float, float);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float ne,se,nw,sw;
    //Input Values
    
    //Process by mapping inputs to outputs
  
    //Output Values
    cout<<" -----------------------------------------"<<endl;
    cout<<"\tWinning Division Calculator"<<endl;
    cout<<" -----------------------------------------"<<endl;
    cout<<"Northeast Division: "<<endl;
    ne=getSales();
    cout<<"Southeast Division: "<<endl;
    se=getSales();
    cout<<"Northwest Division: "<<endl;
    nw=getSales();
    cout<<"Southwest Division: "<<endl;
    sw=getSales();
    findHighest(ne, se, nw, sw);
    //Exit stage right!
    return 0;
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