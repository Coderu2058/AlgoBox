#include <iostream>
using namespace std;

int search(int arr[], int N, int x)
{
	int i;
  //   Search Value in given array
	for (i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
  
	return -1;
}

int main(void)
{
  //   Sample array
	int arr[] = { 2, 3, 4, 10, 40 };
  //   Sample search value
	int x = 10;
	int N = sizeof(arr) / sizeof(arr[0]);

	int result = search(arr, N, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
  
	return 0;
}
