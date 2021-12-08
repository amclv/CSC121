include <iostream>

using namespace std;

int main() {
	float ave = 0.0;
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int total;

	cout << "Please enter five numbers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5 >>; // get the numbers

	total = num1 + num2 + num3 + num4 + num5;

	ave = total / 5;

	cout << "The total is: " << total << endl;
	cout << "The average is: " << ave << endl;
	cout << endl;

	return 0;
}