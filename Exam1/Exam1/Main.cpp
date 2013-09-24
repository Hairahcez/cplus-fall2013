#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	// Declare variables
	double Miles_Driven;
	double Gallons_Used;
	double Miles_Per_Gallon;

	// Set the precision
	cout << fixed << setprecision(1);
	// Ask for user input and put that input into the variables
	cout << "Please enter the total miles driven: ";
	cin >> Miles_Driven;
	cout << "Please enter the total gallons used: ";
	cin >> Gallons_Used;
	// Calculate Miles per gallon
	Miles_Per_Gallon = Miles_Driven/Gallons_Used;
	// Output the answer
	cout << "The total miles per gallon is " << Miles_Per_Gallon << endl;


	_getch();
	return 0;
}