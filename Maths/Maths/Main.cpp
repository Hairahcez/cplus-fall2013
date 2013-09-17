#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	double First_Num;
	double Second_Num;
	double Answer_Num;
	

	cout << "Please enter the first number: ";
	cin >> First_Num;
	cout << "Please enter the second number: ";
	cin >> Second_Num;
	cout << fixed << setprecision(4);
	Answer_Num = First_Num + Second_Num / First_Num * Second_Num;

	cout << "First_Num: " << First_Num << "Second_Num: " << Second_Num << endl;
	cout << "First_Num Squared: " << pow (First_Num, 2.0) << "Second_Num Squared: " << pow (Second_Num, 2.0) << endl;
	cout << "First_Num + Second_Num / First_Num * Second_Num: " << First_Num + Second_Num / First_Num * Second_Num << endl;
	cout << "Round Answer Up: " << ceil(Answer_Num) << endl;
	cout << "Round Answer Down: " << floor(Answer_Num) << endl;
	cout << "Square Root First_Num: " << sqrt(First_Num);
	cout << "Square Root Second_Num: " << sqrt(Second_Num) << endl;
	cout << "First_Num ^ Second_Num: " << pow(First_Num, Second_Num) << endl;
	cout << "First_Num / Second_Num: " << First_Num / Second_Num << endl;
	cout << "First_Num mod Second_Num: " << (int)First_Num % (int)Second_Num << endl;
	
	cout << "random number: " << rand() * clock() % 100 << endl;
	cout << "random number: " << rand() * clock() % 100 << endl;
	cout << "random number: " << rand() * clock() % 100 << endl;

	cout << "clock: " << clock() << endl;

	_getch();
	return 0;
}