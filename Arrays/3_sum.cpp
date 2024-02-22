#include <bits/stdc++.h>

using namespace std;

void brute(vector<int> arr, int n) {

	set<vector<int>> st;

	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (arr[i] + arr[j] + arr[k] == 0) {
					vector<int> tmp = {arr[i], arr[j], arr[k]};
					sort(tmp.begin(), tmp.end());
					st.insert(tmp);
				}
			}
		}
	}

	vector<vector<int>> ans(st.begin(), st.end());

	for (auto it : ans) {
		for (auto i : it) {
			cout << i << " ";
		}
		cout << endl;
	}
}

void better(vector<int> arr, int n) {

	set<vector<int>> st;

	int k;
	for (int i = 0; i < n; i++) {

		set<int> hashset;

		for (int j = i + 1; j < n; j++) {

			k = -1 * (arr[i] + arr[j]);

			if (hashset.find(k) != hashset.end()) {

				vector<int> tmp = {arr[i], arr[j], k};
				sort(tmp.begin(), tmp.end());

				st.insert(tmp);
			}

			hashset.insert(arr[j]);
		}
	}

	vector<vector<int>> ans(st.begin(), st.end());
	for (auto it : ans) {
		for (auto i : it) {
			cout << i << " ";
		}
		cout << endl;
	}
}

void optimal(vector<int> arr, int n) {
	sort(arr.begin(), arr.end());

	vector<vector<int>> ans;

	for (int i = 0; i < n; i++) {
		if (i > 0 && arr[i] == arr[i - 1]) continue;
		int j = i + 1;
		int k = n - 1;
		while (j < k) {
			int sum = arr[i] + arr[j] + arr[k];
			if (sum < 0) {
				j++;
			} else if (sum > 0) {
				k--;
			} else {
				vector<int> tmp = {arr[i], arr[j], arr[k]};
				ans.push_back(tmp);
				j++;
				k--;
				while (j < k && arr[j] == arr[j - 1]) j++;
				while (j < k && arr[k] == arr[k + 1]) k--;
			}
		}
	}

	for (auto it : ans) {
		for (auto i : it) {
			cout << i << " ";
		}
		cout << endl;
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code

	int n; cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++) cin >> arr[i];


	// Q: return all unique triplets(combinations of 3) numbers whose sum is 0.
	// don't return duplicate triplets
	// ex: {-1, 2, -1} is 0, then
	//     {-1, -1, 2} is also 0, but the same combination is already there so
	// 	   we count only once. So, to overcome this just sort those 3 elements]
	//     and store it

	// Brute force : use 3 nested loops and try every combination
	// TC is O(n*n*n * log(no. of unique triplets))
	//        -> here log is for set, for unordered_set it is constant operation
	// SC is 2*O(no. of unique triplets) -> as we are using a set data structure
	// and a vector to store the triplets.
	// brute(arr, n);


	// Better approach: use Hashing, like in brute we are looping for 3 times
	// but we can remove the usage of Kth loop by using - below logic
	// like if we want the sum of all 3 elements to be zero then
	// arr[k] = -(arr[i] + arr[j]) and we will check if the arr[k] is there
	// in the array or not by using hashing
	// TC is O(n*n * log(n)) -> for set, O(n*n) for unordered_set
	// SC is 2*O(no. of unique triplets) + O(n) for hashset
	// better(arr, n);


	// Optimal solution: Use Two pointer approach
	// and we have to get rid of that extra space we are using to get
	// unique triplets. to get rid of it, we can sort the array itself.
	// TC is n(logn)+O(n*n) - to sort array + for,while loops
	// SC is O(no. of triplets)
	optimal(arr, n);

	return 0;
}