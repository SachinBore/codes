#include <bits/stdc++.h>

using namespace std;

long long nCr(int r, int c) {
	long long res = 1;
	for (int i = 0; i < c; i++) {
		res = res * (r - i);
		res = res / (i + 1);
	}

	return res;
}

void q1brute(int r, int c) {

	long long res = 1;
	for (int i = 0; i < c; i++) {
		res = res * (r - i);
		res = res / (i + 1);
	}

	cout << res << endl;
}

void q2brute(int n) {

	for (int c = 1; c <= n; c++) {
		// calling Q1 brute force 2 method
		q1brute(n - 1, c - 1);
	}
}

void q2better(int n) {

	long long ans = 1;
	cout << 1 << " ";
	for (int c = 1; c < n; c++) {
		ans = ans * (n - c);
		ans = ans / c;
		cout << ans << " ";
	}
	cout << endl;
}

void q3brute(int n) {

	vector<vector<int>> ans;

	for (int row = 1; row <= n; row++) {
		vector<int> tmp;
		for (int col = 1; col <= row; col++) {
			// using nCr formula
			tmp.push_back(nCr(row - 1, col - 1));
		}
		ans.push_back(tmp);
	}

	// printing the pascal's triangle
	for (auto it : ans) {
		for (auto i : it) {
			cout << i << " ";
		}
		cout << endl;
	}
}

void q3better(int n) {

	vector<vector<long long>> ans;
	long long res;
	for (int row = 1; row <= n; row++) {
		vector<long long> tmp;
		res = 1;
		tmp.push_back(res);
		for (int col = 1; col < row; col++) {
			res = res * (row - col);
			res = res / col;
			tmp.push_back(res);
		}
		ans.push_back(tmp);
	}

	// priting the pascal's traingle
	for (auto it : ans) {
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

	// This is Pascal's Triangle
	//         1
	//       1   1
	//     1   2   1
	//    1  3   3   1
	//   1  4  6   4  1
	//  1  5 10  10  5 1



	// There are 3 types of questions that can be asked
	// on PASCAL'S TRIANGLE

	// 1Q) given row & col, tell the element at that place
	// Example : row = 3, col = 2
	// answer : 2

	// int row, col; cin >> row >> col;

	// Q1 Brute force 1: generate a pascals triangle and then
	// print given row col element

	// Q1 Brute force 2: using nCr forumula
	// nCr = n!/(r!*(n-r)!)
	// given row, col
	// row-1 C col-1
	// TC is O(col)
	// SC is O(1)
	// q1brute(row - 1, col - 1);


	// 2Q) given n, print nth row of pascals triangle
	// Example : n = 4
	// answer : 1 3 3 1

	int n; cin >> n;

	// Q2 Brute force : wkt, nth row has n elements
	// then use Q1 brute force 2 formula for n elements
	// then we can have all the elements for that row
	// TC is O(n*col)
	// SC is O(1)
	// q2brute(n);

	// Q2 Better approach : derived a formula by observation
	// for explanation watch striver pascal's triangle video
	// TC is O(n)
	// SC is O(1)
	// q2better(n);


	// 3Q) given n, print the entire pascals traingle upto n rows
	// example : n = 4
	// answer :
	//         1
	//       1   1
	//     1   2   1
	//    1  3   3   1

	// Q3 brute force: use the nCr formula for every element
	// like for n=4, wkt there are 4 rows, and for each row
	// there are rowth number of elements
	// TC is O(n*n*r) ~ O(n*n*n)
	// SC is O(1)
	// q3brute(n);

	// Q3 Better approach : use the derived formula in the
	//    Q2 better approach, it takes O(n) for each row and
	// here we are printing n rows, so O(n*n)
	// TC is O(n*n)
	// SC is O(1)
	q3better(n);


	return 0;
}