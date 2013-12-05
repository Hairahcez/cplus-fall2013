#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

void main()
{
	int numbers[] = {7,23,21,55,6,9,76};
	int length = 7;
	int temp = 0;
	// Sort Me
	bool is_sorted = true;
	do
	{
		is_sorted = true;
		for(int i=0; i < length-1; i++)
		{
			if(numbers[i] > numbers[i+1])
			{
				temp = numbers[i];
				numbers[i] = numbers[i+1];
				numbers[i+1] = temp;
				is_sorted = false;


			}
		}
		for(int i=0; i < 7;i++)
	{
		cout << numbers[i] << endl;
	}
		cout << "----------" << endl;
	}while(!is_sorted);


	




	_getch();
}