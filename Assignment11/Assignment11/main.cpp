#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	// Declare the starter variables
	string s = "*";
	string s2 = "**********";
	string sp = "          ";
	string sp2 = "  ";
	
	int counter = 0;
	
	// Loops until there is 10 rows
	while(counter < 10)
	{
		// Outputs stars and spaces
		cout << s << sp << s2 << sp2 << s2 << sp << s << endl;
		// Adds and subtracts strings
		s= s+"*";
		s2 = s2.substr(0, s2.size()-1);
		sp = sp.substr(0, sp.size()-1);
		sp2 = sp2+"  ";
		counter++;
	}
	_getch();
	return 1;
}