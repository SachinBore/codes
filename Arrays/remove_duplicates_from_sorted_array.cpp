#include <bits/stdc++.h>

using namespace std;

int brute(vector<int>& arr, int n) {
	set<int> st;
	for (int i = 0; i < n; i++) {
		st.insert(arr[i]);
	}

	int idx = 0;
	for (auto it : st) {
		arr[idx] = it;
		idx++;
	}

	return st.size();
}

int optimal(vector<int>& arr, int n) {

	int i = 0;
	for (int j = 1; j < n; j++) {
		if (arr[i] != arr[j]) {
			arr[i + 1] = arr[j];
			i++;
		}
	}
	return i + 1;
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

	// Brute force: use set
	// TC is O(nlogn) -> to insert into set + O(n) -> looping over set
	// SC is O(n) -> extra space for set

	// cout << "size : " << brute(arr, n) << endl;

	// Optimal : using two pointer approach
	// TC is O(n)
	// SC is O(1)

	cout << "size : " << optimal(arr, n) << endl;

	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;

	return 0;
}