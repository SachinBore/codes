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

	for (int i = 0; i < 2 * n - 1; i++) {
		int stars = i + 1;
		if (i >= n) stars = 2 * n - i - 1;
		for (int j = 0; j < stars; j++) {
			cout << "*";
		}

		cout << endl;

	}

	return 0;
}