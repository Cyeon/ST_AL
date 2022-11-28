#include<iostream>
#include <set>
#include <string>
#define endl "\n"
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	set<pair<int, pair<int, string>>> set1;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int m;
		string str;
		cin >> m >> str;
		set1.insert(make_pair(m, make_pair(i, str)));
	}

	for (auto i : set1) {
		cout << i.first << " " << i.second.second << endl;
	}
}