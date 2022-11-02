#include<iostream>
#include <map>
#include<set>
#include <string>
using namespace std;
#define endl "\n"

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int> map1; //문제, 난이도
	set<pair<int, int>> set1; //난이도, 문제

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		map1.insert(make_pair(a, b));
		set1.insert(make_pair(b, a));
	}

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		int num;
		cin >> str;

		if (str == "add") {
			int a, b;
			cin >> a >> b;
			map1.insert(make_pair(a, b));
			set1.insert(make_pair(b, a));
		}
		else if (str == "recommend") {
			cin >> num;
			if (num == 1) {
				cout << set1.rbegin()->second << endl;
			}
			else {
				cout << set1.begin()->second << endl;
			}
		}
		else if (str == "solved") {
			cin >> num;
			set1.erase(make_pair(map1[num], num));
			map1.erase(num);
		}
	}
}