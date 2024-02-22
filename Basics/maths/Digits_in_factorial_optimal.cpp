#include <bits/stdc++.h>
using namespace std;


int solve(int n) {

	double res = 0;
	for (int i = 1; i <= n; i++) {
		res += log10(i);
	}
	res = floor(res) + 1;
	return res;
}


// Time complexity is O(N)
// Space complexity is O(1)


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int testcase; cin >> testcase;
	while (testcase--) {
		int n; cin >> n;
		cout << solve(n) << endl;;
	}

}