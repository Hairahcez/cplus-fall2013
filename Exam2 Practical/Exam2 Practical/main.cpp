#include <iostream>
#include <conio.h>
#include <string>
using namespace std; 
void main () 
{ 
	// Declare variables
	double first_num;
	double second_num;
	double third_num;
	double average;
	bool keeplooping = true;
	string option;
	// Loop while condition is true
	while(keeplooping)
	{
		// Ask for input
	cout << "Enter a number: ";
	cin >> first_num;
	cout << "Enter a second number: ";
	cin >> second_num;
	cout << "Enter a third number: ";
	cin >> third_num;
	// Do calculation
	average = (first_num + second_num + third_num)/3;
	cout << average << endl;
	// Have option to quit
	cout << "press q to quit: ";
	cin >> option;
	// Condition that if true exits out of program
	if (option == "q" || option == "Q")
		keeplooping = false;
	}
	
}