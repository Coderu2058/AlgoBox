#include <bits/stdc++.h>
using namespace std;

// Swap values with reference
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// Sort Value using Selection Sort
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;
  
  //   Iterate through values
	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
    //  Iterate through remaining values
		for (j = i+1; j < n; j++)
    //  Find minimum value
		if (arr[j] < arr[min_idx])
			min_idx = j;
    //  Swap value to correct position
		if(min_idx!=i)
			swap(&arr[min_idx], &arr[i]);
	}
}

// Print Array
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
  //   Dummy Array
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
  //   Prin Sorted Array
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}
