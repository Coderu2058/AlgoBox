#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
  //   Check if array have values
	if (r >= l) {
    //     Calculate mid to create partition
		int mid = l + (r - l) / 2;
    
    //     Check if value found
		if (arr[mid] == x)
			return mid;
    
    //     Check if value lies in left half
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
    
    //     Check if value lies in right half
		return binarySearch(arr, mid + 1, r, x);
	}
  
  //   Value not found
	return -1;
}

int main(void)
{
  //   Take sample array
	int arr[] = { 2, 3, 4, 10, 40 };
  //   Sample Search Value
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
  
	return 0;
}
