#include <bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
#endif

    int n; cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    // auto it = lower_bound(arr, arr + n, 6);
    // cout << *it << endl;
    // cout << it - arr << endl;

    // int index = upper_bound(arr, arr + n, 2) - arr - 1;

    // if (index != n && arr[index] == 2) {
    //     cout << "yes :" << index << endl;
    // } else cout << "no" << endl;

    int lowerIndex = lower_bound(arr, arr + n, 13) - arr;

    int upperIndex = upper_bound(arr, arr + n, 13) - arr;

    cout << upperIndex - lowerIndex << endl;




    return 0;
}
