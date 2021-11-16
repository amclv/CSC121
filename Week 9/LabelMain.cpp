#include "Label.h"

int main() 
{

	label mailing; // creating an object using default constructor
	mailing.getInput(); // getInput(mailing)
	mailing.print();

	label person("Aaron", "Cleveland", 90210); // creating an object using overloaded constructor
	person.print();

	mailing.setFname("Ben");
	mailing.setLname("Noble");
	mailing.setZip(99999);

	cout << mailing.getFname() << "\t" << mailing.getLname() << endl;
	cout << mailing.getZip() << endl;

	person.getInput(); //getInput(person)
	person.print(); //print(person)

	return 0;
}