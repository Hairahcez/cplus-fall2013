#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <math.h>
using namespace std;
void validate();
bool isNumeric(string);
int convertToInt(string);
int main()
{
	string user_value;
	cout << "Please enter a value: ";
	cin >> user_value;

	if (isNumeric(user_value))
	{
		cout << "success" << endl;
		int user_number = convertToInt(user_value);
		cout << "You entered " << user_number << endl;
	}
	else
	{
		cout << "fail";
	}

	_getch();
	return 0;
}
bool isNumeric(string s)
	{
		int total = 0;
		bool success = false;
		for(int i = s.length() - 1; i >= 0; i--)
		{
			char c = s[i];
			
			if(c=='0')
			{
				success = true;
			}
			if(c=='1')
			{
				success = true;
			}
			else if (c=='2')
			{
				success = true;
			}
			else if (c=='3')
			{
				success = true;
			}
			else if (c=='4')
			{
				success = true;
			}
			else if (c=='5')
			{
				success = true;
			}
			else if (c=='6')
			{
				success = true;
			}
			else if (c=='7')
			{
				success = true;
			}
			else if (c=='8')
			{
				success = true;
			}
			else if (c=='9')
			{
				success = true;
			}
			else
			{
				success = false;
				break;
			}

		}

		return success;
	}
void validate()
{
	int test1;

	while (true)
	{
		cout << "Please enter a number:";
		cin >> test1;
		if (cin.fail())
		{
			cout << "Bad Input, Try Again:";
			cin.clear();
			cin.ignore(10000, '\n');
			cin >> test1;
		
		
		}
		else
		{
			cout << "You entered " << test1 << endl;
		}
	}
}
int convertToInt(string s)
	{
		int total=0;
		int exp = 0;
		for(int i = s.length() - 1; i >= 0; i--)
		{
			char c = s[i];
			
			int value = 0;
			if(c=='0')
			{
				value = 0;
			}
			if(c=='1')
			{
				value = 1;
			}
			else if (c=='2')
			{
				value = 2;
			}
			else if (c=='3')
			{
				value = 3;
			}
			else if (c=='4')
			{
				value = 4;
			}
			else if (c=='5')
			{
				value = 5;
			}
			else if (c=='6')
			{
				value = 6;
			}
			else if (c=='7')
			{
				value = 7;
			}
			else if (c=='8')
			{
				value = 8;
			}
			else if (c=='9')
			{
				value = 9;
			}
			
			
			total += (value * pow(10,exp));
			exp++;
		}

		return total;
	}