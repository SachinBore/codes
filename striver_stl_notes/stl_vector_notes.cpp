// striver stl notes, video from TUF channel, 1hr 7 min video

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input3.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);
#endif

	vector<int> vec;

	vec.push_back(1);

	vec.emplace_back(5);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}


	vector<pair<int, int>> v;
	v.push_back({1, 2});
	v.emplace_back(5, 6);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}

	vector<int> vv(5, 100);  // {100,100,100,100,100}
	for (int i = 0; i < vv.size(); ++i)
	{
		cout << vv[i] << endl;
	}

	vector<int> arr(5); // size is 5
	for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << endl;
	}

	vector<int> v1(5, 20);
	for (int i = 0; i < v1.size(); ++i)
	{
		cout << v1[i] << endl;
	}

	cout << "--------------" << endl;

	vector<int> v2(v1);
	for (int i = 0; i < v2.size(); ++i)
	{
		cout << v2[i] << endl;
	}


	vector<int> vec{20, 11, 30, 40, 50, 60, 70};


	vector<int>::iterator it = vec.begin();
	cout << *it << endl;
	it++;
	cout << *it << endl;

	it = it + 2;
	cout << *it << endl;

	cout << vec[0] << " " << vec.at(0);



	cout << vec.back() << endl;

	cout << vec.front() << endl;



	for (vector<int>::iterator it = vec.begin() ; it != vec.end() ; it++) {
		cout << *(it) << " ";
	}
	cout << endl;

	for (auto itr = vec.begin() ; itr != vec.end() ; itr++) {
		cout << *(itr) << " ";
	}
	cout << endl;

	//  for each loop
	for (auto itrr : vec) {
		cout << itrr << " ";
	}
	cout << endl;




	// erase function
	// vec = {10,20,30,40,50,60,70,80,90}
	vec.erase(vec.begin() + 1); // erases 20

	// vec = {10,20,30,40,50,60,70,80,90}
	vec.erase(vec.begin() + 2, vec.begin() + 5); // erases 30,40  [start,end)

	// insert function
	vector<int> v{2, 100} // {100,100}

	v.insert(v.begin(), 300); // inserts 300 at 0 index

	v.insert(v.begin() + 1, 2, 50); // inserts {50,50} at 1 index
	// v.insert(insert_index, no.of elements to insert, number to be inserted)

	v.emplace(v.begin(), 20); // inserts 20 at the beginning


	// inserting vector into another vector
	vector<int> copy(2, 20); //{20,20}

	v.insert(v.begin(), copy.begin(), copy.end()); // {20,20,100,100}

	// {10,20,30}
	cout << v.size(); // 3

	// {10,20}
	v.pop_back(); // deletes last element -> 20

	// v1 -> {10,20}
	// v2 -> {30,40}
	v1.swap(v2); // v1 -> {30,40} , v2 -> {10,20}

	v.clear(); // erases the entire vector

	cout << v.empty(); // true if vector is empty, else false


}
