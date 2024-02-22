#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	int n, m; cin >> n >> m;
	vector<vector<int>> arr(n, vector<int>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	// It has only optimal solution
	// Optimal :
	// TC is O(n*m)
	// SC is O(n*m) -> res vector to return answer

	vector<int> res;

	int top = 0, bottom = n - 1;
	int left = 0, right = m - 1;

	while (left <= right && top <= bottom) {

		for (int i = left; i <= right; i++) {
			res.push_back(arr[top][i]);
		}
		top++;

		for (int i = top; i <= bottom; i++) {
			res.push_back(arr[i][right]);
		}
		right--;

		if (top <= bottom) {
			for (int i = right; i >= left; i--) {
				res.push_back(arr[bottom][i]);
			}
			bottom--;
		}
		if (left <= right) {
			for (int i = bottom; i >= top; i--) {
				res.push_back(arr[i][left]);
			}
			left++;
		}
	}

	for (auto i : res) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}