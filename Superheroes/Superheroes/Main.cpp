#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <string>
using namespace std;

void heroPrint(string, string);
void heroPrint(string, string, float);
string formatMoney(float);
const int COLUMN_ONE_WIDTH = 40;
const int COLUMN_TWO_WIDTH = 20;


int main()
{
	//int column_one_width = 40;
	//int column_two_width = 20;

	cout << "**Superheroes**" <<endl;
	cout << setfill('-');
	cout << left << setw(COLUMN_ONE_WIDTH + COLUMN_TWO_WIDTH) << "-" <<endl;
	cout << setfill(' ');
	cout << left << setw(COLUMN_ONE_WIDTH) << "Name" << left << setw(COLUMN_TWO_WIDTH) << "Power" << right << setw(COLUMN_TWO_WIDTH) << "Money" << endl;

	//cout << left << setw(COLUMN_ONE_WIDTH) << "Wolverine" << left << setw(COLUMN_TWO_WIDTH) << "Rapid Health Regen" << endl;
	heroPrint("Wolverine","Rapid Health Regen");
	//cout << left << setw(COLUMN_ONE_WIDTH) <<  "Iron Man" << left << setw(COLUMN_TWO_WIDTH) << "Fancy Suit" << endl;
	heroPrint("Iron Man", "Fancy Suit",1000000.0f);
	//cout << left << setw(COLUMN_ONE_WIDTH) << "Hulk" << left << setw(COLUMN_TWO_WIDTH) << "SMASH" << endl;
	heroPrint("Hulk", "SMASH",.005f);
	
	
	cout << setfill('-') << endl;
	cout << left << setw(COLUMN_ONE_WIDTH + COLUMN_TWO_WIDTH) << "-" <<endl;
	
	_getch();
	return 0;
}


string formatMoney(float money)
{
	 
  //create a temporary character array
	char temp_price[16];
	//use sprintf to format the string two decimal places
	sprintf_s(temp_price, "$%.2f", money);
	//right align with a width of column_one_width
  return temp_price;
}


void heroPrint(string name, string power)
{
	cout << left << setw(COLUMN_ONE_WIDTH) << name << left << setw(COLUMN_TWO_WIDTH) << power << endl;
}
void heroPrint(string name, string power, float money)
{
	cout << left << setw(COLUMN_ONE_WIDTH) << name
		 << left << setw(COLUMN_TWO_WIDTH) << power
		 << right << setw(COLUMN_TWO_WIDTH) << formatMoney(money)
		 << endl;
	
}



