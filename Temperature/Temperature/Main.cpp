#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	// Declare variables
	double Fahrenheit;
	double Celsius;
	// Ask user for an input
	cout << "Please enter a number in celsius: ";
	cin >> Celsius;
	// Do the math
	Fahrenheit = (9.0/5.0)*Celsius+32.0;
	// Output the temperatures
	cout << "Celsius: " << Celsius << " " << "Fahrenheit: " << Fahrenheit << endl;


	_getch();
	return 0;
}