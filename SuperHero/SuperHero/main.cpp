#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include "SuperHero.h"
using namespace std;

int main()
{
	
	SuperHero heroes[3];

	heroes[0] = SuperHero("Bruce", "Banner", "Hulk Smash", "Hulk");
	heroes[1] = SuperHero("Eric", "Masterson", "Mjolnir", "Thor");
	heroes[2] = SuperHero("Henry", "Pymn", "Grow/Shrink", "Ant Man");

	for(int i=0;i<3;i++)
	{
		cout << heroes[i].first_name() << " " << heroes[i].last_name() <<": " << heroes[i].name() << endl;
	}

	cout << "Please enter a first name to search:";
	string first_name = "";
	cin >> first_name;
	
	int i = 0;
	while(first_name != heroes[i].first_name() && i<3)
	{
		heroes[i].first_name();
		i++;
	}
	cout << heroes[i].first_name() << " " << heroes[i].last_name() <<": " << heroes[i].name() << endl;
	cout << "Please enter information about a superhero:";
	string information = "";
	getline(cin, information);
	int i2 = 0;
	bool found = false;
	while( found == false && i2<3)
	{
		if(information == heroes[i2].first_name() || information == heroes[i2].last_name() || information == heroes[i2].name() || information == heroes[i2].power())
		{
		
		cout << heroes[i2].first_name() << " " << heroes[i2].last_name() <<": " << heroes[i2].name() << endl;
		found = true;
		}
		i2++;
	}
	
	_getch();
	return 1;
}