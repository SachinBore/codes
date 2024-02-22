#include <bits/stdc++.h>

using namespace std;

void brute(vector<int> arr, int n) {

	if (n <= 1) {
		cout << n << endl;
		return;
	}

	int longest = 1;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cnt = 1;
		int value = arr[i];
		for (int j = 0; j < n; j++) {

			if (value + 1  == arr[j]) {
				cnt++;
				value++;
				j = -1;
			}
		}

		longest = max(longest, cnt);
	}

	cout << longest << endl;
}

void better(vector<int> arr, int n) {

	sort(arr.begin(), arr.end());

	if (n <= 1) {
		cout << n << endl;
		return;
	}

	int longest = 1;
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1]) continue;
		if (arr[i] == arr[i - 1] + 1) {
			cnt++;
			longest = max(longest, cnt);
		}
		else cnt = 1;
	}

	cout << longest << endl;
}

void optimal(vector<int> arr, int n) {

	if (n <= 1) {
		cout << n << endl;
		return;
	}

	int longest = 1;
	unordered_set<int> st;
	for (int i = 0; i < n; i++) {
		st.insert(arr[i]);
	}

	for (auto it : st) {
		if (st.find(it - 1) == st.end()) {
			int cnt = 1;
			int value = it;
			while (st.find(value + 1) != st.end()) {
				cnt++;
				value++;
			}
			longest = max(longest, cnt);
		}
	}


	cout << longest << endl;
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

	// Brute force: use nested loops and iterate over each element
	// and find the longest consecutive sequence
	// TC is O(n*n*n)
	// SC is O(1)
	brute(arr, n);

	// Better : sort the array, and find the longest consecutive sequence
	// TC is O(nlogn)
	// SC is O(1)
	better(arr, n);

	// Optimal : using set (new logic)
	// TC is O(n + 2n), considering set takes O(1)
	// SC is O(n)
	optimal(arr, n);


	return 0;
}