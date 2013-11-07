#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int Make_Change(double, int &, int &, int &, int &, int &, int &);

// Make function
int Make_Change(double PurchasePrice, int &fives, int &ones, int &quarters, int &dimes, int &nickels, int &pennies)
{
	// Declare variables
	double change;
	int whole_number;
	change = 10-PurchasePrice;
	// Check if valid number given
	if( change < 0)
	{
		return -1;
	}
	else if(change == 0)
	{
		return 0;
	}
	whole_number = change/10;
	
	if(whole_number <= 1)
	{
		// Checks how many fives to give
		whole_number = change/5;
		if(whole_number >= 1)
		{
			fives = (whole_number);
		}
		
		
		change = change - (whole_number*5);
		// Checks how many ones to give
		whole_number = change/1;
		if(whole_number >= 1)
		{
			ones = (whole_number);
		}
		
		
		change = change - (whole_number*1);
		// Checks how many quarters to give
		whole_number = change/.25;
		if(whole_number >= 1)
		{
			quarters = (whole_number);
		}
		
		change = change - (whole_number*.25);
		// Checks how many dimes to give
		whole_number = change/.1;
		if(whole_number >= 1)
		{
			dimes = (whole_number);
		}
		
		change = change - (whole_number*.1);
		// Checks how many nickels
		whole_number = change/.05;
		if(whole_number >= 1)
		{
			nickels = (whole_number);
		}
		
		change = change - (whole_number*.05);
		// Checks how many pennies
		whole_number = change/.01;
		if(whole_number >= 1)
		{
			pennies = (whole_number);
		}
		
		change = change - whole_number*.01;
		return 1;
	}
	else if(change == 1)
	{
		return 0;
	}
	else
	{
		return -1;
	}

}






int main()
{
	// Declare variables
	double Purchase_price;
	int fives = 0;
	int ones = 0;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;
	
	// Ask for input
	cout << "Please enter a purchase price that is less than $10. ";
	cin >> Purchase_price;
	// See if condition is true
	if(Make_Change(Purchase_price, fives, ones, quarters, dimes, nickels, pennies) == -1)
	{
		cout << "You do not have enough money for the purchase." << endl;
	}
	// Call function
	else if(Make_Change(Purchase_price, fives, ones, quarters, dimes, nickels, pennies) == 1)
	{
		// Output the answer
		cout << "Your change is " << fives << " fives, " << ones << " ones, " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels " << pennies << " pennies.";
	}
	else
	{
		cout << "There is no change.";
	}
	
	






	_getch();
	return 0;
}