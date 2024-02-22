#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	// right rotate array by 1 place means
	// left rotating array by n-1 elements

	// in the same way
	// right rotate array by k places means
	// left rotating arrat by n-k places

	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	// Direct optimal solution
	// TC is O(n)
	// SC is O(1)

	//  input : arr = 1 2 3 4 5 6
	// output : arr = 6 1 2 3 4 5

	int tmp = arr[n - 1];
	for (int i = n - 1; i > 0; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = tmp;

	for (auto i : arr) cout << i << " ";
	cout << endl;




	return 0;
}