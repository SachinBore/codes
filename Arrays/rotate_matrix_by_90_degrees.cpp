#include <bits/stdc++.h>

using namespace std;

void brute(vector<vector<int>> matrix, int n) {

	vector<vector<int>> res(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			res[j][n - i - 1] = matrix[i][j];
		}
	}

	for (auto it : res) {
		for (auto i : it) {
			cout << i << " ";
		}
		cout << endl;
	}
}

void optimal(vector<vector<int>> matrix, int n) {

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			swap(matrix[i][j], matrix[j][i]);
		}
	}

	for (int i = 0; i < n; i++) {
		reverse(matrix[i].begin(), matrix[i].end());
	}

	for (auto it : matrix) {
		for (auto i : it) {
			cout << i << " ";
		}
		cout << endl;
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code
	int n; cin >> n;
	vector<vector<int>> arr(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	// Brute force: use extra matrix and store in it
	// TC is O(n*n)
	// SC is O(n*n)
	// brute(arr, n);

	// optimal: transpose the matrix and reverse each row
	// TC is O(n*n)
	// SC is O(1)
	optimal(arr, n);

	return 0;
}