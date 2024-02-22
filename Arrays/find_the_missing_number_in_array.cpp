#include <bits/stdc++.h>

using namespace std;

int brute(vector<int> arr, int n) {

	int flag;
	int ans;
	for (int i = 0; i <= n; i++) {
		flag = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j] == i) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			ans = i;
			break;
		}
	}

	return ans;
}

int better(vector<int> arr, int n) {

	vector<int> hashArr(n + 1, 0);

	for (int i = 0; i < n; i++) {
		hashArr[arr[i]] = 1;
	}

	int ans = 0;
	for (int i = 0; i < hashArr.size(); i++) {

		if (hashArr[i] == 0) {
			ans = i;
			break;
		}
	}

	return ans;
}

int optimal1(vector<int> arr, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return (n * (n + 1)) / 2 - sum;
}

int optimal2(vector<int> arr, int n) {
	int xor1 = 0;
	int xor2 = 0;
	for (int i = 0; i < n; i++) {
		xor1 = xor1 ^ i;
		xor2 = xor2 ^ arr[i];
	}
	xor1 = xor1 ^ n;

	return xor1 ^ xor2;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	// Explanation
	// n = 5, arr only has elements from 0<=arr[i]<=n
	// arr = 1 2 0 5 3
	// here 4 is missing from array so answer is 4

	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	// Brute force approach:
	// linear search and find the missing element
	// TC is O(n*n)
	// SC is O(1)
	// cout << brute(arr, n) << endl;

	// Better approach: use hashing (map)
	// TC is O(2n)
	// SC is O(n)
	// cout << better(arr, n) << endl;

	// Optimal 1: using sum
	// for n = 5, the sum of 1 to 5 is n*(n+1)/2
	// find sum and substract it from total sum
	// TC is O(n)
	// SC is O(1)
	// cout << optimal1(arr, n) << endl;

	// Optimal 2: using XOR
	// XOR of 2 same numbers will be 0
	// XOR of 0 and X is always X
	// TC is O(n)
	// SC is O(1)
	cout << optimal2(arr, n) << endl;

	// XOR approach is better bcz integer overflow will happen
	// for sum variable, so we have to use long long

	return 0;
}