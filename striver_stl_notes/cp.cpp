#include <bits/stdc++.h>

using namespace std;

int checkBit(int pattern, int arr[], int n)
{
	int count = 0;
	//iterating over all elements in array.
	for (int i = 0; i < n; i++)
		//incrementing counter if element has set MSB as of pattern.
		if ((pattern & arr[i]) == pattern)
			count++;

	//returning the number of element having set MSB as of pattern.
	return count;
}

int maxAND (int arr[], int n)
{
	int res = 0, count;

	//iterating over total of 16 bits from MSB to LSB.
	for (int bit = 16; bit >= 0; bit--)
	{
		//finding the count of element in the array
		//having set MSB as of [res | (1 << bit)].
		count = checkBit(res | (1 << bit), arr, n);

		//if count >= 2 setting particular bit in result.
		if ( count >= 2 )
			res |= (1 << bit);
	}

	//returning the final maximum AND value.
	return res;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input3.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);
#endif

	int n; cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << maxAND(arr, n) << endl;


}