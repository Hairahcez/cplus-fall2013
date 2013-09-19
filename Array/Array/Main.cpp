#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	// Declare variables
	int book;
	double price;
	double total;
	// Ask for input
	cout << "Please insert the number of books: ";
	cin >> book;
	cout << endl << "Please insert the price of the books: ";
	cin >> price;
	// Due the calculations
	total = book*price;
	// Format outcome
	cout << fixed << setprecision(2);
	// Output answer
	cout << endl << "The total cost of the books is $" << total << endl;
	cout << "Press any key to quit.";
	
	
	_getch();
	return 0;
}