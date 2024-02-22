// striver stl notes, video from TUF channel, 1hr 7 min video

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input3.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);
#endif

	// list is exactly same as vector, but it has front operations as well.

	list<int> ls;

	ls.push_back(5); // {5}
	ls.emplace_back(4); // {5,4}

	ls.push_front(6); // {6,5,4}
	ls.emplace_front(7); // {7,6,5,4}

	ls.pop_front(); // deletes 7, {6,5,4}
	ls.pop_back(); // deletes 4, {6,5}

	// rest functions is same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap

	for (auto it : ls) {
		cout << it << " ";
	}


}