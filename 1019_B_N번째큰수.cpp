#include<iostream>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	priority_queue<int, vector<int>, greater<int>> que;
	int n;
	cin >> n;
	for (int i = 0; i < n * n; i++)
	{
		int x;
		cin >> x;

		if (que.size() >= n) {
			que.pop();
		}

		que.push(x);
	}

	que.swap(que);
	cout << que.top();
}