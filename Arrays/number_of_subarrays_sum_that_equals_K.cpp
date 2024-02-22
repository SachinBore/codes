#include <bits/stdc++.h>

using namespace std;

void better(vector<int> arr, int n, int k) {

	int cnt = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = i; j < n; j++) {
			sum += arr[j];
			if (sum == k) cnt++;
		}
	}

	cout << cnt << endl;
}

void optimal(vector<int> arr, int n, int k) {

	unordered_map<int, int> preSumMap;
	preSumMap[0] = 1;

	int cnt = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {

		sum += arr[i];

		int rem = sum - k;
		cnt += preSumMap[rem];

		preSumMap[sum]++;
	}

	cout << cnt << endl;
}
int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code
	int n, k; cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	// Better force: generate all subarrays and compare there sum with K
	// if sum == k then increase the count.
	// TC is O(n*n)
	// SC is O(1)
	better(arr, n, k);

	// Optimal approach : use Hashing
	// TC is O(n) , it can bbe changed on what
	// 				map we are using
	// SC is O(n)
	optimal(arr, n, k);







	return 0;
}