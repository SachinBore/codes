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

	for (char i = 'A'; i < 'A' + n; i++) {
		for (char j = 'A'; j <= i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}


	return 0;
}