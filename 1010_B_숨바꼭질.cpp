#include <iostream>
#include <queue>
using namespace std;
int arr[] = { -1,1,2 };
bool visited[100001];
int main() {
	queue<pair<int, int>> que;
	int n, k, temp, result = 9999, second = 0;
	cin >> n >> k;
	temp = n;
	if (n != k) {
		que.push(make_pair(n, second));
		visited[n] = true;
		while (!que.empty())
		{
			pair<int, int> pr = que.front();
			que.pop();
			temp = pr.first;
			second = pr.second;
			if (temp != k) {
				second++;
				for (int i = 0; i < 3; i++)
				{
					if (i == 2) {
						if (visited[temp * arr[i]] == false) {
							que.push(make_pair(temp + arr[i], second));
							visited[temp + arr[i]] = true;
						}
					}
					else {
						if (visited[temp + arr[i]] == false) {
							que.push(make_pair(temp + arr[i], second));
							visited[temp + arr[i]] = true;
						}
					}
				}
			}
			else {
				if (second < result) {
					result = second;
				}
				else {
					break;
				}
			}
		}
	}
	cout << result;
}