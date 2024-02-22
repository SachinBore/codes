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
		for (int j = 0; j < i; j++) {
			cout << "-";
		}

		// star
		for (int j = 0; j < (2 * n - 1 - 2 * i); j++) {
			cout << "*";
		}

		// space
		for (int j = 0; j < i; j++) {
			cout << "-";
		}
		cout << endl;
	}


	return 0;
}