#include <bits/stdc++.h>

using namespace std;

void brute(vector<int> arr, int n) {

	vector<int> res;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (res.size() == 0 || res[0] != arr[i]) {
			cnt = 0;
			for (int j = i; j < n; j++) {
				if (arr[i] == arr[j]) cnt++;
			}

			if (cnt > n / 3) res.push_back(arr[i]);

			if (res.size() == 2) break;
		}
	}

	// if the question says, the answer array should be sorted
	// then we sort the array
	sort(res.begin(), res.end());

	// printing the output array
	// we can return it too
	for (auto it : res) {
		cout << it << " ";
	}
	cout << endl;
}


void better(vector<int> arr, int n) {

	vector<int> res;

	int mini = n / 3 + 1;

	unordered_map<int, int> mpp;
	for (int i = 0; i < n; i++) {
		mpp[arr[i]]++;

		if (mpp[arr[i]] == mini) res.push_back(arr[i]);

		if (res.size() == 2) break;
	}

	// if the question says, the answer array should be sorted
	// then we sort the array
	sort(res.begin(), res.end());

	// printing the output array
	// we can return it too
	for (auto it : res) {
		cout << it << " ";
	}
	cout << endl;
}

void optimal(vector<int> arr, int n) {

	int cnt1 = 0, cnt2 = 0;
	int el1 = INT_MIN, el2 = INT_MIN;

	for (int i = 0; i < n; i++) {

		if (cnt1 == 0 && arr[i] != el2) {
			cnt1 = 1;
			el1 = arr[i];
		}
		else if (cnt2 == 0 && arr[i] != el1) {
			cnt2 = 1;
			el2 = arr[i];
		}
		else if (el1 == arr[i]) cnt1++;
		else if (el2 == arr[i]) cnt2++;
		else {
			cnt1--;
			cnt2--;
		}
	}

	vector<int> res;
	cnt1 = 0, cnt2 = 0;
	int mini = n / 3 + 1;

	for (int i = 0; i < n; i++) {
		if (el1 == arr[i]) cnt1++;
		if (el2 == arr[i]) cnt2++;
	}

	if (cnt1 >= mini) res.push_back(el1);

	if (cnt2 >= mini) res.push_back(el2);

	// if the question says, the answer array should be sorted
	// then we sort the array
	sort(res.begin(), res.end());

	// printing the output array
	// we can return it too
	for (auto it : res) {
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

	// Q: find all the elements which appears more than n/3 times
	// In output : At max we can have only 2 integers >n/3

	// Brute force : use nested loops and
	// count each element count, if it is >n/3 add to result vector
	// TC is O(n*n)
	// SC is O(1)
	brute(arr, n);

	// Better approach : use map and store each elements count
	// TC is O(n)
	// SC is O(n)
	better(arr, n);


	// Optimal : Extended Boyer Moore's voting algorithm
	// TC is O(2n)
	// SC is O(1)
	optimal(arr, n);


	return 0;
}