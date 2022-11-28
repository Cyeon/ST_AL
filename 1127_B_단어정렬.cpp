#include <iostream>
#include <string>
#include <set>
#define endl "\n"
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	set<pair<int, string>> set1;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		set1.insert(make_pair(str.size, str));
	}

	set<pair<int, string>>::iterator iter;
	iter = set1.begin();
	for (int i = 0; i < set1.size(); i++)
	{
		cout << iter->second << endl;
		iter++;
	}

	return 0;
}