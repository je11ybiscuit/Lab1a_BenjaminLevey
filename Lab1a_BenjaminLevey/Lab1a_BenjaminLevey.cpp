// Lab1a_BenjaminLevey.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "windows.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{	
	//input variables. 
	 string destination = "";

	 float avg_mpg = 0.0f; 
	 float trip_length = 0.0f;
	 float cost_per_gal = 0.0f;

	 //calculated variables
	 float money_spent = 0.0f;
	 float gas_used = 0.0f;

	 //while loop, inside parentheses=true
	 while (destination == "")
	 {
		 cout << "Enter Name of Destination: ";
		 cin >> destination;
		 
	 }

	 while (avg_mpg == 0)
	 {
		 cout << "Enter Average Miles Per Gallon: ";
		 cin >> avg_mpg;
	 }

	 while (trip_length == 0)
	 {
		 cout << "Enter Number of Miles to Destination: ";
		 cin >> trip_length;
	 }

	 while (cost_per_gal == 0)
	 {
		 cout << "Enter Average Cost of Fuel Per Gallon: ";
		 cin >> cost_per_gal;
	 }

	 //Outputs calculated from inputs
	 gas_used = trip_length / avg_mpg;
	 money_spent = gas_used * cost_per_gal;

	 cout << "Amount Spent on Fuel to " << destination << ": " << money_spent << endl;
	 cout << "Gallons of Gas Burned to " << destination << ": " << gas_used << endl;
	 
	 system("pause");

	 return 0;
}

