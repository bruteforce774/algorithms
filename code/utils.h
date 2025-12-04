#pragma once

// Insertion Sort - sorts an array in ascending order
// arr: array to be sorted
// n: number of elements in the array
void insertion_sort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		// Insert arr[i] into the sorted subarray arr[0:i-1]
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void insertion_sort(double arr[], int n) {
	for (int i = 1; i < n; i++) {
		double key = arr[i];
		// Insert arr[i] into the sorted subarray arr[0:i-1]
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}