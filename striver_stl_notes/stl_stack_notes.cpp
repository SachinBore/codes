// striver stl notes, video from TUF channel, 1hr 7 min video

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input3.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);
#endif

	// LIFO -> last in first out
	// indexing is not allowed in stack
	// main 3 operations are push / emplace, pop, top
	// all operations in stack takes O(1) Time

	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.emplace(5);

	cout << st.top() << endl; // prints 5, '** st[2] is invalid **'
	// cout << st.peek() << endl;

	st.pop(); // st looks like {4,3,2,1}

	cout << st.top() << endl; // prints 4

	cout << st.size() << endl; // prints size of stack, i.e, 4

	cout << st.empty() << endl; // returns true if stack is empty else false

	stack<int> st1, st2;
	st1.swap(st2);







}