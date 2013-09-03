#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;



int main()
{
	float price1 = 6.34f;
	float price2 = 8.92f;
	float price3 = 65.40f;
	float price4 = 103.45f;

	float average = (price1 + price2 + price3) / 3.0f;

	int column_one_width = 30;
	int column_two_width = 10;
	cout << fixed << setprecision(2);

	cout << "Part Prices" << endl;
	cout << setfill('-');
	cout << left << setw(column_one_width + column_two_width) << "-" <<endl;
	cout << setfill(' ');
	cout << left << setw(column_one_width) << "PART NO." << right << setw(column_two_width) << "PRICE" << endl;
	
	cout << setfill('.');

	cout << left << setw(column_one_width) << "T1267" ;
	cout << right << setw(column_two_width) << "$" << price1 << endl;

	cout << left << setw(column_one_width) <<  "T1300";
	cout << right << setw(column_two_width) << "$" << price2 << endl;

	cout << left << setw(column_one_width) << "T2401" ;
	cout << right << setw(column_two_width) << "$" << price3 << endl;

	cout << left << setw(column_one_width) << "T4482" ;
	cout << right << setw(column_two_width) << "$" << price4 << endl;
	
	cout << setfill('-') << endl;
	cout << left << setw(column_one_width + column_two_width) << "-" <<endl;
	cout << setfill(' ');
	cout << right << setw(column_one_width + column_two_width) << average << endl;
	
	_getch();
	return 0;
}