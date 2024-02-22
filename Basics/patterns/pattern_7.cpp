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

		// space
		for (int j = n - i - 1; j > 0; j--) {
			cout << "-";
		}

		// stars
		for (int j = 0; j < (2 * i + 1); j++) {
			cout << "*";
		}

		// space
		for (int j = n - i - 1; j > 0; j--) {
			cout << "-";
		}



		cout << endl;
	}



	return 0;
}