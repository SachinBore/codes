#include <bits/stdc++.h>

using namespace std;

// n = 10^6,
int N = 1000000;
bool sieve[1000000 + 1];

void createSieve() {
	for (int i = 2; i <= N; i++) {
		sieve[i] = true;
	}

	for (int i = 2; i * i <= N; i++) {
		if (sieve[i]) {
			for (int j = i * i; j <= N; j += i) {
				sieve[j] = false;
			}
		}
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code
	// sieve technique for primes

	createSieve();

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;

		if (sieve[n] == true) cout << "yes" << endl;
		else cout << "no" << endl;
	}




	return 0;
}