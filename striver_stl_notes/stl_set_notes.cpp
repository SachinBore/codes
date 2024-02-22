// striver stl notes, video from TUF channel, 1hr 7 min video

#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
#endif

    // ------Set------
    // set -> it stores everything in the sorted order and stores unique elements.

    set<int> st;
    st.insert(1); // {1}
    st.insert(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.emplace(3); // {1,2,3,4}

    // Functionality of insert in vector
    // can be used also, that only increases efficiency

    // begin(), end(), rbegin(), rend(), size()
    // empty() and swap() are same as those of above.

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // it returns an iterator which points to address of 3.

    // {1, 2, 3, 4, 5}
    auto it = st.find(6);
    // if the element is not present in the set, then it always returns st.end() iterator.

    // {1, 4, 5}
    st.erase(5) // erases 5, takes log(N) time

    // if the element 2 present in the set it gives 1(we can say it as count also), else gives 0.
    int cnt = st.count(2);


    // we can give the element to erase in the erase function
    // or we can also give the address/iterator to erase the element.
    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1, 2, 3, 4, 5}
    // erase[start, end) -> [inclusive, exclusive)
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // deletes {2, 3}, after erase {1, 4, 5}

    // most important are find, count and insert.

    // In set everything happens in log(N) time complexity, insert erase takes log(N) time.


    // lower_bound() and upper_bound() function works in the same way as in vector it does.

    // This is the syntax
    auto it = st.lower_bound(2);
    auto itt = st.upper_bound(3);


    // ------Multi-Set------
    // everything is same as set, but it stores duplicate elements also.

    multiset<int> ms;
    ms.inset(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1); // gives the number of 1's in multiset

    // if we erased like this, then only 1 occurrence will be erased
    // only a single one will be erased.
    ms.erase(ms.find(1));
    // find returns the address of 1 and if we erase the element using its address then only single
    // occurrence of that element will be erased, but if we erase using the element itself then all
    // the occurrences will be erased.

    ms.erase(ms.find(1), ms.find(1) + 2); // deleting multiple elements


    // rest all functions are same as set.


    // ------ Unordered-Set ------

    // Syntax
    unordered_set<int> st;

    // it stores unique elements but it doesn't store in sorted order. It has randomized order.
    // In most of the cases all the operations are in Time Complexity of O(1).
    // but for the wrost case the Time Complexity will go to O(N), and it happens very rarely.

    // all operations are similar to set, but lower_bound() and upper_bound() does not works.
    // it does not stores in any particular order it has a better complexity than set in most cases,
    // except some when collision happens.



}