/*
Account class that contains a name data member
and member functions to set and get its value.
*/

#include <iostream>
#include <string> // enable program to use C++ string data type

using namespace std;

class Account 
{
public:
	// member function that sets the account name in the object
	void setName(string accountName)
	{
		name = accountName; // store the account name
	}

	// member function that retrieves the account name from the object
	string getName() const
	{
		return name; // return names value to this functions caller
	}
private:
	string name; // data member containing account holders name
}; // end class Account

