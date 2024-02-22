#include <bits/stdc++.h>

using namespace std;

void brute(vector<int> arr1, int n1, vector<int> arr2, int n2) {

	set<int> st;
	for (int i = 0; i < n1; i++) st.insert(arr1[i]);
	for (int i = 0; i < n2; i++) st.insert(arr2[i]);

	vector<int> res;
	for (auto it : st) {
		res.push_back(it);
	}

	for (auto it : res) {
		cout << it << " ";
	}
	cout << endl;
}

void optimal(vector<int> a, int n1, vector<int> b, int n2) {

	vector<int> unionArr;
	int i = 0;
	int j = 0;

	while (i < n1 && j < n2) {
		if (a[i] <= b[j]) {
			if (unionArr.size() == 0 || unionArr.back() != a[i]) {
				unionArr.push_back(a[i]);
			}
			i++;
		}
		else {
			if (unionArr.size() == 0 || unionArr.back() != b[j]) {
				unionArr.push_back(b[j]);
			}
			j++;
		}
	}

	while (i < n1) {
		if (unionArr.size() == 0 || unionArr.back() != a[i]) {
			unionArr.push_back(a[i]);
		}
		i++;
	}

	while (j < n2) {
		if (unionArr.size() == 0 || unionArr.back() != b[j]) {
			unionArr.push_back(b[j]);
		}
		j++;
	}

	for (auto i : unionArr) {
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
	vector<int> arr1(n1);
	for (int i = 0; i < n1; i++) cin >> arr1[i];

	int n2; cin >> n2;
	vector<int> arr2(n2);
	for (int i = 0; i < n2; i++) cin >> arr2[i];

	// Explanation:
	//  arr1 = 1 1 2 3 4 5
	//  arr2 = 2 3 4 4 5 6
	//output = 1 2 3 4 5 6
	// all elements in arr1,arr2 should come only once in output

	// Brute force : insert arr1, arr2 elements into set
	// TC is O(n1logn + n2logn) + O(n1+n2)
	// SC is O(n1+n2) for set, + O(n1+n2) to return the union answer
	// brute(arr1, n1, arr2, n2);


	// Optimal : using 2 pointer approach
	// TC is O(n1 + n2)
	// SC is O(n1 + n2) for union array to return
	optimal(arr1, n1, arr2, n2);





	return 0;
}