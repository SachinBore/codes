#include <bits/stdc++.h>

using namespace std;

void bubble_sort(vector<int>& arr, int n) {
	bool swapp = true;
	for (int i = n - 1; i >= 1 && swapp; i--) {
		swapp = false;
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				swapp = true;
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void bubble_sort_2(vector<int>& arr, int n) {
	bool swapp = true;
	for (int i = n - 1; i >= 1; i--) {
		swapp = false;
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[j + 1]) {
				swapp = true;
				swap(arr[j], arr[j + 1]);
			}
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
	bubble_sort(arr, n);

	// desc
	// bubble_sort_2(arr, n);

	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;






	return 0;
}