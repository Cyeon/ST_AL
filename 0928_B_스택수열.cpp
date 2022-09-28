#include <iostream>
#include <stack>
#include <vector>
#define endl "\n"

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	stack<int> stk;
	vector<int> vec;
	int n, idx = 0;
	string result = "";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		vec.push_back(a);
		stk.push(i + 1);
		result += "+";
		while (stk.top() == vec[idx]) {
			stk.pop();
			result += "-";
			idx++;
			if (idx >= vec.size()|| stk.empty()) { break; }
		}
	}

	if (!stk.empty()) {
		cout << "NO";
	}
	else
	{
		for (int i = 0; i < result.size(); i++)
		{
			cout << result[i] << endl;
		}
	}
}