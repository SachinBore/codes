#include <bits/stdc++.h>

using namespace std;

void better(vector<int> arr, int n) {

	vector<int> pos;
	vector<int> neg;

	for (int i = 0; i < n; i++) {
		if (arr[i] >= 0) pos.push_back(arr[i]);
		else neg.push_back(arr[i]);
	}

	for (int i = 0; i < n / 2; i++) {
		arr[2 * i] = pos[i];
		arr[2 * i + 1] = neg[i];
	}

	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;
}

void optimal(vector<int> arr, int n) {

	int even = 0;
	int odd = 1;
	vector<int> res(n);

	for (int i = 0; i < n; i++) {
		if (arr[i] >= 0) {
			res[even] = arr[i];
			even += 2;
		}
		else {
			res[odd] = arr[i];
			odd += 2;
		}
	}

	for (auto it : res) {
		cout << it << " ";
	}
	cout << endl;
}

void followup(vector<int> arr, int n) {

	vector<int> pos;
	vector<int> neg;

	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) neg.push_back(arr[i]);
		else pos.push_back(arr[i]);
	}

	int psize = pos.size();
	int nsize = neg.size();

	for (int i = 0; i < min(psize, nsize); i++) {
		arr[2 * i] = pos[i];
		arr[2 * i + 1] = neg[i];
	}

	if (nsize < psize) {
		int idx = nsize * 2;
		for (int i = nsize; i < psize; i++) {
			arr[idx] = pos[i];
			idx++;
		}
	} else {
		int idx = psize * 2;
		for (int i = psize; i < nsize; i++) {
			arr[idx] = neg[i];
			idx++;
		}
	}

	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// Q: in given array, the number of
	// positives and negatives are equal

	// better force:
	// store pos and neg in a separate array
	// TC is O(n + n/2)
	// SC is O(n)
	// better(arr, n);

	// Optimal:
	// maintain a separate array for result array
	// and loop over given array
	// like pos numbers goes to even index places
	// neg numbers goes to odd index places
	// TC is o(n)
	// SC is O(n)
	// optimal(arr, n);

	// Follow-up question : in the given array, the number of
	// postives and negatives are not equal
	// means pos > neg or neg > pos
	// In this case we cannot have optimal solution like above
	// we can use above better solution with modification
	// TC is O(2n)
	// SC is O(n)
	followup(arr, n);

	return 0;
}