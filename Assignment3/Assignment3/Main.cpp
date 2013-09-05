#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;



int main()
{
	//Declare Vaiable for average
	float average = (6.34 + 8.92 + 65.4 + 103.45) / 4.0f;

	int column_one_width = 30;
	int column_two_width = 10;
	// Set the precision
	cout << fixed << setprecision(2);
	// Name of the title
	cout << "Part Prices" << endl;
	// Add a dashed line
	cout << setfill('-');
	cout << left << setw(column_one_width + column_two_width) << "-" <<endl;
	cout << setfill(' ');
	// Add Column title
	cout << left << setw(column_one_width) << "PART NO." << right << setw(column_two_width) << "PRICE" << endl;
	
	cout << setfill('.');
	// Input the data into the columns
	cout << left << setw(column_one_width) << "T1267" ;
	cout << right << setw(column_two_width) << "$6.34" << endl;

	cout << left << setw(column_one_width) <<  "T1300";
	cout << right << setw(column_two_width) << "$8.92" << endl;

	cout << left << setw(column_one_width) << "T2401" ;
	cout << right << setw(column_two_width) << "$65.40" << endl;

	cout << left << setw(column_one_width) << "T4482" ;
	cout << right << setw(column_two_width) << "$103.45" << endl;
	// Add a dashed line
	cout << setfill('-') << endl;
	cout << left << setw(column_one_width + column_two_width) << "-" <<endl;
	cout << setfill(' ');
	//input the average
	cout << right << setw(column_one_width + column_two_width) << average << endl;
	
	_getch();
	return 0;
}