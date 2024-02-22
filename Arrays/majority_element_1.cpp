#include <bits/stdc++.h>

using namespace std;

void better(vector<int>& arr, int n) {

	unordered_map<int, int> mpp;
	for (int i = 0; i < n; i++) {
		mpp[arr[i]]++;
	}

	for (auto it : mpp) {
		if (it.second > n / 2) {
			cout << it.first << endl;
			break;
		}
	}
}

void optimal(vector<int> arr, int n) {

	int majElement = arr[0];
	int cnt = 1;

	for (int i = 1; i < n; i++) {
		if (cnt == 0) majElement = arr[i];

		if (arr[i] == majElement) cnt++;
		else cnt--;
	}

	cout << majElement << endl;
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

	// Q: find the element which appears more than n/2 times

	// Brute force : use nested loops and
	// count each element count, if it is >n/2 return
	// that element
	// TC is O(n*n)
	// SC is O(1)

	// Better approach : use map and store each elements count
	// TC is O(2n)
	// SC is O(n)
	better(arr, n);


	// Optimal : Moore's voting algorithm
	// TC is O(n)
	// SC is O(1)
	optimal(arr, n);

	return 0;
}