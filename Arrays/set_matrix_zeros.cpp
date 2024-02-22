#include <bits/stdc++.h>

using namespace std;

void markRow(vector<vector<int>>& arr, int i, int m) {
	for (int j = 0; j < m; j++) {
		if (arr[i][j] != 0) {
			arr[i][j] = -1;
		}
	}
}
void markCol(vector<vector<int>>& arr, int j, int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i][j] != 0) {
			arr[i][j] = -1;
		}
	}
}
void brute(vector<vector<int>> arr, int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				markRow(arr, i, m);
				markCol(arr, j, n);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == -1) {
				arr[i][j] = 0;
			}
		}
	}

	for (auto it : arr) {
		for (auto i : it) {
			cout << i << " ";
		}
		cout << endl;
	}
}


void better(vector<vector<int>> arr, int n, int m) {

	vector<int> row(n, 0);
	vector<int> col(m, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				row[i] = 1;
				col[j] = 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (row[i] == 1 || col[j] == 1) {
				arr[i][j] = 0;
			}
		}
	}

	for (auto it : arr) {
		for (auto i : it) {
			cout << i << " ";
		}
		cout << endl;
	}
}


void optimal(vector<vector<int>> matrix, int n, int m) {
	// int col[m] -> matrix[0][..]
	// int row[n] -> matrix[..][0]
	int col0 = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == 0) {
				// mark i-th row as 0
				matrix[i][0] = 0;
				// mark j-th col as 0
				if (j != 0) matrix[0][j] = 0;
				else col0 = 0;
			}
		}
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (matrix[i][0] == 0 || matrix[0][j] == 0) {
				matrix[i][j] = 0;
			}
		}
	}

	if (matrix[0][0] == 0) {
		for (int j = 0; j < m; j++) matrix[0][j] = 0;
	}

	if (col0 == 0) {
		for (int i = 0; i < n; i++) matrix[i][0] = 0;
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
	int n, m; cin >> n >> m;
	vector<vector<int>> arr(n, vector<int>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	// Brute force: loop over matrix and if element is 0 then mark
	// that row and column elements as -1.
	// after that again loop over matrix and then change -1 to 0
	// TC is O(n*m)*(n+m) + O(n*m) ~ almost O(n*n*n)
	// SC is O(1)
	// brute(arr, n, m);

	// Better: maintain row and col arrays to mark which row and col
	// has 0 and re iterate through matrix and mark those row and col
	// elements as 0
	// TC is O(n*m) + O(n*m)
	// SC is O(n + m)
	// better(arr, n, m);

	// Optimal : in better approach, we are using additional col and
	// row arrays to mark, here instead of using additional arrays
	// we use 0th col of matrix means matrix[..][0] to mark cols
	// we use 0th row of matrix means matrix[0][..] to mark rows
	// TC is O(2*n*m)
	// SC is O(1)
	optimal(arr, n, m);


	return 0;
}