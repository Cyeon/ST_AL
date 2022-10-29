#include <iostream>
#include <map>
#define endl "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;

	for (int test = 0; test < t; test++)
	{
		map<int, int>map1; //first ¼ýÀÚ, second °¹¼ö

		int k;
		cin >> k;
		map<int, int>::iterator iter;

		for (int i = 0; i < k; i++)
		{
			int a;
			string str;
			cin >> str >> a;

			if (str == "I") {
				if (map1.find(a) != map1.end()) {
					map1[a] += 1;
				}
				else {
					map1.insert(make_pair(a, 1));
				}
			}
			else if (str == "D") {
				if (map1.empty()) { continue; }
				if (a == -1) {
					iter = map1.begin();
					if (iter->second > 1) {
						map1[iter->first] -= 1;
					}
					else {
						map1.erase(iter);
					}
				}
				else if (a == 1) {
					iter = --map1.end();
					if (iter->second > 1) {
						map1[iter->first] -= 1;
					}
					else {
						map1.erase(iter);
					}
				}
			}
		}
		if (map1.empty()) {
			cout << "EMPTY" << endl;
		}
		else {
			iter = --map1.end();
			if (map1.size() == 1) {
				cout << iter->first << " " << iter->first << endl;
			}
			else {
				cout << iter->first << " ";
				iter = map1.begin();
				cout << iter->first << endl;
			}
		}
	}
}