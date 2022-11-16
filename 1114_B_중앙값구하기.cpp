#include <iostream>
#include <vector>
#include <queue>
#define endl "\n"
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	for (int test = 0; test < t; test++)
	{
		priority_queue<int> que;
		priority_queue<int, vector<int>, greater<int>> que2;
		vector<int> answer, vec;
		int n, cnt = 0, mid = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int m;
			cin >> m;

			if (i == 0) { 
				mid = m; 
			}
			else {


			}

			if (i % 2 != 0) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}