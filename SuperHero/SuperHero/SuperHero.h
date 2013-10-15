#include <string>
#include <iostream>
using namespace std;
class SuperHero
{
	private:
		string first_name_;
		string last_name_;
		string power_;
		string name_;
	public:
		SuperHero();
		SuperHero(string, string, string, string);
		string first_name();
		string last_name();
		string power();
		string name();

		// Mutators
		void set_First_Name(string);
		void set_Last_Name(string);
		void set_Power(string);
		void set_Name(string);

		
};