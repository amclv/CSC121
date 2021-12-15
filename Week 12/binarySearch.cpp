#include <iostream>

using namespace std;

int binarySearch(int array[], int size, int value) {
		int first = 0,				// First array element
			last = size - 1,		// Last array element
			middle,					// Mid point of search
			position = -1;			// Position of search value
		bool found = false;			// flag

		while (!found && first <= last) {
			middle = (first + last) / 2; // Calculate mid point

			if (array[middle] == value) { // if value is found at mid
				found = true;
				position = middle;
			} else if (array[middle] > value) { // if value is in lower half
				last = middle - 1;
			} else {
				first = middle + 1; // If value is in upper half
			}
		}
		return position;
	}

int main() {
	int arr[] = {3, 10, 9, 2, 5, 1};

	binarySearch(arr, 3, 1);
	return 0;
}