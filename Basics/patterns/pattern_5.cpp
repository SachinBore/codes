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

	// logic 1
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			cout << "* ";
		}
		cout << endl;
	}

	cout << endl;

	// logic 2
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}