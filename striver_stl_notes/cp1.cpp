#include <bits/stdc++.h>

using namespace std;

int funn(int n, int cnt)
{
	if (n == 2)
	{
		return cnt + 1;
	}
	if (n % 2 == 0 && n != 2)
	{
		int num = n / 2;
		cnt += 1;
		return funn(n / num, cnt);
	}
	else
	{
		cnt += 1;
		return funn(n - 1, cnt);
	}
}



int main() {
#ifndef ONLINE_JUDGE
	freopen("input3.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);
#endif

	int n; cin >> n;

	int ans = funn(n, 0);

	cout << ans << endl;


	return 0;
}