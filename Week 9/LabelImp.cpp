#include "Label.h"

// Function implementations
// :: Scope Resolution Operator
label::label(string f, string l, int z) 
{ //overloaded constructor
	fname = f;
	lname = l;
	zip = z;
}

label::~label() 
{ // destructor ~ tilde
	cout << "\n Object destroyed\n";
}

// get functions
string label::getFname() 
{
	return fname;
}

string label::getLname() 
{
	return lname;
}

int label::getZip() 
{
	return zip;
}

// set functions -> MUTATOR functions
void label::setFname(string f) 
{
	fname = f;
}

void label::setLname(string l) 
{
	lname = l;
}

void label::setZip(int z) 
{
	zip = z;
}

void label::getInput() 
{
	cout << "Please enter the label information: \n";
	getline(cin, fname);
	getline(cin, lname);
	cin >> zip;
	cin.ignore();
}

void label::print() 
{
	cout << getFname() << "\t" << getLname() << endl;
	cout << getZip() << endl << endl;		
}