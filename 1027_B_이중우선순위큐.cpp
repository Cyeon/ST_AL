#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <algorithm>
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
		/*priority_queue<int> maxQue;
		priority_queue<int, vector<int>, greater<int>> minQue;*/
		//int maxSize = 0, minSize = 0, size = 0;
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
					iter = map1.find(a);
					map1.erase(a);
					map1.insert(make_pair(a, ++iter->second));
				}
				else {
					map1.insert(a, 1);
				}
				/*maxQue.push(a);
				minQue.push(a);
				size++;*/
			}
			else if (str == "D") {
				if (map1.empty()) { continue; }
				//if (size == 0) { continue; }
				//size--;
				if (a == 1) {
					iter = map1.begin();
					map1.erase(iter);
					//maxSize++;
				}
				else if (a == -1) {
					iter = map1.end();
					map1.erase(iter);
					/*if (size == 0) {
						maxSize++;
					}
					else
					{
						minSize++;
					}*/
				}
			}
		}
		if (map1.empty()) {
			cout << "EMPTY" << endl;
		}
		else {
			iter = map1.begin();
			if (map1.size() == 1) {
				cout << iter->first << " " << iter->first << endl;
			}
			else {
				cout << iter->first << " ";
				iter = map1.end();
				cout << iter->first << endl;
			}

		}

		/*if (size == 0) {
			cout << "EMPTY" << endl;
		}
		else {

			for (int j = 0; j < maxSize; j++)
			{
				maxQue.pop();
			}

			for (int j = 0; j < minSize; j++)
			{
				minQue.pop();
			}

			int max = maxQue.top();
			int min = minQue.top();

			cout << max << " " << min << endl;
		}*/
	}

}