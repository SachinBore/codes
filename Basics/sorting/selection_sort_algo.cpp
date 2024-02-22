#include <bits/stdc++.h>

using namespace std;

// sorting in ascending order
void selection_sort(vector<int>& arr, int n) {

	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min]) min = j;
		}

		if (min != i) {
			swap(arr[i], arr[min]);
		}
	}
}

void selection_sort_2(vector<int>& arr, int n) {

	for (int i = 0; i < n - 1; i++) {
		int max = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[max]) max = j;
		}

		if (max != i) {
			swap(arr[i], arr[max]);
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
	// selection_sort(arr, n);

	// desc
	selection_sort_2(arr, n);

	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;

	return 0;
}