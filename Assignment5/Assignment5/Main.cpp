#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	// Declare variables and constants
	int First_Num = 32;
	double Second_Num = 42.98765;
	int Column_Width1 = 10;
	int Column_Width2 = 5;

	// Output the hex and octals of the first number
	cout  << "The hex of " << First_Num << ": " << hex << First_Num << endl;
	cout  << "The octal of " << dec << First_Num << ": " << hex << First_Num << endl;
	cout << endl;
	// Set the precisiont to 3 and output the second number
	cout << fixed << setprecision(3);
	cout  << "|" << right << setw(Column_Width1) << Second_Num << "|" << endl;
	// Set the precisiont to 4 and output the second number
	cout << fixed << setprecision(4);
	cout  << "|" << right << setw(Column_Width1) << Second_Num << "|" << endl;
	// Set the precisiont to 5 and output the second number
	cout << fixed << setprecision(5);
	cout  << "|" << right << setw(Column_Width1) << Second_Num << "|" << endl;
	// Set the precisiont to 6 and output the second number
	cout << fixed << setprecision(6);
	cout  << "|" << right << setw(Column_Width1) << Second_Num << "|" << endl;
	cout << endl;
	// Output both numbers on the same line
	cout  << "|" << right << setw(Column_Width2) << dec << First_Num << "|";
	
	cout << fixed << setprecision(2);
	cout  << right << setw(Column_Width1) << Second_Num << "|" << endl;

	_getch();
	return 0;
}