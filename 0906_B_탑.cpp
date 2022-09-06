#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<pair<int, int>> tower;
	vector <int> result;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		int dest = 0;
		cin >> a;

		while (!tower.empty()) {
			if (tower.back().first > a) {
				dest = tower.back().second;
				break;
			}
			else
			{
				tower.pop_back();
			}
		}
		tower.push_back(make_pair(a, i + 1));
		result.push_back(dest);
	}
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
}