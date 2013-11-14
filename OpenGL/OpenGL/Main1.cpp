#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;

void main()
{
	const int row_length = 10;
	const int column_length = 10;
	int multiplication[row_length][column_length];
	// initialization loop
	for(int i=0;i<row_length; i++)
	{
		for(int j=0;j<column_length;j++)
		{
			multiplication[i][j] = (i+1)*(j+1);
		}
		
	}

	for(int i=0;i<row_length; i++)
	{
		for(int j=0;j<column_length;j++)
		{
			cout << multiplication[i][j] <<" ";
		}
		cout << endl;
	}


	_getch();
}