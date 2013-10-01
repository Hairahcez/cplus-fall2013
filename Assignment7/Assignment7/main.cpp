#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	// Declare variables
	double hoursWorked;
	double overtime;
	double salary;
	bool IncorrectValue = true;
	cout << fixed << setprecision(2);
	// Loop while the value is incorrect
	while(IncorrectValue)
	{
		// Ask for input
		cout << "Please enter the amount of hours you have worked ";
		// Store input
		cin >> hoursWorked;
	 
		// Check if input is greater than or equal to 0
		if (hoursWorked >= 0)
		{
			// Check to see if the user has gotten overtime
			if((hoursWorked-40) > 0)
			{
				overtime = hoursWorked-40;
				salary = (overtime*12) + (40*8);
				cout << "Your salary is $" << salary;
			}
			else
			{
				salary = hoursWorked*8;
				cout << "Your salary is $" << salary;
			}
			IncorrectValue = false;
		}
		else
		{
			cout << "That is not a valid amount. Try Again." << endl;

		}
	}
	_getch();
	return 0;
}