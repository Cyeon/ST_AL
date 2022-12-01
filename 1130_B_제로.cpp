#include<iostream>
#include<stack>
#define endl "\n"
using namespace std;

int main() {
	stack<int> stk;
	int k, sum = 0;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int input;
		cin >> input;
		if (input == 0) {
			sum -= stk.top();
			stk.pop();
		}
		else
		{
			sum += input;
			stk.push(input);
		}
	}
	cout << sum;
}