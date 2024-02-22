#include <bits/stdc++.h>

using namespace std;

int method1(int n) {
	// using while loop
	int count = 0;
	while (n > 0) {
		count++;
		n /= 10;
	}
	return count;
}

int method2(int n) {
	// using logbase10(n) + 1, gives number of digits in n
	int cnt = log10(n) + 1;
	return cnt;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	int n; cin >> n;

	cout << method1(n) << endl;

	cout << method2(n) << endl;

	return 0;
}