#include <iostream>
#include <queue>
using namespace std;
bool visited[100001];
int main() {
	queue<pair<int, int>> que;
	int n, k, temp, result = 9999, second = 0;
	cin >> n >> k;
	temp = n;
	if (n != k) {
		que.push(make_pair(n, second));
		while (!que.empty())
		{
			pair<int, int> pr = que.front();
			que.pop();
			temp = pr.first;
			second = pr.second;

			if (temp < 0 || temp>100001) {
				continue;
			}

			visited[temp] = true;

			if (temp == k) {
				result = second;
				break;
			}

			second++;
			vector<int> arr = { temp - 1,  temp + 1, temp * 2 };

			for (int i = 0; i < 3; i++)
			{
				if ((arr[i] >= 0 && arr[i] <= 100000)) {
					if (visited[arr[i]] == false) {
						que.push(make_pair(arr[i], second));
					}
				}
			}
		}
	}
	else
	{
		result = 0;
	}
	cout << result;
	return 0;
}