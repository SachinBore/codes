#include <bits/stdc++.h>

using namespace std;

int brute(vector<int>& arr, int n) {
	sort(arr.begin(), arr.end());
	int largest = arr[n - 1];
	int second_largest = -1;
	for (int i = n - 2; i >= 0; i--) {
		if (arr[i] != largest) {
			second_largest = arr[i];
			break;
		}
	}

	return second_largest;
}

int better(vector<int>& arr, int n) {

	int largest = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > largest) largest = arr[i];
	}

	int second_largest = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] > second_largest && arr[i] != largest) {
			second_largest = arr[i];
		}
	}

	return second_largest;
}

int optimal(vector<int>& arr, int n) {
	int largest = arr[0];
	int second_largest = -1;
	for (int i = 1; i < n; i++) {
		if (arr[i] > largest) {
			second_largest = largest;
			largest = arr[i];
		}
		else if (arr[i] < largest && arr[i] > second_largest) {
			second_largest = arr[i];
		}
	}

	return second_largest;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	// In the same way we can find the second smallest in the array

	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	// Brute force: sort the array in ascending and loop from last(n-1)
	// TC is O(nlogn) + o(n)
	// SC is O(1)
	cout << brute(arr, n) << endl;


	// Better: first find the largest,
	// then find the second largest other than largest
	// TC is O(2n) -> O(n)
	// SC is O(1)
	cout << better(arr, n) << endl;

	// Optimal: in one loop we can find largest and second largest
	// TC is O(n)
	// SC is O(1)
	cout << optimal(arr, n) << endl;




	return 0;
}