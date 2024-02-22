#include <bits/stdc++.h>

using namespace std;

void brute(vector<int> arr, int n, int k) {

	int len = 0;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = i; j < n; j++) {
			sum += arr[j];

			if (sum == k) len = max(len, j - i + 1);
		}
	}

	cout << len << endl;
}

void better(vector<int> arr, int n, int k) {

	unordered_map<int, int> preSumMap;
	int sum = 0;
	int maxLen = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];

		if (sum == k) {
			maxLen = max(maxLen, i + 1);
		}

		int rem = sum - k;
		if (preSumMap.find(rem) != preSumMap.end()) {
			int len = i - preSumMap[rem];
			maxLen = max(maxLen, len);
		}

		if (preSumMap.find(sum) == preSumMap.end()) {
			preSumMap[sum] = i;
		}

	}

	cout << maxLen << endl;
}

void optimal(vector<int> arr, int n, int k) {

	int left = 0;
	int right = 0;
	long long sum  = 0;
	int maxLen = 0;
	while (right < n) {
		sum += arr[right];

		if (sum == k) {
			maxLen = max(maxLen, right - left + 1);
			right++;
		}

		else if (sum < k) right++;
		else {
			sum -= arr[left];
			sum -= arr[right];
			left++;
		}
	}

	cout << maxLen << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	//   Q: what is subarray?
	// ANS: subarray means contigious part of the array.
	// subarray needs to taken from contigious part of the array
	// otherwise it is not a subarray.
	// for ex: arr = {1, 2, 3, 1, 4, 2, 3, 5, 6}
	// some subarrays are : {1}, {1,2,3}, {3,1,4}, {3,5,6} etc..
	// which are not subarrays : {1,2,6}, {4,5,6}, {3,4,5} etc..

	// 	 Q: what's the problem is about?
	// ANS: array = {1, 2, 4, 1, 1, 1, 5, 6, 3} and sum K=3
	// here, subarrays {1,2} and {3} and {1,1,1} have the sum as 3
	// as per K, but we have to return the subarray which
	// has the longest subarray i.e., subarray {1,1,1}

	int n, k; cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	// Brute force: generate all subarrays and compare there sum with K
	// if sum == k then return the max length subarray
	// TC is O(n*n)
	// SC is O(1)
	// brute(arr, n, k);


	// Better approach: Use Hashing
	// TC is  O(nlogn) -> for map
	//        O(n) -> for unordered_map
	// SC is O(n) -> for prefix sum
	// This better approach is the optimal approach if the
	// array has positives and negatives and zeros
	// But it is not the optimal solution if the array has only
	// postives and zeros
	// better(arr, n, k);


	// Optimal Approach : use two pointer approach
	// TC is O(right + left) -> worst case is O(2n)
	// SC is O(1)
	optimal(arr, n , k);


	return 0;
}