#include <bits/stdc++.h>

using namespace std;

void brute(vector<int>& arr, int n) {
	// use sort or implement merge sort algo
}

void better(vector<int>& arr, int n) {

	int cnt0 = 0;
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) cnt0++;
		else if (arr[i] == 1) cnt1++;
		else cnt2++;
	}

	for (int i = 0; i < n; i++) {
		if (cnt0 != 0) {
			arr[i] = 0;
			cnt0--;
		} else if (cnt1 != 0) {
			arr[i] = 1;
			cnt1--;
		} else {
			arr[i] = 2;
			cnt2--;
		}
	}
}

void optimal(vector<int>& arr, int n) {
	int left = 0;
	int mid = 0;
	int right = n - 1;

	while (mid <= right) {
		if (arr[mid] == 0) {
			swap(arr[left], arr[mid]);
			mid++;
			left++;
		} else if (arr[mid] == 1) {
			mid++;
		} else {
			swap(arr[right], arr[mid]);
			right--;
		}
	}
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

	// Brute force : sort the array using
	// sort() or using sorting algo - merge
	// TC is O(nlogn)
	// SC is O(n)
	brute(arr, n);


	// Better approach : use variables and store count of
	// 0s 1s 2s and then change those indexes to those values
	// TC is O(2n)
	// SC is O(1)
	// better(arr, n);


	// Optimal : use 3 pointer approach
	// 3 pointer approach also called as
	// Dutch National Flag Algorithm
	// TC is O(n)
	// SC is O(1)
	optimal(arr, n);


	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;

	return 0;
}