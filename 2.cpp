#include <iostream>
using namespace std;

int IndexMaxElements(int arr[], int n){
	int index = 0;

	for (int i = 1; i < n; i++){
		if (arr[i] > arr[index]) index = i;
	}
	return index;
}

int main(void) {

	int array_size;
	cout << "Enter array size: ";
	cin >> array_size;

	int arr[array_size];

	cout << "Enter array elements: ";
	for (int i = 0; i < array_size; i++) cin >> arr[i];
    
    cout << IndexMaxElements(arr, array_size) - 1;
    
	for (int i = 0; i < IndexMaxElements(arr, array_size) - 1; i++) if (arr[i] < 0) arr[i] = 0;


	for (int i = 0; i < array_size; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
