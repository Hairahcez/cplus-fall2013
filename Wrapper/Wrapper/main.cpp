#include <iostream>
#include <conio.h>
#include "ClassCollection.h"
using namespace std;

void main()
{
	Collection c(0);
	c.add(99);
	c.add(66);
	c.add(55);
	string Hello;
	
	c.add(200);

	cout << c << endl;
	_getch();
}