// striver stl notes, video from TUF channel, 1hr 7 min video

#include <bits/stdc++.h>
#include <algorithm> // for lower_bound, upper_bound and sort

using namespace std;

// defining comparator function for Example - 1:
bool comp(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second < p2.second) return true;
	if (p1.second > p2.second) return false;

	// if they are same
	if (p1.first > p2.first) return true;
	// else
	return false;
}



int main() {
#ifndef ONLINE_JUDGE
	freopen("input3.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);
#endif

	// some algorithms which are mandatory to know

	// **********sort**********
	// syntax -> sort(start_iterator, end_iterator) -> [inclusive, exclusive) -> [start,end)

	// array syntax
	sort(arr, arr + n); // arr -> array , n is size of array, sorts in ascending order
	// vector syntax
	sort(v.begin(), v.end()); // sorts in ascending order
	// we can sort any container using above method

	// to sort the portion of array/vector
	sort(v.begin() + 2, v.begin() + 5); // [inclusive, exclusive) -> [start,end)

	// to sort in descending order
	sort(arr, arr + n, greater<int>()); // sorts in descending order
	// here, greater<int> is an in-built comparator


	// if we want to sort in our own way, then we have to define the comparator function.

	// Example-1 : sort the pair(ascending) according to the second element, if the second element is same,
	//           then sort it according to the first element but in descending order.
	pair<int, int> pa[] = { {1, 2}, {2, 1}, {4, 1} };

	sort(pa, pa + n, comp); // n is size, comp is self-written comparator, and comparator is boolean function
	// output is : { {4, 1}, {2, 1}, {1, 2} }




	// ********** __builtin_popcount() **********
	int num = 6;
	int cnt = __builtin_popcount(num); // it returns the no.of set bits(1's) in binary form of the number, it returns 2.

	// if the number is long long, the we use __builtin_popcount"ll"()
	long long int num = 7;
	int cnt = __builtin_popcountll(num); // returns 3


	// ********** next_permutation **********

	// if we want to print all the permutations of string, we use this.
	// if we want to print all the permutations then we have to give the sorted string.
	// if we don't give the sorted string, it will continue from that string and prints
	// the follow-up permutations but not all.

	string str = "123";
	sort(s.begin(), s.end());

	do {
		cout << s << endl;
	} while (next_permutation(s.begin(), s.end()));

	// we can also have *****prev_permutation()*****



	// ********** max_element() and min_element() **********

	// max_element() and min_element() returns the address, *address gives the value.
	int maxi = *max_element(arr, arr + n); // max_element(start_iterator, end_iterator);
	int mini = *min_element(arr, arr + n); // min_element(start_iterator, end_iterator);


}