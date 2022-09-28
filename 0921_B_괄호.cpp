#include<iostream>
#include<stack>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int j = 0; j < n; j++) {
		bool print = false;
		string str;
		cin >> str;
		stack<char> stk;
		for (int i = 0; i < str.size(); i++) {
			if (stk.empty() && str[i] == ')') {
				cout << "NO" << endl;
				print = true;
				break;
			}
			switch (str[i])
			{
			case '(':
				stk.push(str[i]);
				break;
			case ')':
				if (stk.top() != '(') {
					cout << "NO" << endl;
					print = true;
				}
				stk.pop();
				break;
			default:
				break;
			}
		}
		if (print) { continue; }

		if (stk.empty()) {
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}