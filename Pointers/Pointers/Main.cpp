#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;
int* growByOne(int*,int);
int main()
{
	int* numbers = new int[5];
	int* more_numbers = new int[10];
	numbers[0] = 5;
	more_numbers[0] = 99;
	numbers = growByOne(numbers, 5);
	//numbers = more_numbers;
	
	cout << numbers[6];



	_getch();
	return 1;
}

int* growByOne(int* myarray, int myarray_length)
{
	
	// declare new array one larger
	int* numbers_by_one = new int[myarray_length + 1];
	// copy old values into new array
	for(int i=0;i<5;i++)
	{
		numbers_by_one[i] = myarray[i];
	}
	numbers_by_one[myarray_length]= 0;
	// return new array
	return numbers_by_one;


}



void pointers()
{
	int i = 5;
	int* p = new int;
	*p = 6;
	cout << "int i: " << i << endl;
	cout << "&i: " << &i << endl;
	cout << "int* p: " << p << endl;
	cout << "*p: " << *p << endl;
	cout << "&p: " << &p << endl;
	p = &i;
	i = 99;
	cout << "p: " << p << endl;
	cout << "*p after &i: " << *p << endl;
}