#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	// similarly right rotate array by 1 place

	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	// Direct optimal solution
	// TC is O(n)
	// SC is O(1)

	//  input : arr = 1 2 3 4 5 6
	// output : arr = 2 3 4 5 6 1

	int tmp = arr[0];
	for (int i = 1; i < n; i++) {
		arr[i - 1] = arr[i];
	}
	arr[n - 1] = tmp;

	for (auto i : arr) cout << i << " ";
	cout << endl;

	return 0;
}