#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int smallest(int numbers[],int numbers_length);
int array_length(int numbers[]);


int main()
{
	const int numbers_length = 5;
	int numbers[] = {1,2,3,4,5,};
	int total=0;
	

	
	int *numbers_new = new int[numbers_length + 1];
	for (int i =0; i < numbers_length; i++)
	{
		numbers_new[i]=numbers[i];
	}

	
	/*
	cout << "The sum of the elements is " << total << endl;
	cout << "The smallest number of the array is "<< smallest(numbers,numbers_length) << endl;
	cout << "The length of the array is " << array_length(numbers)<< endl;
	*/





	_getch();
	return 0;
}


int smallest(int numbers[], int numbers_length)
{
	int smallest = numbers[0];
	
	for(int i=0; i < numbers_length;i++)
	{
		
		if(numbers[i]<smallest)
		{
			smallest = numbers[i];
		}
		
	}
	return smallest;
}
int array_length(int numbers[])
{
	int length=sizeof(numbers)/sizeof(numbers[0]);
	return length;

}