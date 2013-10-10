#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;
// Identify functions
double ConvertToFahrenheit(double);
double ConvertToCelsius(double);

int main()
{
	// Declare variables
	double temperature = 0;
	char degree_Letter;
	cout << fixed << setprecision(2)<< endl;
	// Ask for input
	cout << "Please enter a temperature: ";
	cin >> temperature;
	cout << endl << "Please enter the degree letter you want to convert from (f,c): ";
	cin >> degree_Letter;
	

	// Set a condition for the letter entered
	switch (degree_Letter)
	{
		case 'f': cout << "The temperature is " << ConvertToCelsius(temperature) << " degrees celsius.";  break;
				  
		case 'F': cout << "The temperature is " << ConvertToCelsius(temperature) << " degrees celsius.";  break;
			
		case 'c': cout << "The temperature is " << ConvertToFahrenheit(temperature) << " degrees celsius.";  break;

		case 'C': cout << "The temperature is " << ConvertToFahrenheit(temperature) << " degrees celsius.";  break;

		default: cout << "That degree_Letter doesn't exist." << endl;
	}



	_getch();
	return 0;
}
// Create functions to convert the degrees to either celsius or fahrenheit
double ConvertToCelsius(double Fahrenheit)
{
	double Celsius = 0;
	Celsius = (5.0/9.0)*(Fahrenheit - 32.0);
	return Celsius;
}
double ConvertToFahrenheit(double Celsius)
{
	double Fahrenheit = 0;
	Fahrenheit = (9.0/5.0)*Celsius + 32.0;
	return Fahrenheit;
}