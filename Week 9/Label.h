#include <iostream>
#include <string>

using namespace std;

class label 
{
private:
	string fname;
	string lname;
	int zip;

public: 
	label();
	label(string, string, int);
	~label();
	string getFname();
	string getLname();
	int getZip();
	void setFname(string);
	void setLname(string);
	void setZip(int);
	void getInput();
	void print();
};