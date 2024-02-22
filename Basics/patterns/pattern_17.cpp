#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	int n; cin >> n;

	for (int i = 0; i < n; i++) {

		// spaces
		for (int j = 0; j < n - i - 1; j++) {
			cout << "-";
		}

		// chars
		char ch = 'A';
		for (int j = 0; j < (2 * i + 1); j++) {
			cout << ch;
			if (j < (2 * i + 1) / 2) ch++;
			else ch--;
		}

		// spaces
		for (int j = 0; j < n - i - 1; j++) {
			cout << "-";
		}


		cout << endl;
	}


	return 0;
}