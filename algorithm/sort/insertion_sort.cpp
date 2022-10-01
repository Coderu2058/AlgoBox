#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
	int i, key, j;
    // Iterate through all values in the array
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
        
        // Sort every element in its correct position
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// Print array
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
    // Dummy array
	int arr[] = { 12, 11, 13, 5, 6 };
	int N = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, N);
	printArray(arr, N);

	return 0;
}
