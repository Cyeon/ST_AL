#include <iostream>
#include <deque>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	deque<pair<int, int>> deq;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		deq.push_back(make_pair(i + 1, a));
	}
	while (!deq.empty()) {
		pair<int, int> current = deq.front();
		deq.pop_front();
		cout << current.first << " ";
		if (deq.empty()) { break; }
		for (int j = 1; j < abs(current.second); j++)
		{
			if (current.second > 0) {
				deq.push_back(deq.front());
				deq.pop_front();
			}
			else {
				deq.push_front(deq.back());
				deq.pop_back();
			}
		}
		if (current.second < 0) {
			deq.push_front(deq.back());
			deq.pop_back();
		}
	}
}