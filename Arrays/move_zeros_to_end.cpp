#include <bits/stdc++.h>

using namespace std;

void brute(vector<int>& arr, int n) {

	vector<int> tmp;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			tmp.push_back(arr[i]);
		}
	}

	for (int i = 0; i < tmp.size(); i++) {
		arr[i] = tmp[i];
	}

	for (int i = tmp.size(); i < n; i++) {
		arr[i] = 0;
	}
}

void optimal(vector<int>& arr, int n) {

	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			swap(arr[i], arr[j]);
			j++;
		}
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	// Brute force approach: store all the non zero numbers in another array
	// TC is O(n) + O(x) + O(n-x), x-zero elements
	// SC is O(n-x) for storing non zero elements in an array
	// brute(arr, n);

	// Optimal approach : using two pointer approach
	// TC is O(n)
	// SC is O(1)
	optimal(arr, n);


	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;



	return 0;
}