#include <bits/stdc++.h>

using namespace std;

void f1(int n) {
	if (n == 0) return;
	cout << "sachin" << endl;
	f1(n - 1);
}

void f2(int i, int n) {
	if (i > n) return;
	cout << i << endl;
	f2(i + 1, n);
}

void f3(int n) {
	if (n == 0) return;
	cout << n << endl;
	f3(n - 1);
}

// same as f2
void f4(int n) {
	if (n == 0) return;
	f4(n - 1);
	cout << n << endl;
}

void sum1(int n, int sum) {
	if (n < 1) {
		cout << sum << endl;
		return;
	}
	sum1(n - 1, sum + n);
}

int sum2(int n, int sum) {
	if (n <= 0) return sum;
	sum2(n - 1, sum + n);
}

int sum3(int n) {
	if (n == 1) return 1;
	return n + sum3(n - 1);
}

int fact(int n) {
	if (n == 1) return 1;
	return n * fact(n - 1);
}

void reverseArr(int l, int r, vector<int>& arr) {
	if (l >= r) return;
	int tmp = arr[r];
	arr[r] = arr[l];
	arr[l] = tmp;
	reverseArr(l + 1, r - 1, arr);
}

void reverseArr2(int l, vector<int>& arr) {
	if (l >= arr.size() / 2) return;
	swap(arr[l], arr[arr.size() - l - 1]);
	reverseArr2(l + 1, arr);
}

bool palin(int i, string str) {
	if (i >= str.size() / 2) return true;
	if (str[i] != str[str.size() - i - 1]) return false;
	return palin(i + 1, str);
}

int fib(int n) {
	if (n <= 1) return n;
	return fib(n - 1) + fib(n - 2);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// My Code
	// f1(5);
	// f2(1, 5);
	// f3(5);
	// f4(5);

	// sum1(5, 0);
	// cout << sum2(6, 0) << endl;
	// cout << sum3(5) << endl;

	// cout << fact(6) << endl;

	// vector<int> arr{1, 2, 3, 4};
	// reverseArr2(0, arr);

	// for (auto it : arr) {
	// 	cout << it << " ";
	// }
	// cout << endl;

	// string str = "madm";
	// cout << palin(0, str) << endl;

	// 0th 1st 2nd 3rd 4th 5th
	// 0   1   1   2   3   5
	cout << fib(0) << endl;




	return 0;
}