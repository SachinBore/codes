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
	for (int i = 0; i < n; i++) cin >> arr[i];

	// Optimal: use max_count and count variables and loop over array
	// and find the max_consecutive ones count.
	// TC is O(n)
	// SC is O(1)

	int maxcnt = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) cnt++;
		else cnt = 0;

		maxcnt = max(maxcnt, cnt);
	}

	cout << maxcnt << endl;

	return 0;
}