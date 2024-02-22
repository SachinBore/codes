#include <bits/stdc++.h>

using namespace std;

void brute(vector<int> arr, int n, int target) {

	set<vector<int>> st;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				for (int l = k + 1; l < n; l++) {
					long long sum = arr[i] + arr[j];
					sum += arr[k];
					sum += arr[l];
					if (sum == target) {
						vector<int> tmp = {arr[i], arr[j], arr[k], arr[l]};
						sort(tmp.begin(), tmp.end());
						st.insert(tmp);
					}
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

void better(vector<int> arr, int n, int target) {

	set<vector<int>> st;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			set<long long> hashset;
			for (int k = j + 1; k < n; k++) {
				long long sum = arr[i] + arr[j];
				sum += arr[k];
				long long fourth = target - sum;
				if (hashset.find(fourth) != hashset.end()) {
					vector<int> tmp = {arr[i], arr[j], arr[k], (int)fourth};
					sort(tmp.begin(), tmp.end());
					st.insert(tmp);
				}

				hashset.insert(arr[k]);
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


void optimal(vector<int> arr, int n, int target) {

	sort(arr.begin(), arr.end());

	vector<vector<int>> ans;

	for (int i = 0; i < n; i++) {
		if (i > 0 && arr[i] == arr[i - 1]) continue;
		for (int j = i + 1; j < n; j++) {
			if (j > i + 1 && arr[j] == arr[j - 1]) continue;
			int k = j + 1;
			int l = n - 1;
			while (k < l) {
				long long sum = arr[i] + arr[j];
				sum += arr[k];
				sum += arr[l];

				if (sum < target) {
					k++;
				} else if ( sum > target) {
					l--;
				} else {
					vector<int> tmp = {arr[i], arr[j], arr[k], arr[l]};
					ans.push_back(tmp);
					k++;
					l--;
					while (k < l && arr[k] == arr[k - 1]) k++;
					while (k < l && arr[l] == arr[l + 1]) l--;
				}
			}
		}
	}

	// return ans;

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

	int n, target; cin >> n >> target;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	// Q: return all unique quadruplets(combinations of 4) numbers whose sum is target.
	// don't return duplicate quadruplets


	// Brute force : use 4 nested loops and try every combination
	// TC is O(n*n*n*n * log(no. of unique quadruplets))
	//        -> here log is for set, for unordered_set it is constant operation
	// SC is 2*O(no. of unique quadruplets) -> as we are using a set data structure
	// and a vector to store the quadruplets.
	// brute(arr, n, target);


	// Better approach: use Hashing, like in brute we are looping for 4 times
	// but we can remove the usage of Lth loop by using - below logic
	// like if we want the sum of all 3 elements to be zero then
	// arr[l] = target - (arr[i] + arr[j] + arr[k]) and we will check if the arr[l] is there
	// in the array or not by using hashing
	// TC is O(n*n*n * log(n)) -> for set, O(n*n*n) for unordered_set
	// SC is 2*O(no. of unique quadruplets) + O(n) for hashset
	// better(arr, n, target);


	// Optimal solution: Use Two pointer approach
	// and we have to get rid of that extra space we are using to get
	// unique quadruplets. to get rid of it, we can sort the array itself.
	// TC is n(logn)+O(n*n*n) - to sort array + for,while loops
	// SC is O(no. of quadruplets)
	optimal(arr, n, target);



	return 0;
}