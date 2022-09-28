#include <iostream>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, input;
	stack<int> stk;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "push") {
			cin >> input;
			stk.push(input);
			continue;
		}
		else if (str == "pop") {
			if (stk.empty()) {
				cout << -1;
			}
			else
			{
				cout << stk.top();
				stk.pop();
			}
		}
		else if (str == "size") {
			cout << stk.size();

		}
		else if (str == "empty") {
			if (stk.empty()) {
				cout << "1";
			}
			else
			{
				cout << "0";
			}
		}
		else if (str == "top")
		{
			if (stk.empty()) {
				cout << -1;
			}
			else {
				cout << stk.top();
			}
		}
		cout << "\n";
	}
}