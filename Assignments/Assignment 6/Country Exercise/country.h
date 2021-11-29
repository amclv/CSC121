#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class country {
private:
	string name;
	int area;
	int population;

public:
	int getArea();
	void setArea(int area);
	int getPopulation();
	void setPopulation(int population);
	string getName();
	void setName(string name);
	
};