#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	int n; cin >> n;

	// Logic in this pattern is IMPORTANT
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {
			cout << n - min(min(i, j), min(2 * n - 2 - i, 2 * n - 2 - j));
		}
		cout << endl;
	}



	return 0;
}