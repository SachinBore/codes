#include <bits/stdc++.h>

using namespace std;

void optimal(vector<int> arr, int n) {

	int minElement = arr[0];
	int maxProfit = 0;
	int tmpProfit = 0;
	for (int i = 1; i < n; i++) {
		if (minElement <= arr[i]) {
			tmpProfit = arr[i] - minElement;
		} else minElement = arr[i];

		maxProfit = max(maxProfit, tmpProfit);
	}

	cout << maxProfit << endl;
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

	// Optimal
	// TC is O(n)
	// SC is O(1)
	optimal(arr, n);


	return 0;
}