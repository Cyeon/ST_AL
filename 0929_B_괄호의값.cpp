#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	int result = 0;
	int temp = 1;
	stack<char> stk;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {

		switch (str[i])
		{
		case '(':
			temp *= 2;
			stk.push(str[i]);
			break;
		case ')':
			if (stk.empty() || stk.top() != '(') {
				cout << 0;
				return 0;
			}
			if (str[i - 1] == '(') {
				result += temp;
				temp /= 2;
				stk.pop();
			}
			else
			{
				temp /= 2;
				stk.pop();
			}
			break;
		case '[':
			temp *= 3;
			stk.push(str[i]);
			break;
		case ']':
			if (stk.empty() || stk.top() != '[') {
				cout << 0;
				return 0;
			}
			if (str[i - 1] == '[') {
				result += temp;
				temp /= 3;
				stk.pop();
			}
			else
			{
				temp /= 3;
				stk.pop();
			}
			break;
		default:
			break;
		}
	}
	if (!stk.empty()) {
		cout << 0;
		return 0;
	}
	cout << result;
}