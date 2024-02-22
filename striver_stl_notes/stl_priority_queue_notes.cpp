// striver stl notes, video from TUF channel, 1hr 7 min video

#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
#endif


    // the element which has the maximum value stays at the top.
    // Inside priority queue is a tree datastructure is maintained.
    // The data is not stored in linear fashion.

    // if we are declare priority queue like this, then the maximum value stays at the top.
    // generally it is known as max heap.
    priority_queue<int> pq;

    pq.push(5);  // {5}
    pq.push(2);  // {5,2}
    pq.push(8);  // {8,5,2}
    pq.emplace(10);  // {10,8,5,2}

    cout << pq.top(); // prints the top most element, 10

    pq.pop(); // deletes the top most element, 10

    // main functions are push, emplace, top, pop

    // swap, size, empty functions are same as others


    // if we declare priority like this, then the minimum element stays at the top.
    // generally it is known as min heap.
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.push(8); // {2,5,8}
    pq.emplace(10); // {2,5,8,10}

    cout << pq.top(); // prints 2


    // Time complexity of push is log(N), top is O(1), pop is log(N)



}