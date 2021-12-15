#include <iostream>
#include <string>

using namespace std;

// #1
// Write a program tha takes in 500 numbers
// print the total and average of those numbers

// int main() {
// 	float ave = 0.0;
// 	int num1;
// 	int num2;
// 	int num3;
// 	int num4;
// 	int num5;
// 	int total;

// 	cout << "Please enter five numbers: ";
// 	cin >> num1 >> num2 >> num3 >> num4 >> num5 >>; // get the numbers

// 	total = num1 + num2 + num3 + num4 + num5;

// 	ave = total / 5;

// 	cout << "The total is: " << total << endl;
// 	cout << "The average is: " << ave << endl;
// 	cout << endl;

// 	return 0;
// }

//#2
// Redo the above with an ARRAY

// int main() {
// 	int num[5]; // declare the name of the array and put the size in the square brackets
// 	int total = 0;
// 	int i = 0; 
// 	float ave = 0.0;

// 	for (i = 0; i < 5; i++) { // index of the array always starts at 0, goes up to size-1
// 		cout << "Please enter the number: ";
// 		cin >> num[i];
// 		total = total + num[i]; // accumulator
// 	} // i = 5

// 	ave = total / i; // i is the control variable also acting as counter
// 	cout << "Total is: " << total << endl;
// 	cout << "Average is: " << ave << endl;
// 	return 0;
// }

//#3
/*
Read/populate, manipulate, print an array
we need three loops
get five numbers from the user and double their values using an array and print them
*/

// int main() {
// 	int num[5];

// 	for (int i = 0; i < 5; i++) { // loop to read/populate/load the array
// 		cout << "Please enter the number: ";
// 		cin >> num[i];
// 	}

// 	cout << "\nHere are the ORIGINAL VALUES of the array\n";

// 	// for (int i = 0; i < 5; i++) { //loop to print the ORIGINAL VALUES of the array
// 	// 	cout << num[i] << endl;
// 	// }

// 	// cout << endl;

// 	// for (int i = 0; i < 5; i++) { //loop to manipulate the array (double the values)
// 	// 	num[i] = num[i] * 2;
// 	// }

// 	cout << "\nHere are the DOUBLE VALUES of the array\n";

// 	for (int i = 0; i < 5; i++) { //loop  to print the values of the array
// 		cout << num[i] << endl;
// 		cout << num[i] << endl;
// 	}
// 	cout << endl;
// 	return 0;
// }

//#4
/*
Sample CHAR array
*/

// int main() {
// 	char grade[] = {'A', 'B', 'C', 'D', 'F'}; // Declartion and init on the same line;

// 	cout << "\nHere are the grades in the array\n";

// 	for (int i = 0; i < 5; i++) {
// 		cout << grade[i] << endl;
// 	}
// 	cout << endl;
// 	return 0;
// }

//#5
/*
Two Dimensional Array
*/

// int main() {
// 	int num[3][3]; // = {1,2,3,4,5,6,7,8,9}; // num[r][c] first dimension is row // second dimension is column

// 	for (int r = 0; r < 3; r++) {
// 		for (int c = 0; c < 3; c++) {
// 			cin >> num[r][c];
// 		}
// 	}

// 	for (int r = 0; r < 3; r++) {
// 		for (int c = 0; c < 3; c++) {
// 			cout << num[r][c] << "\t";
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }

//#6
/*
Get values from user for a two dimensional array and print it in the form of
a table/matrix then double the values
*/

// int main() {
// 	int num[3][3]; //to read/populate the array

// 	cout << "Please enter the values for a two dimensional array of size 3 X 3\n";

// 	for (int r = 0; r < 3; r++) {
// 		for (int c = 0; c < 3; c++) {
// 			cin >> num[r][c];
// 		}
// 	}
// 	cout << endl;

// 	for (int r = 0; r < 3; r++) { // to print the array
// 		for (int c = 0; c < 3; c++) {
// 			cout << num[r][c] << "\t";
// 		}
// 		cout << endl;
// 	}
// 	cout << "Here are the double values\n";

// 	for (int r = 0; r < 3; r++) {
// 		for (int c = 0; c < 3; c++) {
// 			num[r][c] = (num[r][c] * 2);
// 		}
// 		cout << endl;
// 	}
// 	cout << endl;

// 	for (int r = 0; r < 3; r++) { // print the array
// 		for (int c = 0; c < 3; c++) {
// 			cout << num[r][c] << "\t";
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }

//#7
/*
Parallel Arrays
*/

int main() {
	string name[3];
	char grade[3]; // same size as previous array as these will be processed as parallel arrays. // index values correspond ot each other in both arrays.

	cout << "Please enter the name followed by the grade: \n";

	for (int i = 0; i < 3; i++) {
		getline(cin, name[i]);
		cin >> grade[i]; // instead of doing just cin >> name[i] >> grade[i] use getline and cin.ignore so you can enter first and last name.
		cin.ignore(); // otherwise takes enter key as the next name.
	}

	for (int i = 0; i < 3; i++) {
		cout << name[i] << "\t" << grade[i] << endl;
	}
	return 0;
}
























































































