#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	int n; cin >> n;

	char ch = 'A' + n - 1;
	for (int i = 0; i < n; i++) {
		for (char j = ch - i; j <= ch; j++) {
			cout << j;
		}
		cout << endl;
	}


	return 0;
}