#include<iostream>
#include<queue>
using namespace std;
#define endl "\n"
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x != 0) {
			que.push(make_pair(abs(x), x));
		}
		else {
			if (que.empty()) {
				cout << 0 << endl;
				continue;
			}
			cout << que.top().second << endl;
			que.pop();
		}
	}
}