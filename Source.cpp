#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> arr, int k) {
	
	int n = arr.size();
	int high = n - 1;
	int low = 0;
	

	while (low <= high)
	{
		int mid = (low + high) / 2;
	

		if (arr[mid] == k)
		{
			return mid;
		}
		if (arr[mid] < k)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return -1;
};
int binarySearch(int arr[], int l, int r, int x)
{
	
	while (l <= r) {
		int m = (l + (r - l)) / 2;

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			r = m - 1;
	}

	// if we reach here, then element was
	// not present
	return -1;
}


int main() {

	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	vector <int> arr = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(a) / sizeof(a[0]);


	int index = binary_search(arr, 5);
	int index2 = binarySearch(a, 0, n-1, 5);

	cout << index << endl;
	cout << index2 << endl;
}