#include <bits/stdc++.h>

using namespace std;

void brute(vector<int> a, int n1, vector<int> b, int n2) {

	vector<int> visited(n2, 0);
	vector<int> res;

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (a[i] == b[j] && visited[j] == 0) {
				res.push_back(a[i]);
				visited[j] = 1;
				break;
			}
			if (b[j] > a[i]) break;
		}
	}


	for (auto i : res) {
		cout << i << " ";
	}
	cout << endl;
}

void optimal(vector<int> a, int n1, vector<int> b, int n2) {

	vector<int> res;

	int i = 0;
	int j = 0;
	while (i < n1 && j < n2) {
		if (a[i] < b[j]) {
			i++;
		}
		else if (b[j] < a[i]) {
			j++;
		}
		else {
			res.push_back(a[i]);
			i++;
			j++;
		}
	}

	for (auto i : res) {
		cout << i << " ";
	}
	cout << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	int n1; cin >> n1;
	vector<int> a(n1);
	for (int i = 0; i < n1; i++) cin >> a[i];

	int n2; cin >> n2;
	vector<int> b(n2);
	for (int i = 0; i < n2; i++) cin >> b[i];

	// Explanation:
	//  arr1 = 1 2 2 3 3 5
	//  arr2 = 2 3 3 4 5 6
	//output = 2 3 3 5
	// elements that are there in both arrays should be in output

	// Brute force: loop over one array and keep track of another array
	// with visited array.
	// TC is O(n1*n2)
	// SC is o(min(n1,n2)) for using visited array
	// we use smaller array as visited array
	// brute(a, n1, b, n2);

	// Optimal :using 2 pointer approach
	// TC is O(n1 + n2)
	// SC is O(min(n1, n2)) -> to store result array
	optimal(a, n1, b, n2);


	return 0;
}