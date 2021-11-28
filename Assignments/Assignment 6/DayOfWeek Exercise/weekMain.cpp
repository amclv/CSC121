#include "week.h"

int main()
{
	week dow1;
	week dow2("Wednesday");

	dow1.setDay("Sunday");
	cout << "getDay() = " << dow1.getDay() << endl;
	cout << "Printing the day" << endl;

	dow1.printDay();
	cout << "Adding One Day" << endl;
	cout << dow1.plusOneDay() << endl;

	cout << "Subtracting one day:" << endl;
	cout << dow1.minusOneDay() << endl;
	cout << "Adding 11 days:" << endl;
	cout << dow1.addDays(11) << endl;

	cout << "------------------------" << endl;

	cout << "getDay() = " << dow2.getDay() << endl;
	cout << "Printing the day: " << endl;

	dow2.printDay();
	cout << "Adding one day: " << endl;
	cout << dow2.plusOneDay() << endl;
	cout << "Subtracting one day: " << endl;
	cout << dow2.minusOneDay() << endl;
	cout << "Adding 19 days: " << endl;
	cout << dow2.addDays(19) << endl;

	return 0;
}