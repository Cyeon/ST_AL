#include <iostream>
#include <vector>
#include <queue>
#define endl "\n"
using namespace std;

int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };
bool visited[1001][1001];
int tomato[1001][1001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int day = 0;

	int n, m;
	cin >> n >> m;

	queue<pair<int, pair<int, int>>> que;
	fill_n(tomato[0], 1002001, -1);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> tomato[i][j];
			if (tomato[i][j] == 1) {
				que.push({ 0, make_pair(i, j) });
			}
		}
	}

	while (!que.empty())
	{
		int nowDay = que.front().first;
		pair<int, int> axis = que.front().second;
		if (nowDay > day) { day = nowDay; }
		que.pop();

		if (visited[axis.first][axis.second]) { continue; }
		visited[axis.first][axis.second] = true;
		tomato[axis.first][axis.second] = nowDay;

		for (int i = 0; i < 4; i++)
		{
			int x = axis.first + dx[i];
			int y = axis.second + dy[i];

			if (x >= 0 && x < n && y < m && y >= 0) {
				if (tomato[x][y] == 0)
				{
					que.push({ nowDay + 1,make_pair(x,y) });
				}
			}
		}
	}

	cout << day;
}