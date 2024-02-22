#include <bits/stdc++.h>

using namespace std;

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

	// optimal: loop from last element if it is greater than
	// right maxi of it then add it and make right maxi as that
	// element
	vector<int> res;
	res.push_back(arr[n - 1]);
	int maxi = arr[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		if (arr[i] > maxi) {
			maxi = arr[i];
			res.push_back(arr[i]);
		}
	}

	for (auto it : res) {
		cout << it << " ";
	}
	cout << endl;

	return 0;
}