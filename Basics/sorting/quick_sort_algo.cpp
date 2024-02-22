#include <bits/stdc++.h>

using namespace std;

// asc order
int partition(vector<int>& arr, int low, int high) {

	int pivot = arr[low];
	int start = low;
	int end = high;

	while (start < end) {
		while (arr[start] <= pivot) {
			start++;
		}

		while (arr[end] > pivot) {
			end--;
		}

		if (start < end) {
			swap(arr[start], arr[end]);
		}
	}
	swap(arr[low], arr[end]);

	return end;
}

// desc order
int partition_2(vector<int>& arr, int low, int high) {

	int pivot = arr[low];
	int start = low;
	int end = high;

	while (start < end) {
		while (arr[start] >= pivot) {
			start++;
		}

		while (arr[end] < pivot) {
			end--;
		}

		if (start < end) {
			swap(arr[start], arr[end]);
		}
	}
	swap(arr[low], arr[end]);

	return end;
}

void quick_sort(vector<int>& arr, int low, int high) {

	if (low < high) {
		int pivot = partition(arr, low, high);
		quick_sort(arr, low, pivot - 1);
		quick_sort(arr, pivot + 1, high);
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

	// best TC is O(nlogn)
	// worst TC is O(n*n)
	// SC is O(1)

	quick_sort(arr, 0, n - 1);


	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;


	return 0;
}