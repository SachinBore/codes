#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {

		// numbers
		for (int j = 0; j <= i; j++) {
			cout << (j + 1);
		}

		// space
		for (int j = 0; j < (2 * n - 2 - 2 * i); j++) {
			cout << "-";
		}

		// numbers
		for (int j = i; j >= 0 ; j--) {
			cout << (j + 1);
		}

		cout << endl;


	}




	return 0;
}