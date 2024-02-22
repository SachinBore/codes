#include <bits/stdc++.h>

using namespace std;

// sort in ascending order
void merge(vector<int>& arr, int low, int mid, int high) {

	int left = low;
	int right = mid + 1;

	vector<int> tmp;

	while (left <= mid && right <= high) {
		if (arr[left] <= arr[right])
		{
			tmp.push_back(arr[left]);
			left++;
		}
		else {
			tmp.push_back(arr[right]);
			right++;
		}
	}

	while (left <= mid) {
		tmp.push_back(arr[left]);
		left++;
	}

	while (right <= high) {
		tmp.push_back(arr[right]);
		right++;
	}

	for (int i = low; i <= high; i++) {
		arr[i] = tmp[i - low];
	}
}

// sort in descending order
void merge_desc(vector<int>& arr, int low, int mid, int high) {

	int left = low;
	int right = mid + 1;

	vector<int> tmp;

	while (left <= mid && right <= high) {
		if (arr[left] >= arr[right]) {
			tmp.push_back(arr[left]);
			left++;
		}
		else {
			tmp.push_back(arr[right]);
			right++;
		}
	}

	while (left <= mid) {
		tmp.push_back(arr[left]);
		left++;
	}

	while (right <= high) {
		tmp.push_back(arr[right]);
		right++;
	}

	for (int i = low; i <= high; i++) {
		arr[i] = tmp[i - low];
	}
}


void merge_sort(vector<int>& arr, int low, int high) {

	if (low == high) return;

	int mid = low + (high - low) / 2;

	merge_sort(arr, low, mid);

	merge_sort(arr, mid + 1, high);

	// asc
	// merge(arr, low, mid, high);

	// desc
	merge_desc(arr, low, mid, high);

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

	// TC is O(nlogn)
	// SC is O(n)

	merge_sort(arr, 0, n - 1);

	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;


	return 0;
}