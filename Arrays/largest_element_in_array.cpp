#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	// Brute force approach : sort the array and print the last element
	// TC is O(nlogn)
	// SC is O(1)

	// Optimal approach: loop over array and find max element
	// TC is O(n)
	// SC is O(1)

	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	int largest = arr[0];
	for (int i = 1; i < n; i++) {
		if (largest < arr[i]) largest = arr[i];
	}

	cout << largest << endl;



	return 0;
}