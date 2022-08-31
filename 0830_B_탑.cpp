#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> tower;
	vector <int> result;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		vector<int> before = tower;
		int a;
		cin >> a;

		for (int j = before.size() - 1; j >= 0; j--)
		{
			if (before[j] > a) {
				result.push_back(j + 1);
				break;
			}
			else if (j == 0)
			{
				result.push_back(0);
			}
			else
			{
				continue;
			}
		}
		if (i == 0) { result.push_back(0); }
		tower.push_back(a);
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
}