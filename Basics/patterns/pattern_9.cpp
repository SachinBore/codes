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

	// pyramid
	for (int i = 0; i < n; i++) {

		// space
		for (int j = n - i - 1; j > 0; j--) {
			cout << "-";
		}

		// star
		for (int j = 0; j < (2 * i + 1); j++) {
			cout << "*";
		}

		cout << endl;

	}

	// invert pyramid
	for (int i = 0; i < n; i++) {

		// space
		for (int j = 0; j < i; j++) {
			cout << "-";
		}

		// star
		for (int j = 0; j < (2 * n - 2 * i - 1); j++) {
			cout << "*";
		}

		cout << endl;
	}


	return 0;
}