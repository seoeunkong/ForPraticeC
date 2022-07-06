#include <iostream> 
using namespace std;

const int SIZE = 15; 
int L[SIZE] = { 10, 4, 7, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 }; 

void print_data() { 
	for (int i = 0; i < SIZE; i++) cout << " " << L[i] << " "; cout << endl; 
} 

void merge(int L[], int left, int mid, int right) { 
	int i, j, k; i = left;
	j = mid + 1; k = left; 
	int tmp_arr[SIZE];
	
	while (i <= mid && j <= right) { 
		if (L[i] <= L[j]) { 
			tmp_arr[k] = L[i]; 
			i++; } 
		else { 
			tmp_arr[k] = L[j]; j++;
		} 
		k++;
	} 
	
	if (i > mid) { 
		for (int m = j; m <= right; m++) {
			tmp_arr[k] = L[m]; k++; 
		} 
	} else { 
		for (int m = i; m <= mid; m++) { 
			tmp_arr[k] = L[m]; k++; 
		} 
	} 
	
	for (int m = left; m <= right; m++) { 
		L[m] = tmp_arr[m]; 
	} 
} 

void merge_sort(int a[], int left, int right) { 
	int mid; 
	
	if (left < right) { 
		mid = (left + right) / 2;
		merge_sort(a, left, mid); 
		merge_sort(a, mid + 1, right); 
		merge(a, left, mid, right);
	} 
} 

void main() { 
	cout << "Input Data : "; 
	print_data(); /* sort the elements of array L[] in ascending order */
	merge_sort(L, 0, SIZE - 1); 
	cout << "\n\nSorted Data : "; 
	print_data();
}

