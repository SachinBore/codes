// From  Striver's Lower and Upper bound video lecture

#include <bits/stdc++.h>
#include <algorithm> // for lower_bound, upper_bound and sort

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
#endif

    // array given in lower_bound() and upper_bound() is always sorted!!!

    // lower_bound() function

    // lower_bound() returns an iterator
    // if the lower_bound() finds the given value, then it returns the iterator of that value,
    // if the given value is not present then it returns the iterator of very next greater element,
    // if the given value is higher than the array max value then it returns the array.end()
    int n; cin >> n;
    int arr[n] = {1, 4, 5, 6, 9, 9, 11};

    auto it = lower_bound(arr, arr + n, 4); // returns the address of 4

    auto it = lower_bound(arr, arr + n, 7); // as 7 is not there, it will return address of very next greater element of 7, i.e, 9

    auto it = lower_bound(arr, arr + n, 12); // as 12 is not present it will return the address of arr.end()

    // if we want to get index of element from lower_bound()
    int index = lower_bound(arr, arr + n, 4) - arr; // index is 1

    int index = lower_bound(arr, arr + n, 7) - arr; // index is 4, 7 not present so it returns the index of very next greater element of 7, i.e, 9.

    int index = lower_bound(arr, arr + n, 12) - arr; // index is 8, as 12 is not present it returns index of arr.end()




    // upper_bound() function
    // In upper_bound() it is always returns an iterator pointing to the very next greater element than given number


    int arr[n] = {1, 4, 5, 6, 9, 9, 11};

    int index = upper_bound(arr, arr + n, 4) - arr; // upper_bound() returns the address of 5, index is 2.

    int index = lower_bound(arr, arr + n, 7) - arr; // upper_bound() returns the address of 9, index is 4.

    int index = lower_bound(arr, arr + n, 12) - arr; // upper_bound() returns the address of arr.end(), index is 7(out of range).



    // upper and lower bound functions has O(logn) time complexity, which is similar to binary search.














}