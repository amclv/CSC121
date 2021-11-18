#include <iostream>
#include <string>
// #include "Account.h"

int main() 
{
	Account myAccount; // Create Account object myAccount

	// Show that the initial value of myAccounts name is the empty string
	cout << "Initial account name: " myAccount.getName();

	// prompt for and read name
	cout << "\nPlease enter the account name: ";
	string theName;
	getline(cin, theName); // read a line of text
	myAccount.setName(theName); // put theName in myAccount

	// display the name stored in object myAccount
	cout << "Name in object myAccount is: " << myAccount.getName() << endl;
}

/*
Initial account name is:
Please enter the account name: Jane Green
Name in object myAccount is: Jane Greent
*/