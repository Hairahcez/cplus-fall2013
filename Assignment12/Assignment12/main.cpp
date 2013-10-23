#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
#include "Helper.h"
using namespace std;

int main()
{
	Helper h = Helper();
	bool keep_looping = true;
	// Keep looping through the questions
	while(keep_looping)
	{
		// Declare variables
		double number_one = 0;
		double number_two = 0;
		double answer = 0;
		// Ask for input
		cout << "Please enter the first number: ";
		cin >> number_one;
		cout << "Please enter the second number: ";
		cin >> number_two;
		cout << "Select a menu option, 'q' to quit:" << endl;
		cout << "1.Addition" << endl << "2.Multiplication" << endl << "3.Subtraction" << endl << "4.Division" << endl;
		string option;
		cin >> option;
		// Set the amount of decimal places
		cout << fixed << setprecision(3);
		// Give an escape option
		if (option == "q" || option == "Q")
		{
			// quit
			keep_looping = false;
			cout << "Goodbye";
		}
		else
		{
			// Check if option was numeric
			if(h.IsNumeric(option))
			{
				int num_option = h.ConvertToInt(option);
				// Check to see which operand to use and perforn the equation
				switch(num_option)
				{
					case 1:
						// Addition
						answer = number_one + number_two;
						cout << "The two numbers added together is: " << answer << endl;
						break;
					case 2:
						// Multiplication
						answer = h.mult(number_one, number_two);
						cout << "The two numbers multiplied together is: " << answer << endl;
						break;
					case 3:
						// Subraction
						answer = number_one - number_two;
						cout << "The two numbers subtracted are: " << answer << endl;
						break;
					case 4:
						// Division
						answer = number_one/number_two;
						cout << "The two numbers divided are: " << answer << endl;
						break;
					default:
						cout << "Please select an existing menu option." << endl;
						break;
				}
				
			}
			else
			{
				// Error checking for invalid input
				cout << "Please enter a valid number!" << endl;
			}

			

		}
	}
	_getch();
	return 0;
}


 
