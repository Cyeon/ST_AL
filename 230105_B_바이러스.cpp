#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;
bool visited[101];
vector<int> vec[101];
int virCount = -1;

void DFS(int before) {
	if (visited[before]) { return; }
	visited[before] = true;
	virCount++;
	for (int i = 0; i < vec[before].size(); i++)
	{
		DFS(vec[before][i]);
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	DFS(1);

	cout << virCount;
}