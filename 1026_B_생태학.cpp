#include <iostream>
#include <map>
#include <string>
using namespace std;

#define endl "\n"

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, int> map1;
	map<string, int>::iterator iter;

	float allSize = 0;

	while (true)
	{
		string str;
		getline(cin, str);

		iter = map1.find(str);

		if (cin.eof() == true) {
			break;
		}

		if (iter != map1.end()) {
			int temp = iter->second;
			temp++;
			map1.erase(str);
			map1.insert(make_pair(str, temp));
		}
		else
		{
			map1.insert(make_pair(str, 1));
		}
		allSize++;

	}

	cout << fixed;
	cout.precision(4);

	while (!map1.empty())
	{
		iter = map1.begin();
		float result = iter->second * 100 / allSize;

		cout << iter->first << " " << result << endl;
		map1.erase(iter);
	}
}