#include <bits/stdc++.h>
using namespace std;

// codeforces question
// 1294C PRODUCT OF THREE NUMBERS
// based on primes

void solve(int n) {
	int a = 1, b = 1, c = 1;

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			a = i;
			break;
		}
	}

	n = n / a;

	for (int i = a + 1; i * i <= n; i++) {
		if (n % i == 0) {
			b = i;
			break;
		}
	}

	if (b != 1) c = n / b;

	if (a != b && b != c && a != c && c > 1) {
		cout << "Yes" << endl;
		cout << a << " " << b << " " << c << endl;
	}
	else cout << "No" << endl;
}


// Time complexity is O(Nlog(logN))
// Space complexity is O(N)

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		solve(n);
	}
}