#include <bits/stdc++.h>

using namespace std;

void better(vector<int> arr, int n) {
	int maxi = 0;
	int sum = 0;
	for (int i = 0; i < n - 1; i++) {
		sum = 0;
		for (int j = i; j < n; j++) {
			sum += arr[j];

			maxi = max(maxi, sum);
		}
	}

	cout << maxi << endl;
}

void optimal(vector<int> arr, int n) {
	int maxi = INT_MIN;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		maxi = max(maxi, sum);
		if (sum < 0) sum = 0;
	}

	cout << maxi << endl;
}

void followup(vector<int> arr, int n) {

	int ansStart = -1;
	int ansEnd = -1;
	int start = 0;
	int maxi = INT_MIN;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (sum == 0) start = i;
		sum += arr[i];

		if (sum > maxi) {
			maxi = sum;
			ansStart = start;
			ansEnd = i;
		}
		if (sum < 0) sum = 0;
	}


	for (int i = ansStart; i <= ansEnd; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << maxi << endl;

}

void followup2(vector<int> arr, int n) {

	// smallest
	int ansStart = -1;
	int ansEnd = -1;
	int start = 0;
	int size = 0;

	int maxi = INT_MIN;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (sum == 0) start = i;
		sum += arr[i];

		if (sum > maxi) {
			if (sum > maxi || (i - start + 1) > size) { // Update condition
				maxi = sum;
				ansStart = start;
				ansEnd = i;
				size = ansEnd - ansStart + 1; // Fix size calculation
			}
		}
		if (sum < 0) sum = 0;
	}


	for (int i = ansStart; i <= ansEnd; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << maxi << endl;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// Brute force: use 3 nested loops and find max sum
	// TC is O(n*n*n)
	// SC is O(1)

	// Better approach: use 2 nested loops and find max sum
	// TC is O(n*n)
	// SC is O(1)
	// better(arr, n);

	// optimal : Use Kadane's algorithm
	// TC is O(n)
	// SC is O(1)
	// optimal(arr, n);

	// Follow-up question : print any subarray which is giving max sum
	// same TC and SC as optimal
	followup(arr, n);

	// try follow up - 2
	// print subarray which has max sum,
	// if multiple exists print smallest of them
	// or print longest of them
	followup2(arr, n); // correct this


	return 0;
}