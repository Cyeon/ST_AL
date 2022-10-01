#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

#define endl "\n"
int main() {
	int n, m;
	cin >> n >> m;
	map<int, string> map1;
	map<string, int> map2;
	vector<string> result;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		map1.insert(make_pair(i + 1, str));
		map2.insert(make_pair(str, i + 1));
	}
	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;
		if (input[0] > '0' || input[0] < '9') {
			map1.find(stoi(input));
		}
	}
}