#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<double> salaries; // No size given. creates empty vector

	cout << "Please enter salaries, 0 to quit: \n"; // Prompt

	bool more = true; // Set Flag
	while (more) { // while true
		double s;

		cin >> s; // Get salary

		if (s == 0) { // If salary is 0
			more = false; // flip the flag
		} else {
			salaries.push_back(s); // add to the vector
		}
	}

	double highest = salaries[0]; // Set first as high
	int i;

	for (i = 1; i < salaries.size(); i++) { // use size function instead of actual size value
		if (salaries[i] > highest) { // test each value against the highest
			highest = salaries[i]; // if new high found. replace it.
		}
	}

	for (i = 0; i < salaries.size(); i++) {
		cout << salaries[i]; // print vector values

		if (salaries[i] == highest) { // compare the highest value
			cout << " <== highest value"; // if found mark it
		}
		cout << "\n"; // generate newline in output
	}

	cout << "\nNew list with the last number removed\n\n";
	salaries.pop_back(); // remove item from the list

	for (i = 0; i < salaries.size(); i++ ) {
		cout << salaries[i] << endl; // print vector values
	}

	return 0;
}