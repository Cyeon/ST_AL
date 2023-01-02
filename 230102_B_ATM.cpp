#include <iostream>
#include <set>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n, min = 0, temp = 0;
	cin >> n;
	set<pair<int, int>> set1; //분, 대기 번호

	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		set1.insert(make_pair(m, i + 1));
	}

	set<pair<int, int>>::iterator iter;
	iter = set1.begin();


	while (iter != set1.end())
	{
		temp += iter->first;
		min += temp;
		iter++;
	}

	cout << min;
}