#include <bits/stdc++.h>

using namespace std;

void brute(vector<int> arr, int n) {

	int ans  = 0;
	int flag = 0;
	for (int i = 0; i < n; i++) {
		flag = 0;
		for (int j = 0; j < n; j++) {
			if (i != j && arr[i] == arr[j]) {
				flag = 1;
				break;
			}
		}

		if (flag == 0) {
			ans = arr[i];
			break;
		}
	}

	cout << ans << endl;
}

void better(vector<int> arr, int n) {

	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++) {
		mp[arr[i]]++;
	}

	for (auto it : mp) {
		if (it.second == 1) {
			cout << it.first << endl;
			break;
		}
	}
}

void optimal1(vector<int> arr, int n) {
	int xor1 = 0;
	for (int i = 0; i < n; i++) {
		xor1 = xor1 ^ arr[i];
	}

	cout << xor1 << endl;
}

void optimal2(vector<int> arr, int n) {
	int low = 0;
	int high = n - 1;

	while (low < high) {
		int mid = low + (high - low) / 2;

		if (mid % 2 == 1) mid--;

		if (arr[mid] == arr[mid + 1]) low = mid + 2;
		else high = mid;
	}

	cout << arr[low] << endl;
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

	// Brute force approach: use 2 loops
	// pick an element, if that same element found in rest of the array,
	//  break, if not then that element is the answer
	// TC is O(n*n)
	// SC is O(1)
	// brute(arr, n);

	// Better approach: using hashmap, store the element
	// with its appearence count, then loop over hashmap
	// and if count is 1, then answer is that element
	// TC is O(n) approx
	// SC is O(n) approx
	// better(arr, n);

	// Optimal approach 1: using xor
	// TC is O(n)
	// SC is O(1)
	// optimal1(arr, n);

	// Optimal approach 2: it only works if the input array is sorted
	// using binary search, we can find 'that' element.
	// TC is log(n)
	// SC is O(1)
	optimal2(arr , n);

	return 0;
}