#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		if (swapped == false) break;
	}
}

void bubbleSortReverse(int arr[], int n){
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		if (swapped == false) break;
	}
}

int main(void) {

	int array_size;
	cout << "Enter array size: ";
	cin >> array_size;

	int arr[array_size];

	cout << "Enter array elements: ";
	for (int i = 0; i < array_size; i++) cin >> arr[i];

	bubbleSort(arr, array_size);
	for (int i = 0; i < array_size; i++) cout << arr[i] << " ";
	
	cout << endl;
	
	bubbleSortReverse(arr, array_size);
	for (int i = 0; i < array_size; i++) cout << arr[i] << " ";
	
	return 0;
}
