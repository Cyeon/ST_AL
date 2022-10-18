#include<iostream>
#include<queue>
using namespace std;
#define endl "\n"

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	priority_queue<int, vector<int>, greater<int>> que;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x == 0) {
			if (que.empty()) {
				cout << 0 << endl;
			}
			else
			{
				cout << que.top() << endl;
				que.pop();
			}
		}
		else {
			que.push(x);
		}
	}
}