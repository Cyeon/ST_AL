#include<iostream>
#include<vector>
using namespace std;
#define endl "\n"
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<int> vecN, vecSum;
	int n, m;
	cin >> n >> m;
	vecSum.push_back(0);

	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		vecSum.push_back((vecSum[i - 1] + a));
	}

	for (int i = 0; i < m; i++)
	{
		int l, j;
		cin >> l >> j;
		cout << vecSum[j] - vecSum[l - 1] << endl;
	}
}