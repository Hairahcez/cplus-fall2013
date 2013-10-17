#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string s = "*";
	bool quit = false;
	int i = 0;
	while(i < 4)
	{
		
		cout << s << endl;
		s= s+"*";
		cout << ++i << endl;
	}




	_getch();
	return 1;
}

void doDemo()
{
	/*
	bool quit = false;
	do
	{
		
			quit = true;
		

	}
	while(_getch() = 'q');
	*/
}