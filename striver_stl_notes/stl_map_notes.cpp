// striver stl notes, video from TUF channel, 1hr 7 min video

#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
#endif

    // ------ map ------
    // map container which stores everything in respect of {key,value}
    // key,value can be of any data type, ex: int, double, pair etc..

    // map< key, value > mpp;
    map<int, int> mpp;

    // map<key, pair<value1, value2>> mpp;
    map<int, pair<int, int>> mpp;

    // map< pair< key1, key2>, value> mpp;
    map<pair<int, int>, int >> mpp;

    // ***** map stores unique keys in sorted order, duplicate keys are not allowed*****

    map<int, int> mp; // {}
    mp[1] = 2; // key = 1, value = 2, {{key,value}} -> { {1,2} }
    mp.emplace({3, 1}); // -> key = 3, value = 1, -> { {1,2}, {3,1} }
    mp.insert({2, 4}); // key = 2, value = 4, -> { {1,2}, {2,4}, {3,1} }


    map<pair<int, int>, int >> mpp;
    mpp[ {2, 3}] = 10; // { {key1, key2}, value} -> { {2,3}, 10}


    // mp -> { {1,2}, {2,4}, {3,1} }
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    // output be like
    /* key, value
        1 2
        2 4
        3 1
    */

    cout << mp[1]; // prints 2, as key '1' value is 2.
    cout << mp[5]; // key '5' is not present so it returns null and prints 0.

    auto it = mp.find(3); // find(key); -> find returns the address {key,value} pair to the iterator
    cout << *(it).first << " " << *(it).second; // printing key and value using first and second.

    auto it = mp.find(5); // if key 5 is not present then it points to & returns the mp.end()

    // lower_bound() and upper_bound()
    auto it = mp.lower_bound(2);

    auto it = mp.upper_bound(3);

    // erase, swap, size, empty are same as above


    // ------ multi-map ------
    // everything is same as map, but it can store multiple/duplicate keys.
    // it stores duplicate keys in sorted order.
    // only mmp[key] operation cannot be used here
    multimap<int> mmp;



    // ------ unordered-map ------
    // it has unique keys but it does not stores in sorted order, it stores in randomized order.
    // same as set and unordered_set difference.
    unordered_map<int> ump;

    // map works in log(N) time and unordered_map works in O(1)->(most cases)
    // and in worst case O(N)->(happens rarely)






}