#include <iostream>

void sort(int a[], int number_used) {
	int index_of_next_smallest;

	for (int index = 0; index < number_used - 1; index++) {
		index_of_next_smallest = index_of_next_smallest(a, index, number_used);
		swap_values(a[index], a[index_of_next_smallest]);
	}
}

void swap_values(int& v1, int& v2) {
	int temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}

int index_of_next_smallest(const int a[], int start_index, int number_used) {
	int min = a[start_index], index_of_min = start_index;

	for (int index = start_index + 1; index < number_used; index++) {
		if (a[index] < min) {
			min = a[index];
			index_of_min = index;
		}
	}
	return index_of_min;
}

int main() {

	int sample_array[] = {5, 3, 1, 2};
	int number_used = 4;

	sort (sample_array, number_used);

	cout << "In sorted order the numbers are\n";

	for (int index = 0; index < number_used; index++) {
		cout << sample_array[index] << " "; << endl;
	}
	return 0;
}