#include <bits/stdc++.h>

using namespace std;

// type 1 and type 2 brute solution
bool brute(vector<int> arr, int n, int target) {

	for (int i = 0; i < n; i++) {

		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == target) {
				// for type 2, return indexes, here i, j is the index
				// printing indexes, we can also return them using vector
				cout << i << " " << j << endl;

				// for type 1, here return true
				return true;
			}
		}
	}

	// for type 1, here return false
	return false;
}

bool better(vector<int> arr, int n, int target) {

	unordered_map<int, int> mp;

	for (int i = 0; i < n; i++) {
		int rem = target - arr[i];
		if (mp.find(rem) != mp.end()) {
			// for type 2, return indexes, here i, j is the index
			// printing indexes, we can also return them using vector
			cout << mp[rem] << " " << i << endl;

			// for type 1, here return true
			return true;
		}
		mp[arr[i]] = i;
	}

	// for type 1, here return false
	return false;
}

bool optimal(vector<int> arr, int n, int target) {
	sort(arr.begin(), arr.end());

	int left = 0;
	int right = n - 1;

	while (left < right) {
		int value = arr[left] + arr[right];
		if (value == target) {
			cout << left << " " << right << endl;
			return true;
		}
		else if (value < target) {
			left++;
		} else {
			right--;
		}
	}

	return false;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	// 2 sum question has 2 types of varieties
	// 1) if the target sum exist in the array return true, else false
	// 2) there is always exist an answer, return index of elements
	// that make up to target sum in index order.

	int n, target; cin >> n >> target;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	// Brute force approach: using loops
	// TC is O(n*n)
	// SC is O(1)
	// cout << brute(arr , n, target) << endl;

	// Better approach: use Hashing
	// TC is O(n)
	// for map -> O(nlogn)
	// for unordered map -> O(n) or O(n*n)
	// SC is O(n)
	// cout << better(arr, n, target) << endl;

	// use this approach when we have a condition to not use map
	// and dont use this, when we need to return indexes w.r.to input array
	// Optimal approach : using 2 pointer approach
	// sort the array, takes O(nlogn)
	// TC is O(nlogn)
	// Sc is O(1)
	cout << optimal(arr, n, target) << endl;


	return 0;
}