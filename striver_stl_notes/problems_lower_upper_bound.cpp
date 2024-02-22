// Problems From  Striver's Lower and Upper bound video lecture

#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
#endif


    // Q1. find and print the first occurrence of X in a sorted array, if it not there print -1.
    vector<int> v{1, 4, 4, 4, 4, 9, 9, 10, 11};

    // method -1
    auto it = lower_bound(v.begin(), v.end(), 8);

    if (*it == 8) {
        cout << *it << endl;
    }
    else cout << -1 << endl;

    // method -2
    int idx = lower_bound(v.begin(), v.end(), 8) - v.begin();
    if (idx != 9 && v[idx] == 8) {
        cout << v[idx] << endl;
    }
    else cout << -1 << endl;


    // Q2. find and print the last occurrence of X in a sorted array, if it not there print -1.
    vector<int> v{1, 4, 4, 4, 4, 9, 9, 10, 11};

    int idx = upper_bound(v.begin(), v.end(), 2) - v.begin();
    idx--;

    if (idx >= 0 &&  v[idx] == 2) cout << v[idx] << endl;
    else cout << -1 << endl;



    // Q3. find and print the largest number smaller than X in a sorted array, else print -1.
    vector<int> v{1, 4, 4, 4, 4, 9, 9, 10, 11};

    int idx = lower_bound(v.begin(), v.end(), 1) - v.begin();
    idx--;

    if (idx >= 0) cout << v[idx] << endl;
    else cout << -1 << endl;



    // Q4. find and print the smallest number greater than X in a sorted array, else print -1.
    vector<int> v{1, 4, 4, 4, 4, 9, 9, 10, 11};

    int idx = upper_bound(v.begin(), v.end(), 1) - v.begin();

    if (idx < 9) cout << v[idx] << endl;
    else cout << -1 << endl;


}