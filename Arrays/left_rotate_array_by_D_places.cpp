#include <bits/stdc++.h>

using namespace std;

void brute(vector<int>& arr, int n, int d) {

	vector<int> tmp;
	for (int i = 0; i < d; i++) {
		tmp.push_back(arr[i]);
	}

	for (int i = d; i < n; i++) {
		arr[i - d] = arr[i];
	}

	int idx = 0;
	for (int i = n - d; i < n; i++) {
		arr[i] = tmp[idx++]; // tmp[i - (n - d)];
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	// similarly right rotate array by D places

	int n, d; cin >> n >> d;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	d = d % n;

	//  input : arr = 1 2 3 4 5 6, d = 3
	// output : arr = 4 5 6 1 2 3

	// Brute force: store the D elements in temp array
	// TC is O(d) + O(n-d) + O(d) = O(n+d)
	// SC is O(d)
	// brute(arr, n, d);


	// Optimal : by reversing the array we can rotate it.
	// TC is for 3 reverses O(d) + O(n-d) + O(n) = O(2n)
	// SC is O(1)
	reverse(arr.begin(), arr.begin() + d);
	reverse(arr.begin() + d, arr.end());
	reverse(arr.begin(), arr.end());

	for (auto i : arr) cout << i << " ";
	cout << endl;

	return 0;
}