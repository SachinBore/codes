// striver stl notes, video from TUF channel, 1hr 7 min video

#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
#endif


    // FIFO -> first in first out
    // elements are inserted at the back(end) and deleted from the front
    // all the operations takes O(1) time complexity

    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.push(3); // {1,2,3}
    q.emplace(4); // {1,2,3,4}


    q.back() += 5; // back means last element, here it is 4 + 5 = 9.

    cout << q.back(); // prints 9

    // q is {1,2,3,9}
    cout << q.front(); // prints 1


    q.pop(); // deletes first element, now q is {2,9}

    cout << q.front(); // prints 2

    // size swap empty is same as stack

}