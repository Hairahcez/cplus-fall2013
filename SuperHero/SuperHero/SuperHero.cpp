#include "SuperHero.h"
SuperHero::SuperHero()
{
	first_name_ = "";
	last_name_ = "";
	power_ = "";
	name_ = "";
}
SuperHero::SuperHero(string first_name, string last_name, string power, string name)
{
	first_name_ = first_name;
	last_name_ = last_name;
	power_ = power;
	name_ = name;
}
string SuperHero::first_name()
{
	return first_name_;
}
string SuperHero::last_name()
{
	return last_name_;
}
string SuperHero::power()
{
	return power_;
}
string SuperHero::name()
{
	return name_;
}

void SuperHero::set_First_Name(string first_name)
{
	first_name_ = first_name;
}
void SuperHero::set_Last_Name(string last_name)
{
	last_name_ = last_name;
}
void SuperHero::set_Power(string power)
{
	power_ = power;
}
void SuperHero::set_Name(string name)
{
	name_ = name;
}