// striver stl notes, video from TUF channel, 1hr 7 min video

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input3.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);
#endif


	pair<int, int> p = {1, 3};

	cout << p.first << " " << p.second << endl;


	pair<int, pair<int, int>> pp = {2, {5, 6}};

	cout << pp.first << " " << pp.second.first << " " << pp.second.second << endl;


	int n; cin >> n;
	pair<int, int> arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i].first << endl;
	}

	pair<string, int> std;

	std = make_pair("sachin", 1);

	cout << std.first << " " << std.second << endl;

}