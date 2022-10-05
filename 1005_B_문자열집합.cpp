#include <iostream>
#include <map>
#include <string>
using namespace std;
#define endl "\n"

int main() {
	int n, m, cnt = 0;
	cin >> n >> m;

	map<string, string> map1;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		map1.insert(make_pair(str, str));
	}

	for (int i = 0; i < m; i++)
	{
		string str;
		cin >> str;
		if (map1.find(str) != map1.end()) {
			cnt++;
		}
	}

	cout << cnt;
}