#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	int n; cin >> n;

	int spaces = 2 * n - 2;
	for (int i = 1; i < 2 * n; i++) {

		int stars = i;
		if (i > n) stars = 2 * n - i;

		// stars
		for (int j = 0; j < stars; j++) {
			cout << "*";
		}


		// spaces
		for (int j = 0; j < spaces; j++) {
			cout << "-";
		}

		// stars
		for (int j = 0; j < stars; j++) {
			cout << "*";
		}

		cout << endl;
		if (i < n) spaces -= 2;
		else spaces += 2;
	}


	return 0;
}