#include "country.h"

int country::getArea() {
	return area;
}

void country::setArea(int area) {
	this -> area = area;
}

int country::getPopulation() {
	return population;
}

void country::setPopulation(int population) {
	this -> population = population;
}

string country::getName() {
	return name;
}

void country::setName(string name) {
	this -> name = name;
}