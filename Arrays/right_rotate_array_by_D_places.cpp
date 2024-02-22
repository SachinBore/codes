#include <bits/stdc++.h>

using namespace std;

void brute(vector<int>& arr, int n, int d) {
	vector<int> tmp;
	for (int i = n - d; i < n; i++) {
		tmp.push_back(arr[i]);
	}

	for (int i = n - d - 1; i >= 0; i--) {
		arr[i + d] = arr[i];
	}

	for (int i = 0; i < d; i++) {
		arr[i] = tmp[i];
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	// right rotate array by k places means
	// left rotating arrat by n-k places

	int n, d; cin >> n >> d;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	d = d % n;

	//  input : arr = 1 2 3 4 5 6, d = 2
	// output : arr = 5 6 1 2 3 4

	// Brute force: store the D elements in temp array
	// TC is O(d) + O(n-d) + O(d) = O(n+d)
	// SC is O(d)
	// brute(arr, n, d);


	// Optimal : by reversing the array we can rotate it.
	// TC is for 3 reverses O(d) + O(n-d) + O(n) = O(2n)
	// SC is O(1)

	reverse(arr.end() - d, arr.end());
	reverse(arr.begin(), arr.begin() + n - d);
	reverse(arr.begin(), arr.end());

	for (auto i : arr) cout << i << " ";
	cout << endl;




	return 0;
}