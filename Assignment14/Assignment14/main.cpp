#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	// Declare 2d arrays with values
	int first_array[][3] = {
		{16, 18, 23},
		{54, 91, 11}};
	int second_array[][3] = {
		{14,52,77},
		{16,19,59}};

	int third_array[2][3];

	// loop through the arrays to fill the third array with values
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			third_array[i][j] = first_array[i][j] + second_array[i][j];
		}
	}
	// Output first array
	cout << "First Array" << endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << first_array[i][j] << " ";
		}
		cout << endl;
	}
	// Output second array
	cout << "Second Array" << endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << second_array[i][j] << " ";
		}
		cout << endl;
	}
	// Output third array
	cout << "Third Array" << endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << third_array[i][j] << " ";
		}
		cout << endl;
	}

	_getch();
}