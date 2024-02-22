#include <bits/stdc++.h>

using namespace std;

void insertion_sort(vector<int>& arr, int n) {

	for (int i = 1; i < n; i++) {
		int j = i;
		while (j >= 1 && arr[j - 1] > arr[j]) {
			swap(arr[j - 1], arr[j]);
			j--;
		}
	}
}

void insertion_sort_2(vector<int>& arr, int n) {
	for (int i = 1; i < n; i++) {
		int j = i;
		while (j >= 1 && arr[j - 1] < arr[j]) {
			swap(arr[j - 1], arr[j]);
			j--;
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
	for (int i = 0; i < n; i++) cin >> arr[i];

	// asc
	// insertion_sort(arr, n);

	// desc
	insertion_sort_2(arr, n);

	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;




	return 0;
}