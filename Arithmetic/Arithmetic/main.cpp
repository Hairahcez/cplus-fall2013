#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
#include "Helper.h"
using namespace std;

int main()
{
	Helper h = Helper();
	bool keep_looping = true;

	while(keep_looping)
	{
		cout << "Select a menu option, 'q' to quit:" << endl;
		cout << "1.Addition" << endl << "2.Multiplication" << endl;
		string option;
		cin >> option;
		if (option == "q" || option == "Q")
		{
			// quit
			keep_looping = false;
			cout << "Goodbye";
		}
		else
		{
			if(h.IsNumericInt(option))
			{
				int num_one;
				int num_two;
				int num_answer;
				cout << "First Number?";
				cin >> num_one;
				cout << "Second Number?";
				cin >> num_two;


				
				int num_option = h.ConvertToInt(option);
				switch(num_option)
				{
					case 1:
						// Addition
						num_answer = num_one + num_two;
						cout << "The answer is:" << num_answer << endl;
						break;
					case 2:
						// Multiplication
						num_answer = num_one * num_two;
						cout << "The answer is:" << num_answer << endl;
						break;
					default:
						cout << "Please select an existing menu option." << endl;
						cout << "The answer is:" << num_answer << endl;
				}
				/*
				if(num_option == 1)
				{
					// Addition
					num_answer = num_one + num_two;
				}
				else if(num_option == 2)
				{
					// Multiplication
					num_answer = num_one * num_two;
				}
				*/
				cout << "The answer is:" << num_answer << endl;
			}
			else
			{
				cout << "Please enter a valid number!" << endl;
			}

			

		}
	}




	_getch();
	return 0;
}


 
