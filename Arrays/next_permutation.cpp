#include <bits/stdc++.h>

using namespace std;

void better(vector<int> arr) {
	next_permutation(arr.begin(), arr.end());

	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;
}

void optimal(vector<int> arr, int n) {

	int index = -1;
	for (int i = n - 2; i >= 0; i--) {
		if (arr[i] < arr[i + 1]) {
			index = i;
			break;
		}
	}

	if (index == -1) reverse(arr.begin(), arr.end());
	else {
		for (int i = n - 1; i > index; i--) {
			if (arr[i] > arr[index]) {
				swap(arr[i], arr[index]);
				break;
			}
		}

		reverse(arr.begin() + index + 1, arr.end());
	}

	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;
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

	// Q: for number 1 2 3, the next permutation is 1 3 2
	// for numbers 3 2 1 there is no next permuatation so
	// return 1 2 3 for 3 2 1.

	// Brute force: using recursion
	// 1. Generate All permutations in sorted order
	// 2. linear search given input in all permutations
	// 3. find next permutation after finding given input permutation,
	// if next permutation not exist, return first permutation
	// TC is O(n!*n)

	// Better : using C++ STL
	// better(arr);

	// Optimal :
	// TC is O(3n)
	// SC is O(1)
	optimal(arr, n);


	return 0;
}