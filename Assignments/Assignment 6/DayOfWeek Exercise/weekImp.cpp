#include "week.h"

string week::days[7]= { "Sun", "Mon", "Tues", "Wednes", "Thurs", "Fri", "Satur" };

week::week() { 
	// default constructor 
}

week::week(string day) { setDay(day); }

void week::setDay(string day) {
	int lengthOfDay = day.length();
	dayOfWeek = day.substr(0, lengthOfDay - 3);
}

void week::printDay() { cout << getDay() << endl; }

string week::getDay() {
	string day = dayOfWeek + "day";
	return day;
}

string week::plusOneDay() {
	int dayValue;
	for (int i = 0; i < 7; i++) {
		if (days[i] == dayOfWeek) {
			dayValue = i;
			break;
		}
	}
	dayValue = dayValue + 1;
	if (dayValue == 7)
		dayValue = 0;
		string newDay = days[dayValue] + "day";
		return newDay;
}

string week::minusOneDay() {
	int dayValue;
	for (int i = 0; i < 7; i++) {
		if (days[i] == dayOfWeek) {
			dayValue = i;
			break;
		}
	}
	dayValue = dayValue - 1;
	if (dayValue == -1)
		dayValue = 6;
		string newDay = days[dayValue] + "day";
		return newDay;
}

string week::addDays(int numOfDays) {
	int dayValue;
	for (int i = 0; i < 7; i++) {
		if (days[i] == dayOfWeek) {
			dayValue = i;
			break;
		}
	}
	dayValue = dayValue + numOfDays;
	string newDay = days[dayValue % 7] + "day";
	return newDay;
}