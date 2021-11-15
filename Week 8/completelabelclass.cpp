#include <iostream>
#include <string>

using namespace std;

/*
constructors
destructor

Accessor functions
Mutator functions

Special functions 
*/

class label { // definition
	private: // data members
		
		string fname;
		string lname;
		int zip;

	public: // behaviour members

	label(string f, string l, int z) { //overloaded constructor
		fname = f;
		lname = l;
		zip = z;
	}

	label() { // destructor ~ tilde
		cout << "\n Object destroyed\n";
	}

	// get functions
	string getFname() {
		return fname;
	}

	string getLname() {
		return lname;
	}

	int getZip() {
		return zip;
	}

	// set functions -> MUTATOR functions
	void setFname(string f) {
		fname = f;
	}

	void setLname(string l) {
		lname = l;
	}

	void setZip(int z) {
		zip = z;
	}

	void getInput() {
		cout << "Please enter the label information: \n";
		getline(cin, fname);
		getline(cin, lname);
		cin >> zip;
		cin.ignore();
	}

	void print() {
		cout << getFname() << "\t" << getLname() << endl;
		cout << getZip() << endl << endl;		
	}
};

int main() {

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




// // extra functions
// 	void print() {
// 		cout << getName() << "\t" << getLname() << endl;
// 		cout << getZip() << endl << endl;		
// 	}

// 	void getInput() {
// 		cout << "Please enter the label information: \n";
// 		getline(cin, fname);
// 		getline(cin, lname);
// 		cin >> zip;
// 		cin.ignore();
// 	}

// 	// constructor -> same name as class // NO RETURN DATATYPE
// 	// to set aside space for data members, you can also put default values in it.
// 	label() {
// 		fname = "";
// 		lname = "";
// 		zip = 0; 
// 	} // default constructor