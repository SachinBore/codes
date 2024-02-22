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

	// same way we can do in java
	for (int i = 0; i < n; i++) {
		for (char j = 'A'; j <= ('A' + i); j++) {
			cout << j << " ";
		}
		cout << endl;
	}


	return 0;
}