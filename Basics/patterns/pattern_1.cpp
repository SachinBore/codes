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
		for (int j = 0; j < n; j++) {
			cout << "*" << " ";
		}
		cout << endl;
	}



	return 0;
}