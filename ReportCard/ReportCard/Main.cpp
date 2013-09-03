#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;



int main()
{
	float score1 = 0.95f;
	float score2 = 1.00f;
	float score3 = .05f;

	float average = (score1 + score2 + score3) / 3.0;

	int column_one_width = 40;
	int column_two_width = 10;
	cout << fixed << setprecision(2);




	cout << "Report Card" << endl;
	cout << setfill('-');
	cout << left << setw(column_one_width + column_two_width) << "-" <<endl;
	cout << setfill(' ');
	cout << left << setw(column_one_width) << "Assignment" << left << setw(10) << "Score" << endl;
	
	cout << setfill('.');

	cout << left << setw(column_one_width) << "#1: Hello World " ;
	cout << right << setw(column_two_width) << score1 * 100 << "%" << endl;

	cout << left << setw(column_one_width) <<  "#2: Miles Calculator ";
	cout << right << setw(column_two_width) << score2 * 100 << "%" << endl;

	cout << left << setw(column_one_width) << "#1: String Formatting " ;
	cout << right << setw(column_two_width) << score3 * 100 << "%" << endl;
	
	cout << setfill('-') << endl;
	cout << left << setw(column_one_width + column_two_width) << "-" <<endl;
	cout << setfill(' ');
	cout << right << setw(column_one_width + column_two_width) << average * 100 << "%" << endl;
	
	_getch();
	return 0;
}