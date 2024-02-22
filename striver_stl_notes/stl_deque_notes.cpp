// striver stl notes, video from TUF channel, 1hr 7 min video

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input3.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);
#endif

	// deque -> doubly ended queues

	deque<int> dq;
	dq.push_back(1); // {1}
	dq.emplace_back(2);  // {1,2}
	dq.push_front(4); // {4,1,2}
	dq.emplace_front(3); // {3,4,1,2}

	dq.pop_back(); // {3,4,1}
	dq.pop_front(); // {4,1}

	for (auto it : dq) {
		cout << it << endl;
	}

	cout << dq.front() << " " << dq.back() << endl;


	// rest functions are same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap
}