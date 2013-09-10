#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	// Declare variables
	float first_num = 106.54;
	float sec_num = 89.532;
	float third_num = 98.76;
	float total = first_num + sec_num + third_num;
	float average = total / 3;

	// Output the three numbers
	cout << "The first number is: " << first_num << endl;
	cout << "The second number is: " << sec_num << endl;
	cout << "The third number is: " << third_num << endl;
	// Set the precision for the total then output the total
	cout << fixed << setprecision(4);
	cout << "The total of the three numbers is: " << total << endl;
	// Set the precision for the average then output the average
	cout << fixed << setprecision(1);
	cout << "The average of the three numbers is: " << average << endl;
	
	_getch();
	return 0;
}