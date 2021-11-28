#include <iostream>
#include <string>

using namespace std;

class week
{
	private:
		string dayOfWeek;

	public:
		static string days[7]; // this is a static member which will store all days
		week();
		week(string day);
		void setDay(string day);
		void printDay();
		string getDay();
		string plusOneDay();
		string minusOneDay();
		string addDays(int numOfDays);
};