/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on February 3, 2017
 Purpose: Lets a maker of chips and salsa keep track of sales for five different
          types of salsa.
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
int getTotal(int [], int);
int posOfSmallest(int [], int);
int posOfLargest(int [], int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables 
    int sales[5];
    string name[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int totalJarsSold,hiSalesProduct,loSalesProduct;
    //Input Values
    cout<<" --------------------------------------------"<<endl;
    cout<<"                Chips & Salsa "<<endl;
    cout<<" --------------------------------------------"<<endl;
    for (int type = 0; type < 5; type++){
        cout<<"    Jars sold last month of "<<name[type]<<": ";
      	cin >>sales[type];
            while (sales[type] < 0){
                cout<<"  Jars sold must greater or equal to 0, Renter: ";
                cin>>sales[type];
		}
	}
    //Process by mapping inputs to outputs
    totalJarsSold  = getTotal(sales, 5);
    loSalesProduct = posOfSmallest(sales, 5);
    hiSalesProduct = posOfLargest(sales, 5);
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
    cout<<"    Total Sales:"<<setw(15)<<totalJarsSold<<endl;
    cout<<"    High Seller: "<<name[hiSalesProduct]<<endl;
    cout<<"     Low Seller: "<<name[loSalesProduct]<<endl;  
   cout<<" --------------------------------------------"<<endl;
    //Exit stage right!
    return 0;
}

int getTotal (int array[], int num){
    int total = 0;
	for (int type = 0; type < num; type++)
            total += array[type];
	return total;
}

int posOfLargest(int array[], int num){
    int indexOfLargest = 0;
    for (int pos = 1; pos < num; pos++){
        if (array[pos] > array[indexOfLargest])
            indexOfLargest = pos;
    }
	return indexOfLargest;
}

int posOfSmallest(int array[], int num){
    int indexOfSmallest = 0;
    for (int pos = 1; pos < num; pos++){
        if (array[pos] < array[indexOfSmallest])
            indexOfSmallest = pos;
	}		
	return indexOfSmallest;
}
